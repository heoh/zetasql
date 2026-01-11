#!/usr/bin/env node
/**
 * Test script for the execute_query WASI module.
 * Node.js version of test_wasi.py
 */

const { WASI } = require('wasi');
const { readFile } = require('fs/promises');
const { argv, env } = require('process');

class WasiExecuteQuery {
    /**
     * Wrapper class for execute_query WASI module that supports multiple calls.
     */
    constructor(verbose = true) {
        this.verbose = verbose;
        this.instance = null;
        this.memory = null;
        this.wasm_malloc = null;
        this.wasm_free = null;
        this.execute_query_main = null;
        this._initialized = false;
    }

    async load(wasmPath) {
        if (this.verbose) {
            console.log(`Loading module: ${wasmPath}`);
        }

        const wasi = new WASI({
            version: 'preview1',
            args: ['execute_query'],
            env: {},
        });

        const wasmBuffer = await readFile(wasmPath);
        
        if (this.verbose) {
            console.log('Compiling module...');
        }
        
        const module = await WebAssembly.compile(wasmBuffer);
        
        if (this.verbose) {
            console.log('Instantiating module...');
        }

        this.instance = await WebAssembly.instantiate(module, {
            wasi_snapshot_preview1: wasi.wasiImport,
        });

        // Get exports
        this.memory = this.instance.exports.memory;
        this.wasm_malloc = this.instance.exports.wasm_malloc;
        this.wasm_free = this.instance.exports.wasm_free;
        this.execute_query_main = this.instance.exports.execute_query_main;
        const _initialize = this.instance.exports._initialize;

        if (this.verbose) {
            console.log(`Exports found: memory, wasm_malloc, wasm_free, execute_query_main, _initialize=${_initialize !== undefined}`);
        }

        // Initialize WASI (this calls _initialize internally for reactor modules)
        // Note: wasi.initialize() already handles _initialize for reactor modules
        wasi.initialize(this.instance);

        this._initialized = true;
    }

    /**
     * Execute query with given arguments.
     * @param {string[]} args - List of arguments (without 'execute_query' prefix)
     * @param {boolean|null} verbose - Override instance verbose setting
     * @returns {number} Exit code from execute_query_main
     */
    execute(args, verbose = null) {
        if (verbose === null) {
            verbose = this.verbose;
        }

        // Prepare arguments
        const fullArgs = ['execute_query', ...args];

        if (verbose) {
            console.log(`Arguments: ${JSON.stringify(fullArgs)}`);
        }

        // Get memory view
        const memData = new Uint8Array(this.memory.buffer);
        const memView = new DataView(this.memory.buffer);

        // Allocate memory for argv array
        const argc = fullArgs.length;
        const argvSize = argc * 4; // 4 bytes per pointer (32-bit WASM)
        const argvPtr = this.wasm_malloc(argvSize);

        if (verbose) {
            console.log(`Allocated argv at ${argvPtr}`);
        }

        // Allocate and copy each argument string
        const argPtrs = [];
        const encoder = new TextEncoder();

        for (let i = 0; i < fullArgs.length; i++) {
            const arg = fullArgs[i];
            const argBytes = encoder.encode(arg + '\0');
            const argPtr = this.wasm_malloc(argBytes.length);

            if (verbose) {
                console.log(`  arg[${i}] = '${arg}' at ${argPtr}`);
            }

            // Copy string bytes to memory
            memData.set(argBytes, argPtr);
            argPtrs.push(argPtr);
        }

        // Write argv pointers to the argv array (little-endian 32-bit)
        for (let i = 0; i < argPtrs.length; i++) {
            memView.setUint32(argvPtr + i * 4, argPtrs[i], true);
        }

        if (verbose) {
            console.log(`Calling execute_query_main(${argc}, ${argvPtr})...`);
        }

        let result = null;
        try {
            result = this.execute_query_main(argc, argvPtr);
            if (verbose) {
                console.log(`Result: ${result}`);
            }
        } catch (e) {
            if (e.message && e.message.includes('exit')) {
                // Extract exit code from error
                const match = e.message.match(/exit\((\d+)\)/);
                if (match) {
                    result = parseInt(match[1]);
                    if (verbose) {
                        console.log(`Exit status: ${result}`);
                    }
                } else {
                    console.error(`Error: ${e.message}`);
                    throw e;
                }
            } else {
                console.error(`Error: ${e}`);
                throw e;
            }
        }

        // Free memory
        for (const ptr of argPtrs) {
            this.wasm_free(ptr);
        }
        this.wasm_free(argvPtr);

        return result;
    }
}

/**
 * Load the WASI module and execute a query (legacy function).
 */
async function runExecuteQuery(wasmPath, queryArgs = []) {
    const executor = new WasiExecuteQuery(true);
    await executor.load(wasmPath);
    return executor.execute(queryArgs);
}

/**
 * Run benchmark with multiple queries.
 */
async function runBenchmark(wasmPath, queryArgs, iterations = 10) {
    console.log('='.repeat(60));
    console.log('BENCHMARK MODE');
    console.log('='.repeat(60));

    // Load module once
    console.log('\n[1] Loading module...');
    const loadStart = performance.now();
    const executor = new WasiExecuteQuery(false);
    await executor.load(wasmPath);
    const loadTime = (performance.now() - loadStart) / 1000;
    console.log(`    Module load time: ${loadTime.toFixed(3)}s`);

    // Warm-up run
    console.log('\n[2] Warm-up run...');
    executor.execute(queryArgs, false);

    // Benchmark runs
    console.log(`\n[3] Running ${iterations} iterations...`);
    const times = [];

    for (let i = 0; i < iterations; i++) {
        const start = performance.now();
        const result = executor.execute(queryArgs, false);
        const elapsed = (performance.now() - start) / 1000;
        times.push(elapsed);
        console.log(`    Iteration ${i + 1}: ${(elapsed * 1000).toFixed(2)}ms (result=${result})`);
    }

    // Statistics
    const avgTime = times.reduce((a, b) => a + b, 0) / times.length;
    const minTime = Math.min(...times);
    const maxTime = Math.max(...times);

    console.log('\n' + '='.repeat(60));
    console.log('RESULTS');
    console.log('='.repeat(60));
    console.log(`  Module load time: ${loadTime.toFixed(3)}s`);
    console.log(`  Average execution: ${(avgTime * 1000).toFixed(2)}ms`);
    console.log(`  Min execution: ${(minTime * 1000).toFixed(2)}ms`);
    console.log(`  Max execution: ${(maxTime * 1000).toFixed(2)}ms`);
    console.log(`  Queries per second: ${(1 / avgTime).toFixed(1)}`);
    console.log('='.repeat(60));
}

async function main() {
    const wasmPath = '/mnt/shared/workspaces/opensource/zetasql3/bazel-bin/zetasql/tools/execute_query/execute_query_wasi';
    
    const args = process.argv.slice(2);

    if (args.length > 0 && args[0] === '--benchmark') {
        // Benchmark mode: --benchmark <iterations> <query>
        let iterations = 10;
        let queryArgs = args.slice(1);

        if (queryArgs.length > 0 && /^\d+$/.test(queryArgs[0])) {
            iterations = parseInt(queryArgs[0]);
            queryArgs = queryArgs.slice(1);
        }

        if (queryArgs.length === 0) {
            queryArgs = ['SELECT 1 + 2'];
        }

        await runBenchmark(wasmPath, queryArgs, iterations);
    } else {
        // Normal mode
        await runExecuteQuery(wasmPath, args);
    }
}

main().catch(console.error);
