"""Load Faber highlight vocabulary from the Radix compiler sources."""

from __future__ import annotations

import re
from dataclasses import dataclass
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parents[1]
DEFAULT_RADIX_ROOT = REPO_ROOT.parent / "radix"

SCAN_GLYPH_LITERALS = [
    "¬",
    "‥",
    "…",
    "←",
    "→",
    "↦",
    "⇐",
    "⇒",
    "⇥",
    "∴",
    "∪",
    "≡",
    "≈",
    "≉",
    "≠",
    "≤",
    "≥",
    "<",
    ">",
    "!.",
    "![",
    "!(",
    "⊜",
    "∧",
    "∨",
    "⊻",
    "∷",
    "⊕",
    "⊖",
    "?.",
    "?[",
    "?(",
    "?",
    "!",
    "+",
    "-",
    "*",
    "/",
    "%",
    "=",
    ".",
    "@",
]

WIDTH_MARKERS = [
    "i8",
    "i16",
    "i32",
    "i64",
    "u8",
    "u16",
    "u32",
    "u64",
    "f16",
    "f32",
    "f64",
]

SUGAR_PREFIXES = ("t", "v", "m", "s", "l")

CONTROL_CATEGORIES = {
    "ControlFlow",
    "Transfer",
    "ErrorHandling",
    "EntryPoint",
    "Resource",
    "Endpoint",
}

DECL_CATEGORIES = {"Declaration", "Modifier"}

BOOLEAN_KEYWORDS = {"verum", "falsum"}


@dataclass(frozen=True)
class KeywordSpec:
    text: str
    active: bool
    category: str


def radix_root(explicit: Path | None = None) -> Path:
    if explicit is not None:
        return explicit.resolve()
    env = __import__("os").environ.get("RADIX_ROOT")
    if env:
        return Path(env).resolve()
    return DEFAULT_RADIX_ROOT.resolve()


def parse_keyword_specs(keywords_rs: Path) -> list[KeywordSpec]:
    text = keywords_rs.read_text(encoding="utf-8")
    specs: list[KeywordSpec] = []
    marker = "KeywordSpec {"
    start = 0
    while True:
        begin = text.find(marker, start)
        if begin < 0:
            break
        depth = 0
        end = begin + len(marker) - 1
        while end < len(text):
            ch = text[end]
            if ch == "{":
                depth += 1
            elif ch == "}":
                depth -= 1
                if depth == 0:
                    break
            end += 1
        body = text[begin : end + 1]
        text_match = re.search(r'text: "([^"]+)"', body)
        token_match = re.search(r"token_kind: (Some\(TokenKind::\w+\)|None)", body)
        category_match = re.search(r"category: KeywordCategory::(\w+)", body)
        if text_match and token_match and category_match:
            specs.append(
                KeywordSpec(
                    text=text_match.group(1),
                    active=token_match.group(1).startswith("Some"),
                    category=category_match.group(1),
                )
            )
        start = end + 1
    return specs


def parse_builtin_types(expr_rs: Path) -> list[str]:
    text = expr_rs.read_text(encoding="utf-8")
    anchor = text.find("fn is_conversio_type_keyword")
    if anchor < 0:
        raise RuntimeError(f"could not find is_conversio_type_keyword in {expr_rs}")
    window = text[anchor : anchor + 2500]
    matches_idx = window.find("matches!(")
    if matches_idx < 0:
        raise RuntimeError(f"could not parse builtin type list from {expr_rs}")
    names = re.findall(r'"([^"]+)"', window[matches_idx : matches_idx + 1200])
    if not names:
        raise RuntimeError(f"could not parse builtin type list from {expr_rs}")
    sugars: list[str] = []
    for prefix in SUGAR_PREFIXES:
        for marker in WIDTH_MARKERS:
            sugars.append(f"{prefix}{marker}")
    sugars.extend(WIDTH_MARKERS)
    extras = ["vacua", "unio", "bivalens"]  # common type-position spellings outside matches!()
    merged = list(dict.fromkeys([*names, *sugars, *extras]))
    return sorted(merged, key=lambda s: (-len(s), s))


def classify_keyword(spec: KeywordSpec) -> str:
    if spec.text in BOOLEAN_KEYWORDS:
        return "boolean"
    if spec.category in DECL_CATEGORIES:
        return "keyword_declaration"
    if spec.category in CONTROL_CATEGORIES:
        return "keyword_control"
    return "keyword_other"


def load_vocabulary(radix_root_path: Path | None = None) -> dict[str, list[str]]:
    root = radix_root(radix_root_path)
    keywords_rs = root / "crates/radix/src/lexer/keywords.rs"
    expr_rs = root / "crates/radix/src/parser/expr.rs"
    if not keywords_rs.is_file():
        raise FileNotFoundError(f"missing Radix keywords registry: {keywords_rs}")
    if not expr_rs.is_file():
        raise FileNotFoundError(f"missing Radix parser expr module: {expr_rs}")

    grouped: dict[str, list[str]] = {
        "keyword_control": [],
        "keyword_declaration": [],
        "keyword_other": [],
        "boolean": [],
        "builtin_type": parse_builtin_types(expr_rs),
        "operator": list(SCAN_GLYPH_LITERALS),
    }

    for spec in parse_keyword_specs(keywords_rs):
        if not spec.active:
            continue
        if spec.text in grouped["builtin_type"]:
            continue
        bucket = classify_keyword(spec)
        grouped[bucket].append(spec.text)

    for bucket in grouped:
        if bucket == "operator":
            continue
        grouped[bucket] = sorted(set(grouped[bucket]))

    return grouped