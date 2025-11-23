const ZetaSQLModule = require('./dist/zetasql_parser_wasm.js');

ZetaSQLModule().then((module) => {
    const sql = "SELECT 1 + 1";
    console.log("Parsing SQL:", sql);
    try {
        // 1. ParseStatement 호출
        console.log("--- ParseStatement ---");
        const parserOutput = module.parseStatement(sql);
        console.log("Debug String:", parserOutput.debugString());
        console.log("Unparsed SQL:", module.unparse(parserOutput));
        
        // 2. ParseScript 호출
        console.log("\n--- ParseScript ---");
        const scriptSql = "SELECT 1; SELECT 2;";
        const scriptOutput = module.parseScript(scriptSql);
        console.log("Script Debug String:", scriptOutput.debugString());
        console.log("Script Unparsed SQL:", module.unparse(scriptOutput));

        // 3. ParseExpression 호출
        console.log("\n--- ParseExpression ---");
        const exprSql = "1 + 2 * 3";
        const exprOutput = module.parseExpression(exprSql);
        console.log("Expression Debug String:", exprOutput.debugString());
        console.log("Expression Unparsed SQL:", module.unparse(exprOutput));

        // 4. ParseType 호출
        console.log("\n--- ParseType ---");
        const typeSql = "ARRAY<STRING>";
        const typeOutput = module.parseType(typeSql);
        console.log("Type Debug String:", typeOutput.debugString());
        console.log("Type Unparsed SQL:", module.unparse(typeOutput));

        // 메모리 해제
        parserOutput.delete();
        scriptOutput.delete();
        exprOutput.delete();
        typeOutput.delete();
    } catch (e) {
        console.error("Error:", e);
    }
});
