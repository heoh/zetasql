# ZetaSQL Parser Migration to Tree-sitter Design

This document outlines the design for migrating the ZetaSQL parser from the current TextMapper-based implementation to a [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) based implementation.

## 1. Motivation

*   **Robustness**: Tree-sitter is known for its incremental parsing capabilities and error recovery, which can improve IDE support and tooling.
*   **Ecosystem**: Tree-sitter has bindings for many languages (Rust, WASM, Python, etc.), making it easier to use ZetaSQL grammar in other environments.
*   **Performance**: Tree-sitter is highly optimized for speed and memory usage.

## 2. Architecture Overview

The goal is to replace the parsing logic while maintaining the existing AST (Abstract Syntax Tree) structure (`zetasql::ASTNode` and subclasses). This ensures that the rest of the ZetaSQL pipeline (Analyzer, Resolver, etc.) remains unaffected.

### Current Flow
`Input String` -> `TextMapper Parser` -> `ASTNodeFactory` -> `ZetaSQL AST`

### Proposed Flow
`Input String` -> `Tree-sitter Parser` -> `CST (Concrete Syntax Tree)` -> `Converter` -> `ASTNodeFactory` -> `ZetaSQL AST`

## 3. Implementation Steps

### Phase 1: Grammar Porting (`grammar.js`)

The most significant effort is translating the existing grammar from `zetasql/parser/zetasql.tm` to a Tree-sitter `grammar.js`.

*   **Tokens**: Map regex definitions from `zetasql.tm` (e.g., `decimal_digit`, `identifier`) to Tree-sitter regex rules.
*   **Rules**: Translate BNF-like rules.
*   **Precedence**: Carefully map operator precedence and associativity to the `prec`, `prec.left`, `prec.right` functions in Tree-sitter.
*   **Extras**: Handle whitespace and comments as `extras`.

**Deliverable**: A `tree-sitter-zetasql` repository or directory containing the valid `grammar.js`.

### Phase 2: Parser Generation

Use the `tree-sitter-cli` to generate the C parser code.

```bash
tree-sitter generate
```

This produces `parser.c` and `tree_sitter/parser.h`.

### Phase 3: C++ Integration

We need to integrate the generated C parser into the ZetaSQL C++ codebase.

#### 3.1. Build System (Bazel)
Add a Bazel rule to compile the generated `parser.c`.

#### 3.2. Converter Implementation
Create a new class `TreeSitterConverter` (or similar) in `zetasql/parser`.

```cpp
class TreeSitterConverter {
 public:
  absl::Status Convert(
      const TSLanguage* language,
      absl::string_view input,
      ASTNodeFactory* node_factory,
      std::unique_ptr<ASTNode>* result);
};
```

**Logic**:
1.  Initialize `TSParser`.
2.  Parse the input string to get `TSTree`.
3.  Traverse the `TSTree` using `TSTreeCursor`.
4.  For each node in the CST:
    *   Map the `ts_node_type` to the corresponding `ASTNode` type.
    *   Extract the source range (start/end byte/point) and convert to `ParseLocationRange`.
    *   Call `node_factory->CreateASTNode<T>(location)`.
    *   Recursively process children and add them to the parent AST node.

#### 3.3. Handling "Extras" and Hidden Nodes
Tree-sitter often hides punctuation and keywords in the CST unless explicitly named. ZetaSQL AST might expect certain tokens or structure. The `grammar.js` should be designed to expose necessary nodes, or the converter must handle implicit structure.

### Phase 4: Validation & Testing

1.  **Unit Tests**: Run existing `parser_test.cc` against the new parser.
2.  **Compliance Tests**: Ensure all SQL features supported by ZetaSQL are correctly parsed.
3.  **Fuzzing**: Use fuzz testing to compare the outputs of the old and new parsers on random inputs to ensure parity.

## 4. Challenges & Mitigation

*   **Grammar Complexity**: `zetasql.tm` is very large.
    *   *Mitigation*: Start with a subset (e.g., `SELECT 1`) and incrementally add features.
*   **Custom Lexer Logic**: `zetasql.tm` uses `LookaheadTransformer`.
    *   *Mitigation*: Use Tree-sitter's `external_scanner.c` for complex lexical rules that regex cannot handle (e.g., heredocs, complex nesting).
*   **Performance**: Double tree construction (CST -> AST).
    *   *Mitigation*: Tree-sitter is fast. The conversion step should be optimized. If needed, we can skip full CST materialization and build AST during traversal if the API allows (Tree-sitter cursor API is efficient).

## 5. Future Work

*   **WASM Support**: Compile the Tree-sitter parser to WASM for web-based SQL validation.
*   **IDE Extension**: Build a VS Code extension using the new parser for syntax highlighting and autocomplete.
