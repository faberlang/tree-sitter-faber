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
    "↤",
    "⇐",
    "⇒",
    "↢",
    "⇥",
    "∴",
    "∪",
    "∩",
    "∈",
    "∉",
    "≡",
    "≈",
    "≉",
    "≠",
    "≅",
    "≇",
    "≢",
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
    "↑",
    "↓",
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
    "÷",
    "⊘",
    "·",
    "×",
    "⊗",
    "⊙",
    "⇇",
    "≺",
    "≻",
    "⊥",
    "✓",
    "✗",
    "¶",
    "∇",
    "⤒",
    "⤓",
    "ᵀ",
    "=",
    ".",
    "@",
]

# Glyphs the Radix lexer scans as literals (a float token), not operators.
NUMBER_GLYPH_LITERALS = ["∞"]

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

# EBNF annotationName visibility spellings and CLI/metadata names Radix accepts
# after `@` but does not register as global lexer keywords.
ANNOTATION_VISIBILITY_NAMES = ("publica", "privata", "protecta", "futura", "cursor")

EXTRA_ANNOTATION_NAMES = (
    "versio",
    "imperia",
    "json",
    "vertex",
)

EXTRA_ANNOTATION_MODIFIERS = ("nomen",)

BUILTIN_TYPE_EXCLUSIONS = {"nihil"}

# Reader-locale packs whose keyword/type spellings feed the highlight vocabulary.
# Radix packs live in <radix>/locale/<id>/pack.toml. Locale surfaces are sealed
# (en and la spellings never mix in one file), but tree-sitter grammars are
# context-free, so the generated grammar recognizes the UNION of these packs:
# a word is a keyword token regardless of the file's locale. To add a pack,
# append its id here; its spellings must be ASCII identifiers (the grammar's
# `identifier` token is ASCII-only), which the generator verifies.
HIGHLIGHT_LOCALES = ("la", "en")

# Registry keyword specs that are aliases of another canonical (the pack row
# lives on the canonical name, not the alias), so a missing pack row is expected.
PACK_ROW_EXEMPT_KEYWORDS = {"conversion", "nihil"}

# Builtin-type spellings that are the same in every locale (no [types] row):
# numeric width markers and their sugar prefixes, plus these Latin loan names.
LOCALE_INVARIANT_TYPES = {"unio", "vacua"}

# When one surface spelling lands in several keyword-position buckets (possible
# only across locales), the earliest bucket here wins; tree-sitter cannot lex
# one string as two token kinds in the same parser state.
BUCKET_PRIORITY = (
    "boolean",
    "keyword_declaration",
    "keyword_control",
    "keyword_other",
    "builtin_type",
)

# Pack type spellings that are far more often ordinary identifiers than types
# (`int value`, `r.value`): tree-sitter cannot tell type position from binding
# name, so highlighting them would repaint real names as types. `value` is the
# en spelling of `valor`; corpus measure: 52 of 218 occurrences are bindings.
AMBIGUOUS_TYPE_SURFACES = {"value"}

IDENT_RE = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*$")
_PACK_HEADER_RE = re.compile(r"^\[([A-Za-z0-9_.\-]+)\]\s*(?:#.*)?$")
_PACK_ROW_RE = re.compile(r'^([A-Za-z0-9_]+)\s*=\s*"((?:[^"\\]|\\.)*)"\s*(?:#.*)?$')


