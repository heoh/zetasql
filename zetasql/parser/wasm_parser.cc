#include <emscripten/bind.h>
#include <string>
#include <memory>
#include <stdexcept>
#include "zetasql/parser/parser.h"

using namespace emscripten;

// ParserOutput의 수명 관리를 위한 래퍼 클래스
class ParserOutputWrapper {
public:
    ParserOutputWrapper(std::unique_ptr<zetasql::ParserOutput> output) 
        : output_(std::move(output)) {}

    const zetasql::ASTNode* statement() const {
        return output_->statement();
    }

    std::string debugString() const {
        return output_->statement()->DebugString();
    }

private:
    std::unique_ptr<zetasql::ParserOutput> output_;
};

// zetasql::ParseStatement 래퍼
std::shared_ptr<ParserOutputWrapper> parseStatement(std::string sql) {
    zetasql::ParserOptions options;
    std::unique_ptr<zetasql::ParserOutput> output;
    
    absl::Status status = zetasql::ParseStatement(sql, options, &output);
    
    if (!status.ok()) {
        throw std::runtime_error(status.ToString());
    }
    
    return std::make_shared<ParserOutputWrapper>(std::move(output));
}

// zetasql::Unparse 래퍼
std::string unparse(std::shared_ptr<ParserOutputWrapper> wrapper) {
    if (!wrapper) {
        return "";
    }
    return zetasql::Unparse(wrapper->statement());
}

EMSCRIPTEN_BINDINGS(zetasql_module) {
    class_<ParserOutputWrapper>("ParserOutput")
        .smart_ptr<std::shared_ptr<ParserOutputWrapper>>("ParserOutput")
        .function("debugString", &ParserOutputWrapper::debugString);

    function("parseStatement", &parseStatement);
    function("unparse", &unparse);
}
