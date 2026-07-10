# tree-sitter-faber

Tree-sitter grammar and Zed extension packaging for [Faber](https://github.com/faberlang).

This repository is a **clean-break** editor surface. It provides token-level syntax
highlighting only — not structural parsing, diagnostics, or language-server features.

## Source of truth

Highlight vocabulary is generated from the Radix compiler:

- `../radix/crates/radix/src/lexer/keywords.rs`
- `../radix/crates/radix/src/lexer/scan.rs` glyph inventory

Regenerate after lexer changes:

```bash
./scripta/regenerate
```

Public highlight artifacts (safe to consume without Radix access):

- `grammars/faber.tmLanguage.json` — TextMate grammar for Shiki, VS Code, Linguist-style tooling
- `grammar.js` — Tree-sitter token grammar for Zed and editors

Override the Radix path with `RADIX_ROOT=/path/to/radix` when needed.

## Layout

```text
tree-sitter-faber/
  grammars/
    fab.tmLanguage.json      # generated TextMate grammar
  grammar.js                 # generated token grammar
  queries/highlights.scm     # tree-sitter highlight queries
  languages/faber/
    config.toml              # Zed language config
    highlights.scm           # duplicate required by Zed
  extension.toml             # Zed extension manifest
  src/scanner.c              # line-start `#` comment policy
  scripta/
    generate_grammar.py      # Radix → tree-sitter grammar/queries
    generate_textmate.py     # Radix → TextMate JSON
    check_highlight_contract.py
```

## Zed (dev extension)

```bash
git clone https://github.com/faberlang/tree-sitter-faber
```

In Zed: Command Palette → `zed: install dev extension` → select this directory.

Open a `.fab` file to verify highlighting.

## Contract test

Build Radix once:

```bash
cd ../radix
cargo build -p radix --bin radix
```

Then from this repo:

```bash
python3 scripta/check_highlight_contract.py
python3 scripta/check_highlight_contract.py --corpus --limit 25
```

The checker compares normalized Radix `lex` token-kind sequences with
tree-sitter leaves on corpus files (stripped of `+++` frontmatter). Span-level
parity is a later tightening step.

## Release workflow

1. Update Radix lexer/keywords if needed.
2. `./scripta/regenerate`
3. `python3 scripta/check_highlight_contract.py`
4. Commit generated artifacts.
5. Tag and publish the extension.

## Notes

- `+++` frontmatter is highlighted as metadata, not Faber tokens.
- `#` comments are line-start only, matching Radix `scan.rs`.
- Mid-line `#` is left as a bare `hash` token (Radix reports a lex error).