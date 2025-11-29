#!/usr/bin/env python3
"""Test script for the execute_query WASI module."""

import wasmtime
import sys
import time


class WasiExecuteQuery:
    """Wrapper class for execute_query WASI module that supports multiple calls."""
    
    def __init__(self, wasm_path: str, verbose: bool = True):
        self.wasm_path = wasm_path
        self.verbose = verbose
        
        # Configure the engine with threads support
        config = wasmtime.Config()
        config.wasm_threads = True
        
        self.engine = wasmtime.Engine(config)
        self.store = wasmtime.Store(self.engine)
        self.linker = wasmtime.Linker(self.engine)
        
        # Add WASI imports
        wasi_config = wasmtime.WasiConfig()
        wasi_config.inherit_stdout()
        wasi_config.inherit_stderr()
        self.store.set_wasi(wasi_config)
        self.linker.define_wasi()
        
        # Load the module
        if self.verbose:
            print(f"Loading module: {wasm_path}")
        self.module = wasmtime.Module.from_file(self.engine, wasm_path)
        
        # Instantiate
        if self.verbose:
            print("Instantiating module...")
        self.instance = self.linker.instantiate(self.store, self.module)

        # Get exports
        self.memory = self.instance.exports(self.store)["memory"]
        self.wasm_malloc = self.instance.exports(self.store)["wasm_malloc"]
        self.wasm_free = self.instance.exports(self.store)["wasm_free"]
        self.execute_query_main = self.instance.exports(self.store)["execute_query_main"]
        self._initialize = self.instance.exports(self.store).get("_initialize")
        
        if self.verbose:
            print(f"Exports found: memory, wasm_malloc, wasm_free, execute_query_main, _initialize={self._initialize is not None}")
        
        # Call _initialize if present (reactor mode)
        if self._initialize:
            if self.verbose:
                print("Calling _initialize...")
            self._initialize(self.store)
            if self.verbose:
                print("_initialize completed")
        
        self._initialized = True
    
    def _get_mem_data(self):
        """Get memory data pointer, handling both shared and regular memory."""
        if hasattr(self.memory, 'data_ptr'):
            try:
                return self.memory.data_ptr(self.store)
            except TypeError:
                return self.memory.data_ptr()
        return None
    
    def execute(self, args: list[str], verbose: bool = None) -> int:
        """Execute query with given arguments.
        
        Args:
            args: List of arguments (without 'execute_query' prefix)
            verbose: Override instance verbose setting
            
        Returns:
            Exit code from execute_query_main
        """
        if verbose is None:
            verbose = self.verbose
            
        # Prepare arguments
        full_args = ["execute_query"] + args
        
        if verbose:
            print(f"Arguments: {full_args}")
        
        # Allocate memory for argv array
        argc = len(full_args)
        argv_size = argc * 4  # 4 bytes per pointer (32-bit WASM)
        argv_ptr = self.wasm_malloc(self.store, argv_size)
        
        if verbose:
            print(f"Allocated argv at {argv_ptr}")
        
        # Allocate and copy each argument string
        arg_ptrs = []
        mem_data = self._get_mem_data()
        
        for i, arg in enumerate(full_args):
            arg_bytes = arg.encode('utf-8') + b'\0'
            arg_ptr = self.wasm_malloc(self.store, len(arg_bytes))
            
            if verbose:
                print(f"  arg[{i}] = '{arg}' at {arg_ptr}")
            
            for j, b in enumerate(arg_bytes):
                mem_data[arg_ptr + j] = b
            
            arg_ptrs.append(arg_ptr)
        
        # Write argv pointers to the argv array
        for i, ptr in enumerate(arg_ptrs):
            offset = argv_ptr + i * 4
            mem_data[offset] = ptr & 0xFF
            mem_data[offset + 1] = (ptr >> 8) & 0xFF
            mem_data[offset + 2] = (ptr >> 16) & 0xFF
            mem_data[offset + 3] = (ptr >> 24) & 0xFF
        
        if verbose:
            print(f"Calling execute_query_main({argc}, {argv_ptr})...")
        
        result = None
        try:
            result = self.execute_query_main(self.store, argc, argv_ptr)
            if verbose:
                print(f"Result: {result}")
        except wasmtime.ExitTrap as e:
            if verbose:
                print(f"Exit status: {e.code}")
            result = e.code
        except Exception as e:
            print(f"Error: {e}")
            raise
        
        # Free memory
        for ptr in arg_ptrs:
            self.wasm_free(self.store, ptr)
        self.wasm_free(self.store, argv_ptr)
        
        return result


def run_execute_query(wasm_path: str, query: list[str] = None):
    """Load the WASI module and execute a query (legacy function)."""
    executor = WasiExecuteQuery(wasm_path)
    return executor.execute(query)


def run_benchmark(wasm_path: str, queries: list[str], iterations: int = 10):
    """Run benchmark with multiple queries."""
    print("=" * 60)
    print("BENCHMARK MODE")
    print("=" * 60)
    
    # Load module once
    print("\n[1] Loading module...")
    load_start = time.perf_counter()
    executor = WasiExecuteQuery(wasm_path, verbose=False)
    load_time = time.perf_counter() - load_start
    print(f"    Module load time: {load_time:.3f}s")
    
    # Warm-up run
    print("\n[2] Warm-up run...")
    executor.execute(queries, verbose=False)
    
    # Benchmark runs
    print(f"\n[3] Running {iterations} iterations...")
    times = []
    
    for i in range(iterations):
        start = time.perf_counter()
        result = executor.execute(queries, verbose=False)
        elapsed = time.perf_counter() - start
        times.append(elapsed)
        print(f"    Iteration {i+1}: {elapsed*1000:.2f}ms (result={result})")
    
    # Statistics
    avg_time = sum(times) / len(times)
    min_time = min(times)
    max_time = max(times)
    
    print("\n" + "=" * 60)
    print("RESULTS")
    print("=" * 60)
    print(f"  Module load time: {load_time:.3f}s")
    print(f"  Average execution: {avg_time*1000:.2f}ms")
    print(f"  Min execution: {min_time*1000:.2f}ms")
    print(f"  Max execution: {max_time*1000:.2f}ms")
    print(f"  Queries per second: {1/avg_time:.1f}")
    print("=" * 60)


if __name__ == "__main__":
    wasm_path = "/mnt/shared/workspaces/opensource/zetasql3/bazel-bin/zetasql/tools/execute_query/execute_query_wasi"
    
    if len(sys.argv) > 1 and sys.argv[1] == "--benchmark":
        # Benchmark mode: --benchmark <iterations> <query>
        iterations = 10
        query_args = sys.argv[2:]
        
        if query_args and query_args[0].isdigit():
            iterations = int(query_args[0])
            query_args = query_args[1:]
        
        if not query_args:
            query_args = ["SELECT 1 + 2"]
        
        run_benchmark(wasm_path, query_args, iterations)
    else:
        # Normal mode
        run_execute_query(wasm_path, sys.argv[1:])
