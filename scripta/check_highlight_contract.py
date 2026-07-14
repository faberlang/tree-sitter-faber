#!/usr/bin/env python3
"""Compare Radix lex tokens with tree-sitter leaves on Faber source files."""

from __future__ import annotations

import argparse
import json
import re
import subprocess
import sys
import tempfile
import xml.etree.ElementTree as ET
from dataclasses import dataclass
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parents[1]
DEFAULT_RADIX_ROOT = REPO_ROOT.parent / "radix"
DEFAULT_CORPUS_ROOT = REPO_ROOT.parent / "examples" / "corpus"

IGNORE_RADIX_KINDS = {
    "Eof",
    "Newline",
    "Error",
}

BOOLEAN_KINDS = {"Verum", "Falsum"}

VISIBILITY_ANNOTATION_NAMES = {"privata", "publica", "protecta"}

DECL_KEYWORD_KINDS = {
    "Discretio",
    "Fixum",
    "Functio",
    "Genus",
    "Implendum",
    "Importa",
    "Magnitudo",
    "Ordo",
    "Proba",
    "Probandum",
    "Sit",
    "Typus",
    "Varia",
    "Abstractus",
    "Ceteri",
    "Curata",
    "Errata",
    "Exitus",
    "Generis",
    "Iacit",
    "Immutata",
    "Nexum",
    "Optiones",
    "Prae",
    "Privata",
    "Protecta",
    "Publica",
    "Implet",
    "Sub",
    "Sponte",
}

CONTROL_KEYWORD_KINDS = {
    "Casu",
    "Ceterum",
    "Custodi",
    "Discerne",
    "Dum",
    "Elige",
    "Ergo",
    "Fac",
    "Itera",
    "Secus",
    "Si",
    "Sic",
    "Sin",
    "Perge",
    "Redde",
    "Rumpe",
    "Tacet",
    "Adfirma",
    "Cape",
    "Demum",
    "Iace",
    "Mori",
    "Tempta",
    "Cede",
    "Ad",
    "Argumenta",
    "Cura",
    "Emitte",
    "Incipiet",
    "Incipit",
    "Meus",
    "Tuus",
}

BUILTIN_TYPE_WORDS = set(
    json.loads((REPO_ROOT / "scripta" / "vocabulary.json").read_text(encoding="utf-8"))["builtin_type"]
)


@dataclass(frozen=True)
class Leaf:
    start: int
    end: int
    kind: str


def point_to_byte(source: str, row: int, col: int) -> int:
    offset = 0
    for line in source.splitlines(keepends=True)[:row]:
        offset += len(line.encode("utf-8"))
    line = source.splitlines(keepends=True)[row] if row < len(source.splitlines(keepends=True)) else ""
    line_bytes = line.encode("utf-8")
    return offset + min(col, len(line_bytes))


def slice_bytes(source: str, start: int, end: int) -> str:
    return source.encode("utf-8")[start:end].decode("utf-8")


def radix_root(explicit: Path | None) -> Path:
    if explicit is not None:
        return explicit.resolve()
    env = __import__("os").environ.get("RADIX_ROOT")
    if env:
        return Path(env).resolve()
    return DEFAULT_RADIX_ROOT.resolve()


def corpus_root(explicit: Path | None) -> Path:
    if explicit is not None:
        return explicit.resolve()
    env = __import__("os").environ.get("FABER_CORPUS_ROOT")
    if env:
        return Path(env).resolve()
    return DEFAULT_CORPUS_ROOT.resolve()


def peel_frontmatter(source: str) -> tuple[str, int]:
    if not source.startswith("+++"):
        return source, 0
    lines = source.splitlines(keepends=True)
    if not lines or lines[0].strip("\r\n") != "+++":
        return source, 0
    cursor = len(lines[0])
    for line in lines[1:]:
        if line.strip("\r\n") == "+++":
            return source[cursor + len(line) :], cursor + len(line)
        cursor += len(line)
    return source, 0


