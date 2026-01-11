//
// Copyright 2025 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

// WASI (WebAssembly System Interface) entry point for execute_query.
// This is built as a reactor module, allowing clients to load the WASM module
// and call exported functions multiple times.
//
// Exported functions:
//   - wasm_malloc(size_t size) -> void*: Allocate memory
//   - wasm_free(void* ptr): Free memory
//   - execute_query_main(int argc, char** argv) -> int: CLI-compatible entry point
//
// Usage from client:
//   1. Call _initialize() once after loading the module
//   2. Allocate memory for argv strings using wasm_malloc()
//   3. Call execute_query_main(argc, argv)
//   4. Free memory using wasm_free()
//   5. Repeat steps 2-4 for subsequent queries

#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "zetasql/tools/execute_query/execute_query_tool.h"
#include "zetasql/tools/execute_query/execute_query_writer.h"
#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "absl/flags/usage.h"
#include "absl/log/initialize.h"
#include "absl/status/status.h"
#include "absl/strings/str_join.h"

// WASM export attribute macro
#ifdef __wasm__
#define WASM_EXPORT(name) __attribute__((export_name(#name)))
#else
#define WASM_EXPORT(name)
#endif

namespace zetasql {
namespace {

absl::Status RunTool(const std::vector<std::string>& args) {
  ExecuteQueryConfig config;

  ZETASQL_RETURN_IF_ERROR(InitializeExecuteQueryConfig(config));

  ZETASQL_ASSIGN_OR_RETURN(std::unique_ptr<ExecuteQueryWriter> writer,
                   MakeWriterFromFlags(config, std::cout));

  const std::string sql = absl::StrJoin(args, " ");
  return ExecuteQuery(sql, config, *writer);
}

}  // namespace
}  // namespace zetasql

// C linkage wrapper functions for WASM export
extern "C" {

// Memory allocation function for clients to allocate memory in WASM linear memory
WASM_EXPORT(wasm_malloc)
void* wasm_malloc(size_t size) {
  return malloc(size);
}

// Memory deallocation function for clients to free memory in WASM linear memory
WASM_EXPORT(wasm_free)
void wasm_free(void* ptr) {
  free(ptr);
}

// Main entry point with CLI-compatible interface
// Returns 0 on success, non-zero on error
WASM_EXPORT(execute_query_main)
int execute_query_main(int argc, char** argv) {
  static bool initialized = false;
  static const char kUsage[] = "Usage: execute_query \"<sql>\"\n";

  if (!initialized) {
    absl::SetProgramUsageMessage(kUsage);
    absl::InitializeLog();
    initialized = true;
  }

  std::vector<std::string> args;

  {
    std::vector<char*> remaining_args = absl::ParseCommandLine(argc, argv);
    args.assign(remaining_args.cbegin() + 1, remaining_args.cend());
  }

  if (args.empty()) {
    std::cerr << kUsage << "Pass --help for a full list of flags.\n";
    return 1;
  }

  if (const absl::Status status = zetasql::RunTool(args); status.ok()) {
    return 0;
  } else {
    std::cerr << status.message() << '\n';
    return 1;
  }
}

}  // extern "C"
