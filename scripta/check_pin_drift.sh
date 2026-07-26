#!/usr/bin/env bash
# Check that extension.toml [grammars.faber].rev matches HEAD when
# parser/query artifacts have changed since the pin.
#
# This prevents the "split-brain" Zed dev-extension problem where the local
# tree provides highlights.scm but Zed builds parser WASM from the pinned
# rev — causing "Invalid node type" or "Impossible pattern" query errors.
set -euo pipefail

root="$(cd "$(dirname "$0")/.." && pwd)"
cd "$root"

pinned_rev=$(grep -A2 '\[grammars\.faber\]' extension.toml \
    | grep 'rev = "' \
    | sed 's/.*rev = "//;s/"//' \
    | head -1 || true)

if [ -z "$pinned_rev" ]; then
    echo "error: could not parse [grammars.faber].rev from extension.toml" >&2
    exit 1
fi

head_rev=$(git rev-parse HEAD)

if [ "$pinned_rev" = "$head_rev" ]; then
    echo "ok: extension.toml rev ($pinned_rev) matches HEAD"
    exit 0
fi

# Parser/query artifacts that would cause split-brain if out of sync.
artifacts=(
    "src/parser.c"
    "src/scanner.c"
    "src/grammar.json"
    "src/node-types.json"
    "queries/highlights.scm"
    "languages/faber/highlights.scm"
)

if git diff --quiet "$pinned_rev"..HEAD -- "${artifacts[@]}"; then
    echo "ok: extension.toml rev ($pinned_rev) is behind HEAD ($head_rev)"
    echo "    but parser/query artifacts are unchanged — no split-brain risk"
    exit 0
fi

cat >&2 <<MSG
error: extension.toml [grammars.faber].rev ($pinned_rev) is behind HEAD ($head_rev)
       and parser/query artifacts have changed since the pin.

  This creates split-brain in Zed: the dev extension reads highlights from the
  local tree but builds parser WASM from the pinned rev. When artifacts diverge,
  Zed fails with "Invalid node type" or "Impossible pattern" query errors.

  To fix, either:
    A — Advance the pin to the current pushed commit (release workflow):
        1. git push origin main                           # push grammar changes
        2. Copy the new SHA into extension.toml
        3. git add extension.toml && git commit -m "chore: bump extension.toml rev"
        4. ./scripta/prepare_zed_dev                      # clear Zed's cached clone
        5. Reinstall dev extension in Zed

    B — Mid-iteration: skip this check for now if you don't need Zed.
        git log --oneline $pinned_rev..HEAD

MSG
exit 1
