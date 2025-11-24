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
    // We use a vector of vectors to ensure we have mutable buffers for argv strings,
    // as absl::ParseCommandLine might modify them (though it usually just reorders pointers).
    // Also avoids const_cast.
    std::vector<std::vector<char>> mutable_args;
    std::vector<char*> argv;
    
    // Helper to add an argument
    auto add_arg = [&](const std::string& s) {
        std::vector<char> buf(s.begin(), s.end());
        buf.push_back('\0');
        mutable_args.push_back(std::move(buf));
        argv.push_back(mutable_args.back().data());
    };

    // Add a dummy program name
    add_arg("execute_query");
    
    for (const auto& arg : args) {
        add_arg(arg);
    }
    // Standard requires argv to be null-terminated
    argv.push_back(nullptr);
    int argc = argv.size() - 1;

    // Parse command line flags
    // Note: This modifies global state. Subsequent calls will retain flag values 
    // unless overridden.
    std::vector<char*> remaining_args = absl::ParseCommandLine(argc, argv.data());
    
    // Initialize log if not already
    static bool log_initialized = [](){ 
        absl::InitializeLog(); 
        return true; 
    }();
    (void)log_initialized;

    try {
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
        if (remaining_args.size() > 1) {
            for (size_t i = 1; i < remaining_args.size(); ++i) {
                sql_parts.push_back(remaining_args[i]);
            }
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
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
        return 1;
    } catch (...) {
        std::cerr << "Unknown exception caught" << std::endl;
        return 1;
    }

    return 0;
}

EMSCRIPTEN_BINDINGS(zetasql_execute_query) {
    register_vector<std::string>("StringList");
    function("execute", &execute);
}
