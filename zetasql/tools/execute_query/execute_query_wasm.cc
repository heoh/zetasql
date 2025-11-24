#include <emscripten/bind.h>
#include <iostream>
#include <vector>
#include <string>
#include "zetasql/tools/execute_query/execute_query_tool.h"
#include "zetasql/tools/execute_query/execute_query_writer.h"
#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "absl/log/initialize.h"
#include "absl/strings/str_join.h"

using namespace emscripten;

// Wrapper to simulate main function
int execute(std::vector<std::string> args) {
    // Prepare argc, argv
    std::vector<char*> argv;
    // Add a dummy program name
    static std::string prog_name = "execute_query";
    argv.push_back(const_cast<char*>(prog_name.c_str()));
    
    // We need to keep the strings alive while argv points to them.
    // args is passed by value (or we can copy it), so its elements are stable 
    // as long as we don't modify the vector.
    for (auto& arg : args) {
        argv.push_back(const_cast<char*>(arg.c_str()));
    }
    int argc = argv.size();

    // Parse command line flags
    // Note: This modifies global state. Subsequent calls will retain flag values 
    // unless overridden.
    std::vector<char*> remaining_args = absl::ParseCommandLine(argc, argv.data());
    
    // Initialize log if not already
    static bool log_initialized = [](){ absl::InitializeLog(); return true; }();
    (void)log_initialized;

    zetasql::ExecuteQueryConfig config;
    absl::Status status = zetasql::InitializeExecuteQueryConfig(config);
    if (!status.ok()) {
        std::cerr << "Error initializing config: " << status << std::endl;
        return 1;
    }

    // Use std::cout for output
    auto writer_or = zetasql::MakeWriterFromFlags(config, std::cout);
    if (!writer_or.ok()) {
        std::cerr << "Error creating writer: " << writer_or.status() << std::endl;
        return 1;
    }
    auto writer = std::move(writer_or.value());

    // The remaining args (after flag parsing) are the SQL query parts.
    // Skip the program name (index 0).
    std::vector<std::string> sql_parts;
    for (size_t i = 1; i < remaining_args.size(); ++i) {
        sql_parts.push_back(remaining_args[i]);
    }
    std::string sql = absl::StrJoin(sql_parts, " ");

    if (sql.empty()) {
        std::cerr << "No SQL query provided." << std::endl;
        return 1;
    }

    status = zetasql::ExecuteQuery(sql, config, *writer);
    if (!status.ok()) {
        std::cerr << "Error executing query: " << status << std::endl;
        return 1;
    }

    return 0;
}

EMSCRIPTEN_BINDINGS(zetasql_execute_query) {
    register_vector<std::string>("StringList");
    function("execute", &execute);
}