def normalize_radix_kind(raw: str) -> tuple[str, str | None]:
    if raw.startswith("Ident(") or raw.startswith("Underscore("):
        return "identifier", None
    if raw.startswith("Integer(") or raw.startswith("Float("):
        return "number", None
    if raw.startswith("String(") or raw.startswith("AsciiString(") or raw.startswith("BacktickString("):
        return "string", None
    if raw.startswith("OctetiString("):
        return "octeti_string", None
    if raw.startswith("LineComment("):
        return "line_comment", None

    base = raw.split("(", 1)[0]
    if base in IGNORE_RADIX_KINDS:
        return "ignore", None
    if base in BOOLEAN_KINDS:
        return "boolean", None
    if base == "At" or raw == "At":
        return "operator", None
    if base in DECL_KEYWORD_KINDS:
        return "keyword_declaration", None
    if base in CONTROL_KEYWORD_KINDS:
        return "keyword_control", None
    if base.endswith("String"):
        return "string", None
    if base in {
        "LParen",
        "RParen",
        "LBrace",
        "RBrace",
        "LBracket",
        "RBracket",
        "Comma",
        "Colon",
        "Semicolon",
    }:
        return "punctuation", None
    if base in {"Plus", "Minus", "Star", "Slash", "Percent", "Dot", "Bang", "Question"} or base.startswith(
        ("Eq", "Lt", "Gt", "Bang", "Question", "Bitwise", "Post", "Arrow", "Exit", "Assign", "Cup", "Conversio", "Verte", "Approx")
    ):
        return "operator", None
    if base.endswith(")"):
        base = raw.split("(", 1)[0]
    return "keyword_other", base


def radix_kind_for_ident(text: str, span_text: str) -> str:
    if span_text in BUILTIN_TYPE_WORDS:
        return "builtin_type"
    return "identifier"


def run_radix_lex(radix_bin: Path, body: str) -> list[Leaf]:
    proc = subprocess.run(
        [str(radix_bin), "lex", "-"],
        input=body,
        check=True,
        capture_output=True,
        text=True,
    )
    payload = json.loads(proc.stdout)

    leaves: list[Leaf] = []
    for token in payload["tokens"]:
        kind_raw = token["kind"]
        start = token["span"][0]
        end = token["span"][1]
        if start < 0 or end <= start:
            continue
        kind, _ = normalize_radix_kind(kind_raw)
        if kind == "ignore":
            continue
        if kind == "identifier":
            span_text = slice_bytes(body, start, end)
            kind = radix_kind_for_ident(span_text, span_text)
        leaves.append(Leaf(start, end, kind))
    return leaves


def run_tree_sitter_leaves(repo_root: Path, source: str) -> list[Leaf]:
    with tempfile.NamedTemporaryFile("w", suffix=".fab", delete=False, encoding="utf-8") as handle:
        handle.write(source)
        temp_path = handle.name

    proc = subprocess.run(
        ["npx", "--yes", "tree-sitter-cli@0.24.7", "parse", "-x", temp_path],
        cwd=repo_root,
        check=True,
        capture_output=True,
        text=True,
    )
    xml_text = proc.stdout
    if "<?xml" not in xml_text:
        raise RuntimeError("tree-sitter XML output missing")

    root = ET.fromstring(xml_text[xml_text.index("<?xml") :])
    leaves: list[Leaf] = []
    skip = {
        "faber_newline",
        "program",
        "frontmatter",
        "annotation",
        "braced_annotation",
        "annotation_field",
        "annotation_arguments",
        "annotation_name",
    }

    for element in root.iter():
        kind = element.tag
        if kind in skip:
            continue
        if "srow" not in element.attrib:
            continue
        start = point_to_byte(source, int(element.attrib["srow"]), int(element.attrib["scol"]))
        end = point_to_byte(source, int(element.attrib["erow"]), int(element.attrib["ecol"]))
        if end <= start:
            continue
        leaves.append(Leaf(start, end, kind))

    leaves.sort(key=lambda leaf: (leaf.start, leaf.end, leaf.kind))
    return leaves


