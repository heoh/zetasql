//
// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

// Compatibility header for gtest_prod.h
// On platforms like WASI where full gtest is not supported, this provides
// the FRIEND_TEST macro directly without pulling in the full gtest library.

#ifndef ZETASQL_BASE_GTEST_PROD_COMPAT_H_
#define ZETASQL_BASE_GTEST_PROD_COMPAT_H_

#ifdef __wasi__
// WASI doesn't support full gtest, define FRIEND_TEST directly
#ifndef FRIEND_TEST
#define FRIEND_TEST(test_case_name, test_name) \
  friend class test_case_name##_##test_name##_Test
#endif
#else
#include "gtest/gtest_prod.h"
#endif

#endif  // ZETASQL_BASE_GTEST_PROD_COMPAT_H_
