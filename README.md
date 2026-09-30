# tree-sitter-faber

Tree-sitter grammar and Zed extension packaging for [Faber](https://github.com/faberlang).

This repository is a **clean-break** editor surface. It provides syntax highlighting
only — not structural parsing, diagnostics, an LSP, rendering, WebGPU, or runtime
support.

Highlight vocabulary is generated from the Radix compiler (`keywords.rs`, builtin
types, annotation spellings) and its reader-locale packs (`locale/<id>/pack.toml`).
Radix defines what Faber *is*; this repo defines how editors *display* it.

## What you get

| Artifact | Used by |
|---|---|
| `grammar.js` + generated parser | Zed, Tree-sitter editors |
| `languages/faber/highlights.scm` | Zed |
| `queries/highlights.scm` | `tree-sitter highlight` CLI |
| `grammars/fab.tmLanguage.json` | Shiki, Glow, markdown fences (` ```fab `) |

Zed uses **Tree-sitter + `highlights.scm`**, not the TextMate JSON.

---

## Installing in Zed

Faber highlighting is not in the Zed extension registry yet. Use a **dev extension**
from a local clone.

### 1. Clone the repository

```bash
git clone https://github.com/faberlang/tree-sitter-faber.git
cd tree-sitter-faber
```

### 2. Install the dev extension

In Zed:

1. Command Palette (`Cmd+Shift+P`) → **`zed: install dev extension`**
2. Select the **`tree-sitter-faber` repository root** (the directory that contains
   `extension.toml` — not a parent folder, not a subdirectory)

First install compiles the grammar to WASM and usually takes **20–40 seconds**.

### 3. Verify

1. Open any `.fab` file.
2. Confirm the language indicator (bottom-right) says **Faber**, not Plain Text.
3. Keywords, types, strings, and `@` annotations should be colored.

### Updating after `git pull`

Grammar or highlight changes require a refresh:

```bash
git pull
npm run check:pin-drift     # should pass if pin matches pushed rev
./scripta/prepare_zed_dev   # clear Zed's cached clone/WASM
```

Then reinstall the dev extension (same steps as above). The log should show
**compiling faber parser**, not “skipping compilation … up to date”.

If `check:pin-drift` fails after pull, the pin in `extension.toml` needs to
be advanced (see [Pin-drift check](#pin-drift-check)).

---

## Locale-aware vocabulary

Faber has sealed reader locales: `en` is the default code surface (`fn`, `const`,
`if`, `print`, `main`, `int`, ...) and `la` is the explicit Latin surface
(`functio`, `fixum`, `si`, `nota`, `incipit`, `numerus`, ...). A file declares its
locale in `+++ locale = "..." +++` frontmatter; when absent, Radix falls back to
the package/CLI locale, which defaults to `en`.

A tree-sitter grammar is context-free, so it cannot seal locales per file.
Instead the generated grammar recognizes the **union** of the `en` and `la`
spellings: a word is a keyword token whichever locale the file uses. Mixing never
occurs in valid code, so the union only matters for the few words that are
keywords in one locale and ordinary identifiers in another (measured below).

How the vocabulary is built (`scripta/radix_vocab.py`):

- The active keyword registry in Radix (`keywords.rs`) supplies the Latin
  canonical names and their category (control, declaration, other, boolean).
- For each supported locale (`HIGHLIGHT_LOCALES`), `pack.toml` `[keywords]` maps a
  canonical name to its surface spelling; the surface inherits the canonical's
  category. `[types]` maps builtin type names the same way (`numerus` -> `int`).
  Annotation names and modifiers map through the same tables.
- Generation **fails** if a supported pack has no row for an active registry
  keyword or builtin type, or if a pack spelling is not an ASCII identifier, so a
  keyword added to Radix without its pack rows cannot drift silently.
- Contextual keywords (words Radix claims by grammar position rather than as a
  global token, such as `free`, `sum`, `max`, `name`, `empty`) are deliberately
  not keyword tokens: as ordinary identifiers they are too common to repaint.

Two mechanisms keep the union from repainting real code:

- **Member names.** The word after `.`, `?.`, or `!.` is always an identifier
  (`grid.set(...)`, `r.value`, `xs.map(...)`, `n.valor`), through the
  `member_access` rule.
- **Ambiguous type spellings.** `value` (the `en` spelling of `valor`) is not
  highlighted as a builtin type: it is overwhelmingly a binding name.

Known limits (not handled; tree-sitter here is token highlighting, not a parser):

- A keyword spelling used as a binding or parameter name (`fn print(string print)`,
  `int valor`, `const f64 negative`) is highlighted as the keyword. Radix accepts
  these; telling them apart needs type-first declaration parsing.
- Latin type spellings used as identifiers in `en` files (`valor`, `numerus`,
  `ratio`, `lista`) highlight as types.
- The six translated packs (`ar`, `hi`, `th-TH`, `vi`, `zh-Hans`, `zh-Hant`) are not
  included: their spellings are non-ASCII and need a Unicode `identifier` token
  and word-boundary handling. Adding one is a `HIGHLIGHT_LOCALES` change plus that
  grammar work.
- Builtin types that only exist as `[types]` rows without a Radix conversion-type
  entry (`any`, `object`, `filter`, `send`, `recv`, `channel`, `frame`, ...) are
  not highlighted.

---

## Maintainer workflow

Regenerate from Radix after lexer changes:

```bash
./scripta/regenerate          # needs ../radix or RADIX_ROOT=...
npm test
```

Override the Radix path: `RADIX_ROOT=/path/to/radix ./scripta/regenerate`

Publishing to the Zed extension registry (optional, for other users) requires a PR
to [zed-industries/extensions](https://github.com/zed-industries/extensions) and
keeping `extension.toml` `[grammars.faber] rev` pinned to a real commit SHA on
`main`.

---

## Repository layout

```text
tree-sitter-faber/
  extension.toml             # Zed manifest (must be at repo root)
  grammar.js                 # generated Tree-sitter grammar
  languages/faber/
    config.toml              # language name, .fab suffix, brackets
    highlights.scm           # Zed reads this path (not queries/ alone)
  queries/highlights.scm     # duplicate for tree-sitter CLI
  grammars/
    fab.tmLanguage.json      # generated TextMate grammar
  src/scanner.c              # line-start `#` comment policy
  scripta/
    regenerate               # generate grammar + parser + TextMate
    radix_vocab.py           # Radix registry + locale packs -> vocabulary
    prepare_zed_dev          # clear Zed's cached grammar clone before reinstall
    check_highlight_contract.py
  fixtures/                  # contract inputs (locale-en.fab, locale-la.fab, ...)
```

`grammars/faber/` (Zed's git clone of the grammar at `extension.toml` `rev`) and
`grammars/faber.wasm` are created locally by Zed and are **gitignored**.

---

## Troubleshooting (Zed)

Symptoms are often “no highlighting” with little or no UI error. Check
**Command Palette → `zed: open log`** and search for `faber` or `highlights query`.

### No highlighting at all / language not Faber

| Log or symptom | Cause | Fix |
|---|---|---|
| `no such grammar faber` | `[grammars.faber]` missing or WASM not built | Ensure `extension.toml` has `[grammars.faber]`; reinstall dev extension |
| `no extension manifest found` | Wrong directory selected | Point dev extension at **repo root** (`extension.toml` must be there) |
| Language shows Plain Text | `.fab` not associated | Reinstall extension; confirm `languages/faber/config.toml` has `path_suffixes = ["fab"]` |

### Highlighting worked, then broke after `git pull`

| Log or symptom | Cause | Fix |
|---|---|---|
| `Invalid node type "annotation"` (or other node) | **Stale WASM**: Zed kept an old compiled grammar but loaded new `highlights.scm` | `./scripta/prepare_zed_dev`, then reinstall dev extension |
| `skipping compilation … up to date` but queries fail | Same stale-cache issue | `prepare_zed_dev` forces reclone/recompile |
| `Query error at 1:1` with `//` comment | Tree-sitter queries use **`;` comments**, not `//` | Regenerate from current `scripta/` (should not happen on release commits) |
| `Error loading highlights query` / `Impossible pattern` | Invalid `highlights.scm` for current grammar | Fix queries, regenerate; validate with `tree-sitter query queries/highlights.scm fixtures/*.fab` |

### The split-brain dev-extension model (read this once)

Even when you install from a **local directory**, Zed does two different things:

1. **Highlights + language config** — read from your local tree (`languages/faber/`).
2. **Parser WASM** — built from a **git clone** of `extension.toml` →
   `[grammars.faber] repository` at pin `rev`, stored under `grammars/faber/`.

So local edits to `grammar.js` do not affect Zed until that commit is **pushed** and
`rev` points at it (or you wipe the clone and reinstall after the pin moves).
`highlights.scm` can move ahead of WASM and break loading — that is the failure mode
we hit most often.

**Reliable recovery:**

```bash
npm run check:pin-drift    # diagnose whether pin is stale
./scripta/prepare_zed_dev  # clear Zed's cached clone/WASM
# Command Palette → zed: install dev extension → this repo root
# Confirm log: "compiling faber parser" (not skip)
```

When the pin-drift check fails, advance the pin per the
[Pin-drift check](#pin-drift-check) section before reinstalling.

### `failed to compile grammar` / directory already exists

| Log or symptom | Cause | Fix |
|---|---|---|
| `directory already exists, but is not a git clone` | `grammars/faber/` exists but is not Zed's clone | `./scripta/prepare_zed_dev` |
| `failed to compile grammar` | Corrupt clone, conflict with local files in `grammars/faber/` | `prepare_zed_dev`, reinstall |

Do not commit `grammars/faber/`; it is Zed's working copy.

### Annotation colors look wrong (not a hard failure)

The grammar uses a thin `annotation` subtree (`@ cli`, `@ json`, `@ optio`, …).
Annotation **names** and **modifiers** (`descriptio`, `longum`, `nomen`) come from
Radix annotation vocabulary (and the `en`/`la` pack spellings of it, e.g. `option`,
`long`, `description`), separate from global keywords and builtin types. If a new
CLI annotation spelling is missing, add it in Radix / `scripta/radix_vocab.py`
and regenerate.

### Pin-drift check

`npm run check:pin-drift` (or `bash scripta/check_pin_drift.sh`) validates that
`extension.toml` `[grammars.faber].rev` is not behind HEAD while parser/query
artifacts have changed. This prevents the **split-brain** failure mode where
Zed builds parser WASM from the pinned rev but reads highlights from the local
tree — producing `Invalid node type` or `Impossible pattern` query errors.

The check passes when:
- The pinned rev matches HEAD, **or**
- Parser/query artifacts (`src/parser.c`, `src/scanner.c`, `src/grammar.json`,
  `src/node-types.json`, `queries/highlights.scm`, `languages/faber/highlights.scm`)
  are unchanged between the pin and HEAD.

The check fails when the pin is behind HEAD **and** artifacts differ.

### Registry publishing (not dev install)

Published extensions need `extension.toml` `rev` = a commit SHA on GitHub:

1. Push grammar changes.
2. `npm run check:pin-drift` — should pass once `rev` matches the pushed SHA.
3. Copy the new SHA into `extension.toml`.
4. Commit and push again (chicken-and-egg by design).
5. PR to `zed-industries/extensions`.

For day-to-day work on your machine, dev extension + `prepare_zed_dev` is enough.
The pin-drift check is advisory between pushes: it will warn when local HEAD
has un-pushed parser/query changes, but this is expected mid-iteration.

---

## Contract test

Build Radix once:

```bash
cd ../radix
cargo build -p radix --bin radix
```

Then from this repo:

```bash
npm test
npm run test:corpus-derived
npm run audit:corpus
```

Compares normalized Radix `lex` token-kind sequences with Tree-sitter leaves on
fixtures, validates both highlight query surfaces (`queries/highlights.scm` and
`languages/faber/highlights.scm`) against the same files, and runs an invalid-node
query probe that must fail. The default `npm test` path includes
`fixtures/corpus-derived.fab`, a stable in-repo regression fixture distilled from
`radix/corpus` snippets that should block releases when parser/highlight drift
returns.

`fixtures/locale-en.fab` and `fixtures/locale-la.fab` cover one file per reader
locale; the contract also pins real keyword, type, null, and boolean spellings in
each (and member names after `.`) to their expected node kinds, because the Radix
side of the comparison is classified from the same vocabulary the grammar is
generated from and cannot detect a spelling that silently stopped being a keyword.

`npm run test:corpus-derived` isolates that fixture when narrowing a regression.
`npm run audit:corpus` runs the first sorted corpus sample from `../radix/corpus`
or `FABER_CORPUS_ROOT`; it is broader optional validation before expanding the
default gate.

---

## Notes

- `+++` frontmatter is highlighted as metadata, not Faber tokens.
- `#` comments are line-start only, matching Radix `scan.rs`.
- Mid-line `#` is a bare `hash` token (Radix reports a lex error).