def normalize_compare_kind(kind: str, text: str | None = None) -> str:
    if kind.startswith("keyword_"):
        return "keyword"
    if kind in {"ascii_string", "backtick_string", "octeti_string", "guillemet_string"}:
        return "string"
    if kind == "known_annotation_name" and text in VISIBILITY_ANNOTATION_NAMES:
        return "keyword"
    if kind in {
        "identifier",
        "builtin_type",
        "annotation_value_type",
        "known_annotation_name",
        "annotation_modifier",
    }:
        return "type_or_ident"
    if kind in {"hash", "at_sign", "eq_sign"}:
        return "operator"
    if kind in {"lbrace", "rbrace"}:
        return "punctuation"
    return kind


def compare_leaves(path: Path, source: str, radix_leaves: list[Leaf], ts_leaves: list[Leaf]) -> list[str]:
    issues: list[str] = []
    radix_kinds = [normalize_compare_kind(leaf.kind) for leaf in radix_leaves]
    ts_kinds = [
        normalize_compare_kind(leaf.kind, slice_bytes(source, leaf.start, leaf.end))
        for leaf in ts_leaves
    ]

    if radix_kinds != ts_kinds:
        mismatch_at = next(
            (index for index, pair in enumerate(zip(radix_kinds, ts_kinds)) if pair[0] != pair[1]),
            min(len(radix_kinds), len(ts_kinds)),
        )
        issues.append(
            f"{path}: kind sequence mismatch at index {mismatch_at}: "
            f"radix={radix_kinds[max(0, mismatch_at - 2) : mismatch_at + 3]} "
            f"tree-sitter={ts_kinds[max(0, mismatch_at - 2) : mismatch_at + 3]}"
        )
    return issues


def textmate_annotation_tokens() -> tuple[list[tuple[str, str, tuple[str, ...]]], list[str]]:
    grammar_path = REPO_ROOT / "grammars" / "fab.tmLanguage.json"
    fixture_path = REPO_ROOT / "fixtures" / "annotations.fab"
    grammar = json.loads(grammar_path.read_text(encoding="utf-8"))
    repository = grammar["repository"]
    annotation = repository["annotation"]
    issues: list[str] = []

    if "match" in annotation:
        issues.append("TextMate annotation rule still uses whole-line match")
    if "begin" not in annotation or "end" not in annotation:
        issues.append("TextMate annotation rule must use begin/end")
    if issues:
        return [], issues

    tokens: list[tuple[str, str, tuple[str, ...]]] = []
    for line in fixture_path.read_text(encoding="utf-8").splitlines():
        if not line.lstrip().startswith("@"):
            continue
        at_index = line.index("@")
        scopes = ("source.faber", annotation["name"])
        if "beginCaptures" in annotation:
            capture = annotation["beginCaptures"].get("0", {})
            capture_name = capture.get("name")
            if capture_name:
                tokens.append((line, "@", scopes + (capture_name,)))
        tokens.extend(tokenize_textmate_patterns(repository, annotation.get("patterns", []), line, at_index + 1, scopes))
    return tokens, issues


def tokenize_textmate_patterns(
    repository: dict,
    patterns: list[dict],
    line: str,
    start: int,
    scopes: tuple[str, ...],
) -> list[tuple[str, str, tuple[str, ...]]]:
    tokens: list[tuple[str, str, tuple[str, ...]]] = []
    pos = start
    while pos < len(line):
        match = first_textmate_match(repository, patterns, line, pos, scopes)
        if match is None:
            pos += 1
            continue
        text, token_scopes, end = match
        tokens.append((line, text, token_scopes))
        pos = max(end, pos + 1)
    return tokens


def first_textmate_match(
    repository: dict,
    patterns: list[dict],
    line: str,
    pos: int,
    scopes: tuple[str, ...],
) -> tuple[str, tuple[str, ...], int] | None:
    for pattern in patterns:
        include = pattern.get("include")
        if include:
            if not include.startswith("#"):
                continue
            rule = repository[include[1:]]
            nested = rule.get("patterns", [rule])
            match = first_textmate_match(repository, nested, line, pos, scopes)
            if match is not None:
                return match
            continue

        if "match" in pattern:
            compiled = re.compile(pattern["match"])
            found = compiled.match(line, pos)
            if found is None or found.end() <= pos:
                continue
            return found.group(0), scopes + (pattern["name"],), found.end()

        if "begin" in pattern and "end" in pattern:
            begin = re.compile(pattern["begin"])
            found = begin.match(line, pos)
            if found is None:
                continue
            end = re.compile(pattern["end"]).search(line, found.end())
            token_end = end.end() if end is not None else len(line)
            return line[pos:token_end], scopes + (pattern["name"],), token_end
    return None


