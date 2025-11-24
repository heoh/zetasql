const factory = require('./execute_query_wasm.js');

factory().then(module => {
    console.log("Module loaded");
    
    const args = new module.StringList();
    args.push_back("SELECT 1");
    
    console.log("Executing query: SELECT 1");
    const result = module.execute(args);
    console.log("Result code:", result);
    
    args.delete();
}).catch(err => {
    console.error("Error loading module:", err);
});
