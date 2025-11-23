import os
import re
import argparse

def validate_corpus(corpus_dir, file_filter=None):
    total_cases = 0
    passed_cases = 0
    failed_files = {}

    print(f"Validating corpus in {corpus_dir}...\n")

    if not os.path.exists(corpus_dir):
        print(f"Corpus directory not found: {corpus_dir}")
        return

    for filename in sorted(os.listdir(corpus_dir)):
        if not filename.endswith(".txt"):
            continue
            
        if file_filter and file_filter not in filename:
            continue
            
        filepath = os.path.join(corpus_dir, filename)
        with open(filepath, 'r') as f:
            content = f.read()
            
        # Split by test case separator
        cases = content.split('==================')
        
        file_total = 0
        file_passed = 0
        
        for case in cases:
            if not case.strip():
                continue
                
            file_total += 1
            
            # Check for (ERROR ...) or (MISSING ...) in the S-expression part
            # S-expression is after "---"
            parts = case.split('---')
            if len(parts) < 2:
                continue
                
            sexp = parts[1]
            if "(ERROR" not in sexp and "(MISSING" not in sexp:
                file_passed += 1
        
        total_cases += file_total
        passed_cases += file_passed
        
        if file_total > 0:
            pass_rate = (file_passed / file_total) * 100
            status = "✅" if pass_rate == 100 else "⚠️" if pass_rate > 0 else "❌"
            print(f"{status} {filename:<40}: {file_passed}/{file_total} ({pass_rate:.1f}%)")

    if total_cases > 0:
        print(f"\nTotal Coverage: {passed_cases}/{total_cases} ({passed_cases/total_cases*100:.1f}%)")
    else:
        print("\nNo test cases found.")

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Validate Tree-sitter corpus.")
    parser.add_argument("filter", nargs="?", help="Filter for corpus filenames (e.g., 'aggregation')")
    args = parser.parse_args()

    CORPUS_DIR = os.path.join(os.path.dirname(__file__), "test/corpus")
    validate_corpus(CORPUS_DIR, args.filter)
