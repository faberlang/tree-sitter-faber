#!/usr/bin/env python3
"""Generate a TextMate grammar for Faber from Radix lexer vocabulary."""

from __future__ import annotations

import argparse
import json
import re
import sys
from pathlib import Path

from radix_vocab import load_vocabulary

REPO_ROOT = Path(__file__).resolve().parents[1]
OUTPUT_PATH = REPO_ROOT / "grammars" / "fab.tmLanguage.json"
GRAMMAR_UUID = "f8b2c4e1-6a3d-4f90-9b1e-2c7d8fab001"


def alternation_pattern(words: list[str], *, word_boundary: bool) -> str | None:
    if not words:
        return None
    ordered = sorted(set(words), key=lambda word: (-len(word), word))
    inner = "|".join(re.escape(word) for word in ordered)
    if word_boundary:
        return rf"\b({inner})\b"
    return rf"({inner})"


def build_textmate_grammar(vocab: dict[str, list[str]]) -> dict:
    keyword_repository: dict[str, dict] = {}

    keyword_groups = [
        ("keyword-control", vocab["keyword_control"], "keyword.control.faber"),
        ("keyword-declaration", vocab["keyword_declaration"], "keyword.declaration.faber"),
        ("keyword-other", vocab["keyword_other"], "keyword.other.faber"),
        ("boolean-literal", vocab["boolean"], "constant.language.boolean.faber"),
        ("builtin-type", vocab["builtin_type"], "support.type.builtin.faber"),
        ("annotation-name", vocab["annotation_name"], "entity.other.attribute-name.faber"),
        ("annotation-modifier", vocab["annotation_modifier"], "variable.parameter.faber"),
    ]

    keywords_patterns: list[dict] = []
    for repo_name, words, scope in keyword_groups:
        pattern = alternation_pattern(words, word_boundary=True)
        if not pattern:
            continue
        keyword_repository[repo_name] = {
            "match": pattern,
            "name": scope,
        }
        keywords_patterns.append({"include": f"#{repo_name}"})

    operator_pattern = alternation_pattern(vocab["operator"], word_boundary=False)
    if operator_pattern:
        keyword_repository["operators"] = {
            "match": operator_pattern,
            "name": "keyword.operator.faber",
        }

    repository = {
        "frontmatter": {
            "begin": r"\A\+\+\+",
            "end": r"^\+\+\+$",
            "name": "comment.block.frontmatter.faber",
        },
        "comment": {
            "name": "comment.line.number-sign.faber",
            "match": r"^\s*#.*$",
        },
        "annotation": {
            "name": "meta.annotation.faber",
            "match": r"@\s*[A-Za-z_][A-Za-z0-9_]*(?:\s+[^\n]*)?",
        },
        "strings": {
            "patterns": [
                {
                    "name": "string.quoted.double.faber",
                    "begin": '"',
                    "end": '"',
                    "patterns": [{"name": "constant.character.escape.faber", "match": r"\\."}],
                },
                {
                    "name": "string.quoted.single.faber",
                    "begin": "'",
                    "end": "'",
                    "patterns": [{"name": "constant.character.escape.faber", "match": r"\\."}],
                },
                {
                    "name": "string.quoted.backtick.faber",
                    "begin": "`",
                    "end": "`",
                    "patterns": [{"name": "constant.character.escape.faber", "match": r"\\."}],
                },
                {
                    "name": "string.quoted.guillemet.faber",
                    "begin": "«",
                    "end": "»",
                    "patterns": [{"name": "constant.character.escape.faber", "match": r"\\."}],
                },
                {
                    "name": "string.quoted.octeti.faber",
                    "begin": r"\|",
                    "end": r"\|",
                    "patterns": [{"name": "constant.character.escape.faber", "match": r"\\."}],
                },
            ]
        },
        "numbers": {
            "patterns": [
                {
                    "name": "constant.numeric.hex.faber",
                    "match": r"\b0[xX][0-9A-Fa-f_]+\b",
                },
                {
                    "name": "constant.numeric.binary.faber",
                    "match": r"\b0[bB][01_]+\b",
                },
                {
                    "name": "constant.numeric.octal.faber",
                    "match": r"\b0[oO][0-7_]+\b",
                },
                {
                    "name": "constant.numeric.decimal.faber",
                    "match": r"\b\d[\d_]*(?:\.\d[\d_]*)?(?:[eE][+-]?\d+)?\b",
                },
            ]
        },
        "keywords": {
            "patterns": keywords_patterns,
        },
        "identifiers": {
            "name": "variable.other.faber",
            "match": r"[A-Za-z_][A-Za-z0-9_]*",
        },
        **keyword_repository,
    }

    patterns = [
        {"include": "#frontmatter"},
        {"include": "#comment"},
        {"include": "#strings"},
        {"include": "#annotation"},
        {"include": "#numbers"},
        {"include": "#keywords"},
    ]
    if operator_pattern:
        patterns.append({"include": "#operators"})
    patterns.append({"include": "#identifiers"})

    return {
        "$schema": "https://raw.githubusercontent.com/martinring/tmlanguage/master/tmlanguage.json",
        "name": "Faber",
        "scopeName": "source.faber",
        "fileTypes": ["fab"],
        "uuid": GRAMMAR_UUID,
        "patterns": patterns,
        "repository": repository,
    }


def write_grammar(vocab: dict[str, list[str]]) -> None:
    grammar = build_textmate_grammar(vocab)
    OUTPUT_PATH.parent.mkdir(parents=True, exist_ok=True)
    OUTPUT_PATH.write_text(
        json.dumps(grammar, indent=2, ensure_ascii=False) + "\n",
        encoding="utf-8",
    )


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--radix-root",
        type=Path,
        default=None,
        help="path to radix repo (default: ../radix or $RADIX_ROOT)",
    )
    args = parser.parse_args()

    try:
        vocab = load_vocabulary(args.radix_root)
    except FileNotFoundError as err:
        print(f"error: {err}", file=sys.stderr)
        return 1

    write_grammar(vocab)
    print(f"generated {OUTPUT_PATH.relative_to(REPO_ROOT)}")
    for bucket, words in vocab.items():
        print(f"  {bucket}: {len(words)}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
