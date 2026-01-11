# Copyright 2025 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# BUILD file for WASI SDK external repository

package(default_visibility = ["//visibility:public"])

filegroup(
    name = "all_files",
    srcs = glob(["**/*"]),
)

filegroup(
    name = "compiler_files",
    srcs = glob([
        "bin/clang*",
        "bin/llvm-*",
        "lib/clang/**/*",
        "share/wasi-sysroot/**/*",
    ]),
)

filegroup(
    name = "linker_files",
    srcs = glob([
        "bin/clang*",
        "bin/wasm-ld",
        "bin/lld",
        "bin/llvm-*",
        "lib/clang/**/*",
        "lib/wasi-sysroot/**/*",
        "share/wasi-sysroot/**/*",
    ]),
)

filegroup(
    name = "ar_files",
    srcs = glob([
        "bin/llvm-ar",
    ]),
)
