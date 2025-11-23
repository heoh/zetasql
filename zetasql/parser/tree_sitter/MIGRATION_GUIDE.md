# ZetaSQL Tree-sitter Migration Guide

This document outlines the process for migrating the ZetaSQL parser to Tree-sitter. It is designed to guide AI Agents and developers in incrementally expanding the grammar coverage.

## 1. Objective
The goal is to create a robust Tree-sitter grammar for ZetaSQL that matches the behavior of the existing C++ parser. We use a **Corpus-Driven Development** approach, leveraging the extensive existing test suite of ZetaSQL.

## 2. Project Structure
All relevant files are located in `zetasql/parser/tree_sitter/`:

*   **`grammar.js`**: The Tree-sitter grammar definition. This is the main file you will edit.
*   **`package.json`**: Defines scripts and dependencies.
*   **`generate_corpus.py`**: A script that converts existing ZetaSQL `*.test` files into Tree-sitter corpus format (`test/corpus/*.txt`). It injects the expected ZetaSQL AST as comments for reference.
*   **`validate_corpus.py`**: A script that parses the generated corpus and checks for `(ERROR)` or `(MISSING)` nodes. It provides a coverage report.
*   **`test/corpus/`**: The directory containing the generated test cases.

## 3. Workflow (The Loop)

The migration process is iterative. Follow these steps to expand coverage:

### Step 1: Check Status
Run the validation script to see which test files are failing and what the current coverage is.
```bash
npm run validate
```
*   **Output**: A list of files with pass rates (e.g., `❌ field_access.txt : 20/72 (27.8%)`).
*   **Action**: Pick one failing file to focus on (e.g., `field_access.txt` or `select_as_distinct_all.test`).

### Step 2: Analyze Failures
Open the corresponding corpus file in `test/corpus/`. Look for `(ERROR)` nodes in the Tree-sitter output section of a test case.

Example failure in `test/corpus/field_access.txt`:
```
select NULL, x from a.b.c.T;
---
(source_file (ERROR))
```
*   **Diagnosis**: The parser failed completely (`ERROR` at root) or partially.
*   **Reference**: Look at the `/* Expected ZetaSQL AST: ... */` comment in the test case to understand the expected structure (e.g., `PathExpression`, `SelectColumn`).

### Step 3: Update Grammar
Edit `grammar.js` to add the missing rules or fix existing ones.

*   **Tip**: Use `prec.left`, `prec.right`, or `prec` to handle precedence if you encounter conflicts.
*   **Tip**: Use `caseInsensitive('KEYWORD')` for SQL keywords.

### Step 4: Rebuild Parser
After modifying `grammar.js`, you must regenerate the parser code.
```bash
npm run generate
```

### Step 5: Verify Fixes
Run the validation script again to see if the pass rate for your target file has improved.
```bash
npm run validate -- aggregation
```
You can also run standard Tree-sitter tests if you want to check specific cases:
```bash
npm run test
```

## 4. Key Commands

| Command | Description |
| :--- | :--- |
| `npm run generate` | Rebuilds the parser (C code) from `grammar.js`. Run this after **every** change to `grammar.js`. |
| `npm run validate` | Parses all corpus files and reports the percentage of tests without errors. Can take a filter argument: `npm run validate -- aggregation` |
| `npm run corpus` | Regenerates `test/corpus/*.txt` from the upstream ZetaSQL `*.test` files. Can take a filter argument: `npm run corpus -- aggregation` |
| `npm run test` | Runs the standard Tree-sitter test suite (checks `test/corpus` against `grammar.js`). |

## 5. Instructions for AI Agents

If you are an AI Agent reading this to perform a task:

1.  **Start small**: Do not try to fix all errors at once. Pick **one** specific syntax feature (e.g., "Implement `CASE` expression" or "Fix `LIMIT` clause").
2.  **Read the Corpus**: Use `read_file` to inspect the failing test cases in `test/corpus/`. The `(ERROR)` node location tells you exactly where the parser got stuck.
3.  **Map Concepts**:
    *   ZetaSQL `QueryStatement` -> Tree-sitter `statement`
    *   ZetaSQL `Select` -> Tree-sitter `select_statement`
    *   ZetaSQL `PathExpression` -> Tree-sitter `path_expression`
4.  **Iterate**:
    *   Edit `grammar.js`.
    *   Run `npm run generate`.
    *   Run `npm run validate`.
    *   Repeat until the target tests pass.

## 6. Current Status (as of Nov 2025)
*   **Infrastructure**: Complete.
*   **Grammar**: Basic `SELECT`, `FROM`, `WHERE`, `GROUP BY`, `ORDER BY`, `LIMIT` are implemented.
*   **Coverage**: Very low (~1.7%). Most complex expressions, DDL, and functions are missing.
*   **Immediate Goals**:
    *   Fix `field_access.txt` (Generalized field access).
    *   Implement `literals.txt` (Floating point, Hex, etc.).
    *   Implement `expression` rules (Logic, Arithmetic, Function calls).
