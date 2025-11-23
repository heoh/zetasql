# Tree-sitter ZetaSQL Parser

This directory contains the experimental Tree-sitter grammar for ZetaSQL.

## Prerequisites

*   Node.js and npm
*   Tree-sitter CLI: `npm install -g tree-sitter-cli`

## Usage

1.  **Install dependencies**:
    ```bash
    npm install
    ```

2.  **Generate the parser**:
    ```bash
    npx tree-sitter generate
    ```
    This will create `src/parser.c` and `src/tree_sitter/parser.h`.

3.  **Test the parser**:
    Create a file `example.sql` with some SQL.
    ```bash
    npx tree-sitter parse example.sql
    ```

## Integration with ZetaSQL

The generated `src/parser.c` should be compiled and linked into ZetaSQL.
A converter class is needed to traverse the Tree-sitter CST and build the ZetaSQL AST using `zetasql::parser::ASTNodeFactory`.
