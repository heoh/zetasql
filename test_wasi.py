#!/usr/bin/env python3
"""Test script for the execute_query WASI module."""

import wasmtime
import sys

def run_execute_query(wasm_path: str, query: str = None):
    """Load the WASI module and execute a query."""

    # Configure the engine with threads support
    config = wasmtime.Config()
    config.wasm_threads = True
    
    engine = wasmtime.Engine(config)
    store = wasmtime.Store(engine)
    linker = wasmtime.Linker(engine)
    
    # Add WASI imports
    wasi_config = wasmtime.WasiConfig()
    wasi_config.inherit_stdout()
    wasi_config.inherit_stderr()
    store.set_wasi(wasi_config)
    linker.define_wasi()
    
    # Load the module
    print(f"Loading module: {wasm_path}")
    module = wasmtime.Module.from_file(engine, wasm_path)
    
    # Instantiate
    print("Instantiating module...")
    instance = linker.instantiate(store, module)

    # Get exports
    memory = instance.exports(store)["memory"]
    wasm_malloc = instance.exports(store)["wasm_malloc"]
    wasm_free = instance.exports(store)["wasm_free"]
    execute_query_main = instance.exports(store)["execute_query_main"]
    initialize = instance.exports(store).get("_initialize")
    
    print(f"Exports found: memory, wasm_malloc, wasm_free, execute_query_main, _initialize={initialize is not None}")
    
    # Call _initialize if present (reactor mode)
    if initialize:
        print("Calling _initialize...")
        initialize(store)
        print("_initialize completed")

    # Prepare arguments
    args = ["execute_query"] + query
    
    print(f"Arguments: {args}")
    
    # Allocate memory for argv array
    argc = len(args)
    argv_size = argc * 4  # 4 bytes per pointer (32-bit WASM)
    argv_ptr = wasm_malloc(store, argv_size)
    print(f"Allocated argv at {argv_ptr}")
    
    # Allocate and copy each argument string
    arg_ptrs = []
    for i, arg in enumerate(args):
        arg_bytes = arg.encode('utf-8') + b'\0'
        arg_ptr = wasm_malloc(store, len(arg_bytes))
        print(f"  arg[{i}] = '{arg}' at {arg_ptr}")
        
        # Copy string to WASM memory (handle both shared and regular memory)
        if hasattr(memory, 'data_ptr'):
            try:
                # Try with store argument first (regular memory)
                mem_data = memory.data_ptr(store)
            except TypeError:
                # Shared memory doesn't need store
                mem_data = memory.data_ptr()
        
        for j, b in enumerate(arg_bytes):
            mem_data[arg_ptr + j] = b
        
        arg_ptrs.append(arg_ptr)
    
    # Write argv pointers to the argv array
    if hasattr(memory, 'data_ptr'):
        try:
            mem_data = memory.data_ptr(store)
        except TypeError:
            mem_data = memory.data_ptr()
    for i, ptr in enumerate(arg_ptrs):
        # Write 32-bit pointer (little endian)
        offset = argv_ptr + i * 4
        mem_data[offset] = ptr & 0xFF
        mem_data[offset + 1] = (ptr >> 8) & 0xFF
        mem_data[offset + 2] = (ptr >> 16) & 0xFF
        mem_data[offset + 3] = (ptr >> 24) & 0xFF
    
    print(f"Calling execute_query_main({argc}, {argv_ptr})...")
    result = None
    try:
        result = execute_query_main(store, argc, argv_ptr)
        print(f"Result: {result}")
    except wasmtime.ExitTrap as e:
        print(f"Exit status: {e.code}")
        result = e.code
    except Exception as e:
        print(f"Error: {e}")
    
    # Free memory
    for ptr in arg_ptrs:
        wasm_free(store, ptr)
    wasm_free(store, argv_ptr)
    
    return result

if __name__ == "__main__":
    wasm_path = "/mnt/shared/workspaces/opensource/zetasql3/bazel-bin/zetasql/tools/execute_query/execute_query_wasi"
    
    run_execute_query(wasm_path, sys.argv[1:])
