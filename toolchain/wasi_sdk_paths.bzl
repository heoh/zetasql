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

"""Repository rule to configure WASI SDK paths."""

def _wasi_sdk_toolchain_impl(repository_ctx):
    # Get the path to the WASI SDK from the workspace
    wasi_sdk = repository_ctx.path(Label("@wasi_sdk//:BUILD")).dirname

    wasi_sdk_path = str(wasi_sdk)
    sysroot_include = wasi_sdk_path + "/share/wasi-sysroot/include"
    clang_include = wasi_sdk_path + "/lib/clang/18/include"

    # Create paths.bzl with absolute paths
    repository_ctx.file("paths.bzl", """# Auto-generated paths for WASI SDK
WASI_SDK_PATH = "{wasi_sdk_path}"
WASI_SYSROOT = "{wasi_sdk_path}/share/wasi-sysroot"
WASI_SYSROOT_INCLUDE = "{sysroot_include}"
WASI_CLANG_INCLUDE = "{clang_include}"
""".format(
        wasi_sdk_path = wasi_sdk_path,
        sysroot_include = sysroot_include,
        clang_include = clang_include,
    ))

    # Create BUILD file
    repository_ctx.file("BUILD", """
package(default_visibility = ["//visibility:public"])
""")

wasi_sdk_toolchain = repository_rule(
    implementation = _wasi_sdk_toolchain_impl,
    attrs = {},
)
