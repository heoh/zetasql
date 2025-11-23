import os
import subprocess
import tempfile

def parse_test_file(filepath):
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    # Split by "==" which separates test cases
    cases = content.split('==')
    
    parsed_cases = []
    for case in cases:
        # Each case has SQL input, then "--", then expected AST/Error
        parts = case.split('--')
        if len(parts) >= 2:
            sql = parts[0].strip()
            # Skip if it's an error case (Tree-sitter should parse valid SQL)
            expected = parts[1].strip()
            if expected.startswith("ERROR:"):
                continue
                
            # Also skip if it has [no_test_get_parse_tokens] or similar markers in SQL
            if "[no_test" in sql:
                continue

            if sql:
                parsed_cases.append((sql, expected))
    return parsed_cases

def get_tree_sitter_sexp(sql):
    # Create a temporary file for the SQL
    # We need to strip the injected comments for parsing, or ensure tree-sitter handles them.
    # Our grammar handles comments, so it should be fine, but let's be clean.
    # Actually, if we inject comments into the SQL, the parser will parse them as comments.
    # That's fine, it documents the test case.
    
    with tempfile.NamedTemporaryFile(mode='w', suffix='.sql', delete=False) as tmp:
        tmp.write(sql)
        tmp_path = tmp.name

    try:
        # Run tree-sitter parse
        # We assume tree-sitter is in the path or node_modules
        cmd = ['./node_modules/.bin/tree-sitter', 'parse', tmp_path]
        result = subprocess.run(cmd, capture_output=True, text=True)
        if result.returncode == 0:
            # The output contains the S-expression, but also filename and timing info.
            # tree-sitter parse output format:
            # (source_file ...)
            # filename 0 ms
            
            # We need to extract just the S-expression.
            # Usually it's the first part.
            output = result.stdout
            # Remove the last line which is usually the stats "filename time"
            lines = output.strip().split('\n')
            if lines and (lines[-1].endswith('ms') or tmp_path in lines[-1]):
                lines.pop()
            return '\n'.join(lines)
        else:
            return "(source_file (ERROR))"
    except Exception as e:
        print(f"Error running tree-sitter: {e}")
        return "(source_file (ERROR))"
    finally:
        if os.path.exists(tmp_path):
            os.remove(tmp_path)

def generate_corpus(test_dir, output_dir):
    if not os.path.exists(output_dir):
        os.makedirs(output_dir)

    for filename in os.listdir(test_dir):
        if filename.endswith(".test"):
            filepath = os.path.join(test_dir, filename)
            cases = parse_test_file(filepath)
            
            if not cases:
                continue

            output_filename = filename.replace(".test", ".txt")
            print(f"Generating {output_filename}...")
            with open(os.path.join(output_dir, output_filename), 'w') as f:
                for i, (sql, expected_ast) in enumerate(cases):
                    f.write(f"==================\n")
                    f.write(f"Test Case {i+1}\n")
                    f.write(f"==================\n")
                    
                    # Inject expected AST as a block comment at the end of SQL
                    # Escape */ to avoid breaking the comment
                    safe_ast = expected_ast.replace("*/", "* /")
                    annotated_sql = f"{sql}\n\n/* Expected ZetaSQL AST:\n{safe_ast}\n*/"
                    
                    f.write(f"{annotated_sql}\n")
                    f.write(f"---\n")
                    
                    # Get actual S-expression from current parser
                    sexp = get_tree_sitter_sexp(annotated_sql)
                    f.write(f"{sexp}\n")
                    f.write(f"\n")

if __name__ == "__main__":
    TEST_DIR = "/mnt/shared/workspaces/opensource/zetasql2/zetasql/zetasql/parser/testdata"
    OUTPUT_DIR = "/mnt/shared/workspaces/opensource/zetasql2/zetasql/zetasql/parser/tree_sitter/test/corpus"
    generate_corpus(TEST_DIR, OUTPUT_DIR)
