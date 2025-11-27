#include <emscripten/bind.h>
#include <string>
#include <memory>
#include <stdexcept>
#include <nlohmann/json.hpp>
#include "zetasql/parser/parser.h"

using namespace emscripten;
using json = nlohmann::json;

// Helper to convert ASTNode to JSON
json astNodeToJson(const zetasql::ASTNode* node) {
    if (!node) return nullptr;

    json j;
    j["kind"] = node->GetNodeKindString();
    
    // Location
    const auto& range = node->GetParseLocationRange();
    j["start"] = range.start().GetByteOffset();
    j["end"] = range.end().GetByteOffset();
    
    // Debug string as a proxy for properties
    j["debugString"] = node->SingleNodeDebugString();

    // Children
    json children = json::array();
    for (int i = 0; i < node->num_children(); ++i) {
        children.push_back(astNodeToJson(node->child(i)));
    }
    j["children"] = children;
    
    return j;
}

// ParserOutput의 수명 관리를 위한 래퍼 클래스
class ParserOutputWrapper {
public:
    ParserOutputWrapper(std::unique_ptr<zetasql::ParserOutput> output) 
        : output_(std::move(output)) {}

    const zetasql::ASTNode* node() const {
        return output_->node();
    }

    std::string debugString() const {
        const zetasql::ASTNode* node = output_->node();
        if (!node) return "nullptr";
        return node->DebugString();
    }

    std::string toJSON() const {
        json j = astNodeToJson(output_->node());
        return j.dump();
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

// zetasql::ParseScript 래퍼
std::shared_ptr<ParserOutputWrapper> parseScript(std::string sql) {
    zetasql::ParserOptions options;
    zetasql::ErrorMessageOptions error_options;
    std::unique_ptr<zetasql::ParserOutput> output;
    
    absl::Status status = zetasql::ParseScript(sql, options, error_options, &output);
    
    if (!status.ok()) {
        throw std::runtime_error(status.ToString());
    }
    
    return std::make_shared<ParserOutputWrapper>(std::move(output));
}

// zetasql::ParseExpression 래퍼
std::shared_ptr<ParserOutputWrapper> parseExpression(std::string sql) {
    zetasql::ParserOptions options;
    std::unique_ptr<zetasql::ParserOutput> output;
    
    absl::Status status = zetasql::ParseExpression(sql, options, &output);
    
    if (!status.ok()) {
        throw std::runtime_error(status.ToString());
    }
    
    return std::make_shared<ParserOutputWrapper>(std::move(output));
}

// zetasql::ParseType 래퍼
std::shared_ptr<ParserOutputWrapper> parseType(std::string sql) {
    zetasql::ParserOptions options;
    std::unique_ptr<zetasql::ParserOutput> output;
    
    absl::Status status = zetasql::ParseType(sql, options, &output);
    
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
    return zetasql::Unparse(wrapper->node());
}

EMSCRIPTEN_BINDINGS(zetasql_module) {
    class_<ParserOutputWrapper>("ParserOutput")
        .smart_ptr<std::shared_ptr<ParserOutputWrapper>>("ParserOutput")
        .function("debugString", &ParserOutputWrapper::debugString)
        .function("toJSON", &ParserOutputWrapper::toJSON);

    function("parseStatement", &parseStatement);
    function("parseScript", &parseScript);
    function("parseExpression", &parseExpression);
    function("parseType", &parseType);
    function("unparse", &unparse);
}
