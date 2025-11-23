const ZetaSQLModule = require('./dist/zetasql_parser_wasm.js');

ZetaSQLModule().then((module) => {
    const sql = "SELECT 1 + 1";
    console.log("Parsing SQL:", sql);
    try {
        // 1. ParseStatement 호출
        const parserOutput = module.parseStatement(sql);
        console.log("Parse successful:", parserOutput);
        console.log("Debug String:", parserOutput.debugString());

        // 2. Unparse 호출
        const unparsedSql = module.unparse(parserOutput);
        console.log("Unparsed SQL:", unparsedSql);
        
        // 메모리 해제 (JS GC가 처리하겠지만 명시적으로 delete 가능)
        parserOutput.delete();
    } catch (e) {
        console.error("Error:", e);
    }
});
