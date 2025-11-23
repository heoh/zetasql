import os
import subprocess
import tempfile
import argparse

import re
import itertools

def expand_alternations(sql):
    # Find all {{...}} patterns
    pattern = re.compile(r'\{\{(.*?)\}\}')
    parts = pattern.split(sql)
    # parts will be [text, alternation, text, alternation, text]
    
    if len(parts) == 1:
        return [(sql, None)]
        
    options_list = []
    
    for i, part in enumerate(parts):
        if i % 2 == 0:
            # Static text
            options_list.append([(part, None)])
        else:
            # Alternation content: "a|b|c"
            options = part.split('|')
            # We store (text, option_value)
            options_list.append([(opt, opt) for opt in options])
            
    # Cartesian product
    expanded_results = []
    for combination in itertools.product(*options_list):
        # combination is a tuple of (text, option_value)
        full_sql = "".join(c[0] for c in combination)
        
        # Build signature
        # We only care about the option_values from the alternation parts
        sig_parts = [c[1] for c in combination if c[1] is not None]
        # Join with comma, but we need to be careful about spaces?
        # Based on observation, it seems to be just comma separated.
        signature = ",".join(sig_parts)
        
        expanded_results.append((full_sql, signature))
        
    return expanded_results

def parse_test_file(filepath):
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    # Split by "==" which separates test cases
    cases = content.split('==')
    
    parsed_cases = []
    for case in cases:
        # Each case has SQL input, then "--", then expected AST/Error
        parts = case.split('--')
        if len(parts) < 2:
            continue
            
        raw_sql = parts[0].strip()
        if not raw_sql or "[no_test" in raw_sql:
            continue

        # Remove [language_features...] lines
        raw_sql = re.sub(r'^\[.*?\]\n?', '', raw_sql, flags=re.MULTILINE)
        # print(f"DEBUG SQL: {raw_sql[:100]}")

        # Parse expected outputs
        expected_map = {}
        
        if len(parts) == 2:
            expected_map[None] = parts[1].strip()
        else:
            current_idx = 1
            while current_idx < len(parts):
                header = parts[current_idx].strip()
                if header.startswith("ALTERNATION GROUP:"):
                    sig = header.replace("ALTERNATION GROUP:", "").strip()
                    if current_idx + 1 < len(parts):
                        output = parts[current_idx+1].strip()
                        expected_map[sig] = output
                        current_idx += 2
                    else:
                        break
                else:
                    # Default output
                    if current_idx == 1:
                        expected_map[None] = header
                        current_idx += 1
                    else:
                        # Unexpected structure, skip
                        current_idx += 1

        # Expand SQL
        expanded_sqls = expand_alternations(raw_sql)
        for sql, sig in expanded_sqls:
            expected = None
            if sig in expected_map:
                expected = expected_map[sig]
            elif None in expected_map:
                expected = expected_map[None]
            
            if expected:
                if expected.startswith("ERROR:"):
                    continue
                parsed_cases.append((sql, expected))
            # If no expectation found, we skip (it might be an invalid combination or not tested)

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
            print(f"Tree-sitter failed for SQL: {sql[:50]}...")
            print(f"Return code: {result.returncode}")
            print(f"Stderr: {result.stderr}")
            return "(source_file (ERROR))"
    except Exception as e:
        print(f"Error running tree-sitter: {e}")
        return "(source_file (ERROR))"
    finally:
        if os.path.exists(tmp_path):
            os.remove(tmp_path)

def generate_corpus(test_dir, output_dir, file_filter=None):
    if not os.path.exists(output_dir):
        os.makedirs(output_dir)

    for filename in os.listdir(test_dir):
        if filename.endswith(".test"):
            if file_filter and file_filter not in filename:
                continue

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
    parser = argparse.ArgumentParser(description="Generate Tree-sitter corpus from ZetaSQL tests.")
    parser.add_argument("filter", nargs="?", help="Filter for test filenames (e.g., 'aggregation')")
    args = parser.parse_args()

    TEST_DIR = "/mnt/shared/workspaces/opensource/zetasql2/zetasql/zetasql/parser/testdata"
    OUTPUT_DIR = "/mnt/shared/workspaces/opensource/zetasql2/zetasql/zetasql/parser/tree_sitter/test/corpus"
    generate_corpus(TEST_DIR, OUTPUT_DIR, args.filter)
