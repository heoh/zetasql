# emcc hello.c -o hello.js \
#   -s STANDALONE_WASM=1 \
#   -s EXPORTED_FUNCTIONS="['_say_hello', '_main']" \
#   -s EXPORTED_RUNTIME_METHODS="['ccall', 'cwrap']" \
#   -s MODULARIZE=1 \
#   -O3
emcc hello.c -o hello.js \
  --no-entry \
  -s STANDALONE_WASM=1 \
  -s EXPORTED_FUNCTIONS="['_print_two_strings', '_malloc', '_free']" \
  -s EXPORTED_RUNTIME_METHODS="['ccall', 'cwrap']" \
  -s MODULARIZE=1 \
  -O3

# emcc hello.cpp -o hello.js \
#   --no-entry \
#   -s STANDALONE_WASM=1 \
#   -s EXPORTED_FUNCTIONS="['_say_hello']" \
#   -s EXPORTED_RUNTIME_METHODS="['cwrap']" \
#   -s MODULARIZE=1

# emcc hello.cpp -o hello.wasm \
#   --no-entry \
#   -s STANDALONE_WASM=1 \
#   -s EXPORTED_FUNCTIONS="['_say_hello']"

# emcc hello.cpp -o hello.js \
#   --no-entry \
#   -s STANDALONE_WASM=1 \
#   -s EXPORTED_FUNCTIONS="['_say_hello']" \
#   -s EXPORTED_RUNTIME_METHODS="['cwrap']" \
#   -s MODULARIZE=1 \
#   -s SINGLE_FILE=1