@dataclass(frozen=True)
class KeywordSpec:
    text: str
    active: bool
    category: str
    scope: str
    contextual: str | None


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
        category_match = re.search(r"category: Keyword(?:Category|Kind)::(\w+)", body)
        scope_match = re.search(
            r"scope: KeywordScope::(Annotation|Global|Contextual)(?:\(([^)]+)\))?",
            body,
        )
        if text_match and token_match and category_match:
            specs.append(
                KeywordSpec(
                    text=text_match.group(1),
                    active=token_match.group(1).startswith("Some"),
                    category=category_match.group(1),
                    scope=scope_match.group(1) if scope_match else "Global",
                    contextual=scope_match.group(2) if scope_match and scope_match.lastindex == 2 else None,
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
    extras = ["vacua", "unio", "bivalens"]
    merged = [name for name in dict.fromkeys([*names, *sugars, *extras]) if name not in BUILTIN_TYPE_EXCLUSIONS]
    return sorted(merged, key=lambda s: (-len(s), s))


def classify_keyword(spec: KeywordSpec) -> str:
    if spec.text in BOOLEAN_KEYWORDS:
        return "boolean"
    if spec.category in DECL_CATEGORIES:
        return "keyword_declaration"
    if spec.category in CONTROL_CATEGORIES:
        return "keyword_control"
    return "keyword_other"


def collect_annotation_vocab(specs: list[KeywordSpec]) -> tuple[list[str], list[str]]:
    names: list[str] = []
    modifiers: list[str] = []

    for spec in specs:
        if spec.category != "Annotation":
            continue
        if spec.contextual == "ANNOTATION_MODIFIER":
            modifiers.append(spec.text)
        elif spec.scope == "Annotation":
            names.append(spec.text)

    names.extend(ANNOTATION_VISIBILITY_NAMES)
    names.extend(EXTRA_ANNOTATION_NAMES)
    modifiers.extend(EXTRA_ANNOTATION_MODIFIERS)
    return (
        sorted(set(names), key=lambda s: (-len(s), s)),
        sorted(set(modifiers), key=lambda s: (-len(s), s)),
    )


def check_glyph_coverage(scan_rs: Path) -> None:
    """Fail generation when Radix's lexer scans a glyph missing from SCAN_GLYPH_LITERALS."""
    text = scan_rs.read_text(encoding="utf-8")
    begin = text.find("fn scan_operator")
    if begin < 0:
        raise RuntimeError(f"could not find scan_operator in {scan_rs}")
    end = text.find("\n    fn ", begin + 1)
    body = text[begin : end if end > 0 else len(text)]
    scanned = {
        ch
        for lit in re.findall(r"'(.)'(?:\s*\|\s*'(.)')?\s*=>", body)
        for ch in lit
        if ch and ord(ch) > 127
    }
    missing = sorted(scanned - set(SCAN_GLYPH_LITERALS) - set(NUMBER_GLYPH_LITERALS))
    if missing:
        raise RuntimeError(
            f"Radix scan_operator glyphs missing from SCAN_GLYPH_LITERALS: {' '.join(missing)}"
        )


def read_pack_tables(pack_toml: Path) -> dict[str, dict[str, str]]:
    """Read the `[keywords]` and `[types]` tables of a Radix locale pack.

    Minimal line reader (python 3.9 has no tomllib): both tables are flat
    `canonical = "surface"` rows. Other tables (diagnostics, intrinsics, ...)
    are skipped.
    """
    wanted = {"keywords", "types"}
    tables: dict[str, dict[str, str]] = {name: {} for name in wanted}
    current: str | None = None
    for line in pack_toml.read_text(encoding="utf-8").splitlines():
        stripped = line.strip()
        header = _PACK_HEADER_RE.match(stripped)
        if header:
            current = header.group(1) if header.group(1) in wanted else None
            continue
        if current is None or not stripped or stripped.startswith("#"):
            continue
        row = _PACK_ROW_RE.match(stripped)
        if row is None:
            raise RuntimeError(f"{pack_toml}: unparseable [{current}] row: {line!r}")
        tables[current][row.group(1)] = row.group(2)
    for name, rows in tables.items():
        if not rows:
            raise RuntimeError(f"{pack_toml}: empty or missing [{name}] table")
    return tables


def add_locale_vocabulary(
    root: Path,
    specs: list[KeywordSpec],
    grouped: dict[str, list[str]],
    registry_types: list[str],
) -> None:
    """Add every supported pack's spellings for the registry's active keywords.

    Bucket comes from the Latin canonical (the same classification the Latin
    registry uses); the surface comes from `pack[keywords][canonical]`. Fails
    generation when a pack lacks a row for an active registry keyword, so a
    Radix keyword added without its pack rows cannot drift silently.
    """
    active = [
        spec
        for spec in specs
        if spec.active and spec.text not in PACK_ROW_EXEMPT_KEYWORDS
    ]
    annotation_modifier_names = set(grouped["annotation_modifier"])
    problems: list[str] = []
    added: dict[str, dict[str, str]] = {}  # surface -> {bucket: locale}

    def note(surface: str, bucket: str, locale: str) -> None:
        added.setdefault(surface, {}).setdefault(bucket, locale)

    for locale in HIGHLIGHT_LOCALES:
        pack_path = root / "locale" / locale / "pack.toml"
        if not pack_path.is_file():
            raise FileNotFoundError(f"missing Radix locale pack: {pack_path}")
        tables = read_pack_tables(pack_path)
        keywords, types = tables["keywords"], tables["types"]

        for spec in active:
            if spec.text in annotation_modifier_names or spec.text in registry_types:
                continue
            surface = keywords.get(spec.text)
            if surface is None:
                problems.append(f"{locale}: no [keywords] row for registry keyword {spec.text!r}")
                continue
            if spec.scope == "Annotation" or spec.category == "Annotation":
                # Annotation-position words are handled below (names/modifiers).
                continue
            note(surface, classify_keyword(spec), locale)

        for canonical in registry_types:
            surface = types.get(canonical)
            if surface is None:
                if canonical not in LOCALE_INVARIANT_TYPES and not re.match(
                    r"^[tvmsl]?[iuf](8|16|32|64)$", canonical
                ):
                    problems.append(f"{locale}: no [types] row for builtin type {canonical!r}")
                continue
            if surface in AMBIGUOUS_TYPE_SURFACES:
                continue
            note(surface, "builtin_type", locale)

        # The null type keeps the Latin registry's classification (`nihil` is
        # keyword_other, not a builtin type): en spells it `none`.
        for canonical in sorted(BUILTIN_TYPE_EXCLUSIONS):
            surface = types.get(canonical)
            if surface is None:
                problems.append(f"{locale}: no [types] row for {canonical!r}")
            else:
                note(surface, "keyword_other", locale)

        # Annotation names and modifiers: same canonical -> surface mapping,
        # covering the extra names Radix accepts after `@` without registering.
        for bucket in ("annotation_name", "annotation_modifier"):
            for canonical in list(grouped[bucket]):
                surface = keywords.get(canonical)
                if surface is not None:
                    note(surface, bucket, locale)

    bad = sorted(word for word in added if not IDENT_RE.match(word))
    if bad:
        problems.append(
            "non-ASCII or non-identifier pack spellings need a grammar identifier change: "
            + " ".join(bad)
        )
    if problems:
        raise RuntimeError("locale pack coverage failed:\n  " + "\n  ".join(problems))

    keyword_buckets = [b for b in BUCKET_PRIORITY]
    # Existing (registry) words keep their bucket; pack surfaces only add words.
    owner: dict[str, str] = {}
    for bucket in keyword_buckets:
        for word in grouped[bucket]:
            owner.setdefault(word, bucket)
    for surface, buckets in sorted(added.items()):
        kw = [b for b in keyword_buckets if b in buckets]
        if kw:
            winner = owner.get(surface) or kw[0]
            if len(kw) > 1 or (surface in owner and owner[surface] != kw[0]):
                LOCALE_COLLISIONS.append(
                    f"{surface}: wanted {sorted(buckets)} -> {winner}"
                )
            owner.setdefault(surface, winner)
            if surface not in grouped[winner]:
                grouped[winner].append(surface)
        for bucket in ("annotation_name", "annotation_modifier"):
            if bucket in buckets and surface not in grouped[bucket]:
                grouped[bucket].append(surface)


LOCALE_COLLISIONS: list[str] = []


def load_vocabulary(radix_root_path: Path | None = None) -> dict[str, list[str]]:
    root = radix_root(radix_root_path)
    keywords_rs = root / "crates/radix-lexer/src/keywords.rs"
    # The parser implementation lives in the `radix-parser` sibling crate
    # (the `radix::parser` module is a re-export barrel).
    expr_rs = root / "crates/radix-parser/src/expr.rs"
    if not keywords_rs.is_file():
        raise FileNotFoundError(f"missing Radix keywords registry: {keywords_rs}")
    if not expr_rs.is_file():
        raise FileNotFoundError(f"missing Radix parser expr module: {expr_rs}")

    check_glyph_coverage(root / "crates/radix-lexer/src/scan.rs")

    specs = parse_keyword_specs(keywords_rs)
    annotation_names, annotation_modifiers = collect_annotation_vocab(specs)

    grouped: dict[str, list[str]] = {
        "keyword_control": [],
        "keyword_declaration": [],
        "keyword_other": [],
        "boolean": [],
        "builtin_type": parse_builtin_types(expr_rs),
        "operator": list(SCAN_GLYPH_LITERALS),
        "annotation_name": annotation_names,
        "annotation_modifier": annotation_modifiers,
    }

    for spec in specs:
        if not spec.active:
            continue
        if spec.text in grouped["annotation_modifier"]:
            continue
        if spec.text in grouped["builtin_type"]:
            continue
        bucket = classify_keyword(spec)
        grouped[bucket].append(spec.text)

    add_locale_vocabulary(root, specs, grouped, list(grouped["builtin_type"]))

    for bucket in grouped:
        if bucket == "operator":
            continue
        grouped[bucket] = sorted(set(grouped[bucket]))

    return grouped
