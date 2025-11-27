const fs = require('fs');
const factory = require('./hello.js');

const wasmBuffer = fs.readFileSync('./hello.wasm');

factory({
    wasmBinary: wasmBuffer,
    print: function(text) { process.stdout.write(text + "\n"); }
}).then((instance) => {
    console.log("--- Node.js 실행 ---");

    // 문자열을 Wasm 메모리에 할당하고 쓰는 헬퍼 함수
    function copyStringToMemory(str) {
        const encoder = new TextEncoder();
        const bytes = encoder.encode(str + '\0'); // Null terminator(\0) 필수
        const ptr = instance._malloc(bytes.length);
        // HEAPU8 뷰를 통해 메모리에 씁니다.
        instance.HEAPU8.set(bytes, ptr);
        return ptr;
    }

    // 1. 문자열 2개를 메모리에 할당
    const strPtr1 = copyStringToMemory("Hello Node");
    const strPtr2 = copyStringToMemory("String Array Test");

    // 2. 포인터 배열(char**)을 위한 메모리 할당 (32비트 포인터 2개 = 8바이트)
    const ptrArray = instance._malloc(4 * 2);
    
    // 3. 포인터 배열에 문자열 주소 기록 (Wasm은 리틀 엔디안, 32비트 정수로 기록)
    // HEAP32 뷰를 사용해 정수(포인터 주소)를 씁니다.
    // ptrArray는 바이트 단위 주소이므로, 32비트(4바이트) 뷰 인덱스로 변환하려면 / 4를 해야 함
    instance.HEAP32[ptrArray >> 2] = strPtr1;      // array[0]
    instance.HEAP32[(ptrArray + 4) >> 2] = strPtr2; // array[1]

    // 4. 함수 호출
    instance._print_two_strings(ptrArray);

    // 5. 메모리 해제 (권장)
    instance._free(strPtr1);
    instance._free(strPtr2);
    instance._free(ptrArray);
});
