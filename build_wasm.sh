bazel build --config=wasm -c opt //zetasql/tools/execute_query:execute_query_wasm
tar -xvf bazel-bin/zetasql/tools/execute_query/execute_query_wasm -C dist/