def check_textmate_annotation_scopes() -> list[str]:
    tokens, issues = textmate_annotation_tokens()
    if issues:
        return issues

    expected = [
        ("@ json", "@", "keyword.operator.faber"),
        ("@ json", "json", "entity.other.attribute-name.faber"),
        ("@ privata", "privata", "entity.other.attribute-name.faber"),
        ('    @ json { nomen = "wire" }', "json", "entity.other.attribute-name.faber"),
        ('    @ json { nomen = "wire" }', "nomen", "variable.parameter.faber"),
        ('    @ json { nomen = "wire" }', '"wire"', "string.quoted.double.faber"),
        ('@ cli "demo"', "cli", "entity.other.attribute-name.faber"),
        ('@ cli "demo"', '"demo"', "string.quoted.double.faber"),
        ('@ versio "0.1.0"', "versio", "entity.other.attribute-name.faber"),
        ('@ versio "0.1.0"', '"0.1.0"', "string.quoted.double.faber"),
        (
            '@ optio verbose longum "verbose" typus bivalens descriptio "Verbose output"',
            "optio",
            "entity.other.attribute-name.faber",
        ),
        (
            '@ optio verbose longum "verbose" typus bivalens descriptio "Verbose output"',
            "longum",
            "variable.parameter.faber",
        ),
        (
            '@ optio verbose longum "verbose" typus bivalens descriptio "Verbose output"',
            "descriptio",
            "variable.parameter.faber",
        ),
        (
            '@ optio verbose longum "verbose" typus bivalens descriptio "Verbose output"',
            '"Verbose output"',
            "string.quoted.double.faber",
        ),
    ]
    for line, text, scope in expected:
        if not any(
            token_line == line
            and token_text == text
            and "meta.annotation.faber" in token_scopes
            and scope in token_scopes
            for token_line, token_text, token_scopes in tokens
        ):
            issues.append(
                f"TextMate annotation scope missing on {line!r} for {text!r}: expected {scope}"
            )
    return issues


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--radix-root", type=Path, default=None)
    parser.add_argument("--corpus-root", type=Path, default=None)
    parser.add_argument("--limit", type=int, default=25, help="max corpus files to check with --corpus")
    parser.add_argument("--corpus", action="store_true", help="check examples/corpus instead of fixtures/")
    parser.add_argument("--file", type=Path, action="append", default=[], help="specific .fab file")
    args = parser.parse_args()

    vocab_path = REPO_ROOT / "scripta" / "vocabulary.json"
    if not vocab_path.is_file():
        print("error: run scripta/generate_grammar.py first", file=sys.stderr)
        return 1

    radix_bin = radix_root(args.radix_root) / "target" / "debug" / "radix"
    if not radix_bin.is_file():
        print(f"error: missing radix binary at {radix_bin}; build with cargo build -p radix --bin radix", file=sys.stderr)
        return 1

    files = [path.resolve() for path in args.file]
    if not files:
        if args.corpus:
            corpus = corpus_root(args.corpus_root)
            files = sorted(corpus.rglob("*.fab"))[: args.limit]
        else:
            files = sorted((REPO_ROOT / "fixtures").glob("*.fab"))

    issues: list[str] = []
    for path in files:
        source = path.read_text(encoding="utf-8")
        body, _ = peel_frontmatter(source)
        try:
            radix_leaves = run_radix_lex(radix_bin, body)
            ts_leaves = run_tree_sitter_leaves(REPO_ROOT, body)
        except (subprocess.CalledProcessError, RuntimeError) as err:
            issues.append(f"{path}: tree-sitter/radix invocation failed: {err}")
            continue
        issues.extend(compare_leaves(path, body, radix_leaves, ts_leaves))
    issues.extend(check_textmate_annotation_scopes())

    if issues:
        print("highlight contract failures:")
        for issue in issues:
            print(f"  - {issue}")
        return 1

    print(f"highlight contract ok ({len(files)} file(s); TextMate annotations ok)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
