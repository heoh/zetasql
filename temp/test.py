import struct
from wasmtime import Store, Module, Instance, Linker, WasiConfig, Engine, Memory

def run():
    print("--- Python 실행 ---")
    
    engine = Engine()
    store = Store(engine)

    wasi = WasiConfig()
    wasi.inherit_stdout()
    store.set_wasi(wasi)

    linker = Linker(engine)
    linker.define_wasi()

    module = Module.from_file(engine, "hello.wasm")
    instance = linker.instantiate(store, module)
    
    exports = instance.exports(store)
    # Export된 함수와 메모리 가져오기
    def get_export(name):
        # 1. 정확한 이름 시도
        if name in exports: return exports[name]
        # 2. 언더바(_)가 붙은 이름 시도 (Emscripten 기본)
        if f"_{name}" in exports: return exports[f"_{name}"]
        # 3. 언더바가 빠진 이름 시도
        if name.startswith("_") and name[1:] in exports: return exports[name[1:]]
        raise KeyError(f"Cannot find export '{name}' in wasm module")

    print_func = get_export("print_two_strings")
    malloc = get_export("malloc")
    free = get_export("free")
    memory = get_export("memory")

    # 헬퍼: 문자열을 메모리에 쓰고 포인터 반환
    def copy_string_to_memory(s: str):
        s_bytes = s.encode('utf-8') + b'\0' # Null 문자 포함
        ptr = malloc(store, len(s_bytes))
        # 메모리의 특정 오프셋에 바이트 쓰기
        memory.write(store, s_bytes, ptr)
        return ptr

    # 1. 문자열 메모리 할당
    str_ptr1 = copy_string_to_memory("Hello Python")
    str_ptr2 = copy_string_to_memory("Wasm Array Logic")

    # 2. 포인터 배열(char**) 메모리 할당 (4바이트 * 2개)
    array_ptr = malloc(store, 8)

    # 3. 배열 메모리에 문자열 포인터 2개 쓰기 (Little Endian unsigned int)
    # struct.pack('<II', ...) : 리틀엔디안(<), Unsigned Int(I) 2개
    packed_ptrs = struct.pack('<II', str_ptr1, str_ptr2)
    memory.write(store, packed_ptrs, array_ptr)

    # 4. 함수 호출
    print_func(store, array_ptr)

    # 5. 메모리 해제
    free(store, str_ptr1)
    free(store, str_ptr2)
    free(store, array_ptr)

if __name__ == "__main__":
    run()
