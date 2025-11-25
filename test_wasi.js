const factory = require('./dist_wasi/execute_query_wasi.js');

async function run() {
  try {
    const instance = await factory();
    console.log('WASM module loaded successfully.');

    // The main function in the WASM module is automatically executed by the Emscripten runtime
    // when the module is instantiated if it's a standalone executable style.
    // However, we passed arguments via command line in the C++ code.
    // Emscripten allows passing arguments via the `arguments` property in the module config
    // or by calling the main function directly if exposed (but usually it runs on startup).
    
    // Let's try to run it by passing arguments to the factory if supported, 
    // or we might need to adjust how we invoke it if it's designed to run once and exit.
    
    // Since we built it as a binary (cc_binary) with a main function, 
    // Emscripten's default behavior for Node.js is to use process.argv.
    // But here we are loading it as a library.
    
    // If we want to run a query, we might need to call the main function explicitly 
    // or rely on Emscripten's `callMain`.
    
    console.log('Running query: SELECT 1');
    instance.callMain(['SELECT 1']);
    
  } catch (err) {
    console.error('Error:', err);
  }
}

run();
