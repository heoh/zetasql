#!/usr/bin/env bash
set -euo pipefail

# Minimal query-loop runner for test_wasi.py
# - No installs, no options
# - Edit the QUERIES array below to change tests

REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
PYTHON=python3
SCRIPT_PATH="$REPO_ROOT/test_wasi.py"
LOGS_DIR="$REPO_ROOT/build_wasi_test_logs"

if [[ ! -f "$SCRIPT_PATH" ]]; then
  echo "Error: $SCRIPT_PATH not found" >&2
  exit 1
fi

mkdir -p "$LOGS_DIR"

# List of queries to run (edit as needed). Empty string => run with no args.
QUERIES=(
  "SELECT 1 + 2"
  "SELECT CURRENT_TIMESTAMP()"
  "SELECT RAND()"
)

echo "Running ${#QUERIES[@]} test(s) using $PYTHON -> $SCRIPT_PATH"

for i in "${!QUERIES[@]}"; do
  q="${QUERIES[$i]}"
  idx=$((i+1))
  echo "\n=== Test #${idx} ==="
  echo "Query: ${q}"
  if [[ -z "$q" ]]; then
    "$PYTHON" "$SCRIPT_PATH" 2>&1
  else
    "$PYTHON" "$SCRIPT_PATH" "$q" 2>&1
  fi
  rc=${PIPESTATUS[0]}
  echo "Exit code: $rc"
done

echo "\nAll runs complete. Logs in: $LOGS_DIR"
