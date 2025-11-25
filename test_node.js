const { execFile } = require('child_process');
const path = require('path');

const wasmJsPath = path.join(__dirname, 'dist_wasi', 'execute_query_wasi.js');

function runQuery(sql) {
  return new Promise((resolve, reject) => {
    // Execute the WASM wrapper script with the SQL query as an argument
    execFile('node', [wasmJsPath, sql], { cwd: path.dirname(wasmJsPath) }, (error, stdout, stderr) => {
      if (error) {
        reject(error);
        return;
      }
      if (stderr) {
        // Some logs might go to stderr, but we can still resolve if exit code is 0
        console.error('Stderr:', stderr);
      }
      resolve(stdout);
    });
  });
}

async function main() {
  try {
    console.log('Running query: SELECT 1');
    const result1 = await runQuery('SELECT 1');
    console.log('Result:\n', result1);

    console.log('Running query: SELECT "Hello, WASM!" as message');
    const result2 = await runQuery('SELECT "Hello, WASM!" as message');
    console.log('Result:\n', result2);

  } catch (err) {
    console.error('Error executing query:', err);
  }
}

main();
