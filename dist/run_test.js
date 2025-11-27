const Module = require('./execute_query_wasm.js');

Module().then(instance => {
    console.log("WASM Module loaded.");
    
    // Define the arguments as a standard JS array
    const args = [
        "SELECT 1 + 2 AS result;",
    ];

    console.log("Executing query with args:", args);
    
    try {
        // Call the execute function with the JS array
        // The C++ side expects emscripten::val which maps to the JS array
        const result = instance.execute(args);
        console.log("Execution result:", result);
    } catch (e) {
        console.error("Execution failed:", e);
    }
});
