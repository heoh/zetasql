# ZetaSQL WASI Porting Guide

이 문서는 ZetaSQL의 `execute_query` CLI를 WebAssembly (WASI)로 포팅한 작업에 대한 요약과 향후 버전 업그레이드 시 주의사항을 기록합니다.

## 목차

1. [개요](#개요)
2. [아키텍처](#아키텍처)
3. [빌드 설정](#빌드-설정)
4. [주요 변경사항](#주요-변경사항)
5. [해결한 이슈들](#해결한-이슈들)
6. [향후 버전 포팅 시 주의사항](#향후-버전-포팅-시-주의사항)
7. [테스트](#테스트)
8. [알려진 제한사항](#알려진-제한사항)
9. [바이너리 최적화 (wasm-opt)](#바이너리-최적화-wasm-opt)
10. [런타임 테스트](#런타임-테스트)

---

## 개요

### 목표
- ZetaSQL의 `execute_query` CLI를 **wasm32-wasi** 타겟으로 컴파일
- **Reactor 모드**로 빌드하여 클라이언트가 WASM 모듈을 로드하고 여러 번 함수 호출 가능
- CLI와 동일한 API 제공: `execute_query_main(int argc, char** argv)`

### 결과물
- **바이너리**: `bazel-bin/zetasql/tools/execute_query/execute_query_wasi`
- **크기**: ~373MB (최적화 전)
- **Export 함수**:
  - `_initialize` - Reactor 초기화 (최초 1회 호출)
  - `execute_query_main(int argc, char** argv)` - 메인 진입점
  - `wasm_malloc(size_t)` - 메모리 할당
  - `wasm_free(void*)` - 메모리 해제

---

## 아키텍처

### 타겟 플랫폼
```
Target Triple: wasm32-wasip1-threads
```

**`wasm32-wasip1-threads`를 선택한 이유:**
- Abseil의 동기화 프리미티브(Mutex, CondVar 등)가 스레드 지원을 필요로 함
- 기본 `wasm32-wasi`는 pthread 지원이 없어 링크 에러 발생
- WASI Preview 1 + Threads 확장 사용

### 메모리 설정
```
Initial Memory: 1GB (16384 pages × 64KB)
Maximum Memory: 1GB (shared memory는 min=max 필수)
Stack Size: 8MB
```

**1GB가 필요한 이유:**
- 프로토버프 정적 초기화 시 상당한 메모리 사용
- ZetaSQL의 복잡한 AST 및 타입 시스템
- Shared memory는 런타임에 grow 불가능 (min=max 제약)

### Reactor 모드
```c
__attribute__((export_name("_initialize")))
void _initialize(void) {
    // 정적 생성자 호출
    __wasm_call_ctors();
}
```

Command 모드와 달리 Reactor 모드는:
- `main()`을 자동 호출하지 않음
- 클라이언트가 `_initialize` 후 원하는 함수 호출
- 모듈 재사용 가능 (여러 쿼리 실행)

---

## 빌드 설정

### 필수 파일 구조
```
platforms/
└── BUILD                          # wasm32-wasi 플랫폼 정의

toolchain/
├── BUILD                          # CC toolchain 등록
├── wasi_cc_toolchain_config.bzl   # 컴파일/링크 플래그
├── wasi_sdk.BUILD                 # WASI SDK filegroup
├── wasi_sdk_paths.bzl             # SDK 경로 repository_rule
└── wrappers/                      # clang wrapper 스크립트
    ├── clang
    ├── llvm-ar
    ├── llvm-nm
    ├── llvm-objdump
    ├── llvm-strip
    └── wasm-ld

zetasql/tools/execute_query/
├── BUILD                          # execute_query_wasi 타겟 추가
└── execute_query_wasi.cc          # WASI 진입점
```

### 빌드 명령
```bash
bazel build --config=wasi //zetasql/tools/execute_query:execute_query_wasi
```

### .bazelrc 설정
```python
# WASI configuration
build:wasi --platforms=//platforms:wasm32-wasi
build:wasi --incompatible_enable_cc_toolchain_resolution
build:wasi --action_env=WASI_SDK_PATH=/path/to/wasi-sdk-24.0
```

---

## 주요 변경사항

### 1. 컴파일러 플래그 (wasi_cc_toolchain_config.bzl)

```python
flags = [
    "--target=wasm32-wasip1-threads",
    "--sysroot=" + WASI_SYSROOT,
    "-fno-exceptions",
    "-pthread",
    
    # WASI Emulation
    "-D_WASI_EMULATED_SIGNAL",
    "-D_WASI_EMULATED_MMAN",
    
    # BoringSSL 소켓 비활성화
    "-DOPENSSL_NO_SOCK",
    
    # ICU 타임존 비활성화
    "-DU_HAVE_TZSET=0",
    "-DU_HAVE_TZNAME=0",
    "-DU_HAVE_TIMEZONE=0",
    "-DU_HAVE_TM_GMTOFF=0",
    
    # Abseil mmap 지원 트리거
    "-D__asmjs__=1",
    
    # 릴리스 빌드 (데드락 검사 비활성화)
    "-DNDEBUG",
]
```

### 2. 링커 플래그

```python
flags = [
    "--target=wasm32-wasip1-threads",
    "-pthread",
    "-lwasi-emulated-signal",
    "-lwasi-emulated-mman",
    
    # 메모리 설정
    "-Wl,--initial-memory=1073741824",  # 1GB
    "-Wl,--max-memory=1073741824",
    "-Wl,--stack-first",
    "-Wl,-z,stack-size=8388608",        # 8MB
]
```

### 3. Clang Wrapper (toolchain/wrappers/clang)

x86 전용 플래그 필터링:
```bash
for arg in "$@"; do
    case "$arg" in
        -maes|-msse4.1|-msse4.2|-mavx|-mavx2)
            # WASM에서 지원하지 않는 x86 플래그 제거
            ;;
        *)
            filtered_args+=("$arg")
            ;;
    esac
done
```

### 4. 소스 코드 수정

#### IPv6 주소 호환성 (ipaddress_oss.h/cc)
WASI의 `in6_addr`는 `s6_addr32`/`s6_addr16` 멤버가 없음:
```cpp
namespace zetasql_base_internal {
// Cross-platform accessor for in6_addr
inline uint32_t GetIn6Addr32(const in6_addr& addr, int index) {
#ifdef __wasi__
    const uint8_t* bytes = addr.s6_addr + (index * 4);
    return (static_cast<uint32_t>(bytes[0]) << 24) |
           (static_cast<uint32_t>(bytes[1]) << 16) |
           (static_cast<uint32_t>(bytes[2]) << 8) |
           static_cast<uint32_t>(bytes[3]);
#else
    return addr.s6_addr32[index];
#endif
}
}  // namespace zetasql_base_internal
```

#### 타임존 기본값 (analyzer_options.cc, evaluation.cc)
ICU 타임존 데이터베이스가 없으므로 UTC 사용:
```cpp
#ifdef __wasi__
    data_->default_timezone = absl::UTCTimeZone();
#else
    ZETASQL_CHECK_OK(FindTimeZoneByName("America/Los_Angeles",
                                &data_->default_timezone));
#endif
```

#### 32비트 포인터 체크 (value_inl.h)
```cpp
#if !defined(__EMSCRIPTEN__) && !defined(__wasi__)
static_assert(sizeof(void*) == 8, "...");
#endif
```

#### gtest_prod 대체 (gtest_prod_compat.h)
프로덕션 코드에서 gtest 의존성 제거:
```cpp
#ifndef ZETASQL_BASE_GTEST_PROD_COMPAT_H_
#define ZETASQL_BASE_GTEST_PROD_COMPAT_H_

#if defined(__wasi__) || defined(__EMSCRIPTEN__)
#define FRIEND_TEST(test_case_name, test_name) \
    friend class test_case_name##_##test_name##_Test
#else
#include "gtest/gtest_prod.h"
#endif

#endif
```

---

## 해결한 이슈들

### 1. 링크 에러: pthread 심볼 미정의
**문제**: `wasm32-wasi` 타겟은 pthread 미지원
**해결**: `wasm32-wasip1-threads` 타겟으로 변경

### 2. AES 인트린식 에러
**문제**: `-maes`, `-msse4.1` 등 x86 플래그가 WASM에서 미지원
**해결**: clang wrapper에서 해당 플래그 필터링

### 3. IPv6 s6_addr32 미정의
**문제**: WASI libc의 `in6_addr`에 `s6_addr32` 멤버 없음
**해결**: 크로스 플랫폼 accessor 함수 구현

### 4. net/if.h, netdb.h 헤더 없음
**문제**: WASI에는 네트워크 헤더가 제한적
**해결**: `#ifndef __wasi__`로 조건부 include

### 5. getaddrinfo 미정의
**문제**: WASI에는 DNS 해석 함수 없음
**해결**: stub 함수 구현 (UnimplementedError 반환)

### 6. operator new 실패 (bad_alloc)
**문제**: 기본 WASM 메모리(75 pages ≈ 4.6MB)가 너무 작음
**해결**: 링커 플래그로 1GB 메모리 설정

### 7. Abseil Mutex 데드락 검사 크래시
**문제**: 디버그 빌드에서 LowLevelAlloc가 mmap 사용 시 실패
**해결**: `-DNDEBUG`로 데드락 검사 비활성화

### 8. ICU 타임존 로드 실패
**문제**: `FindTimeZoneByName("America/Los_Angeles")` 실패
**해결**: WASI에서는 `absl::UTCTimeZone()` 사용

### 9. gtest_prod.h 의존성
**문제**: `FRIEND_TEST` 매크로가 gtest에 의존하여 링크 에러
**해결**: `gtest_prod_compat.h` 생성하여 WASI에서는 자체 매크로 사용

### 10. BoringSSL 소켓 코드
**문제**: WASI에는 소켓 API 없음
**해결**: `-DOPENSSL_NO_SOCK`으로 소켓 관련 코드 제외

---

## 향후 버전 포팅 시 주의사항

### 1. Abseil 업데이트
```
주의 파일:
- absl/base/internal/low_level_alloc.h
- absl/synchronization/mutex.cc
- absl/base/config.h
```

**체크포인트:**
- `ABSL_HAVE_MMAP` 감지 로직 변경 여부
- `ABSL_LOW_LEVEL_ALLOC_MISSING` 조건 변경 여부
- `__asmjs__` 플래그 처리 방식 변경 여부

### 2. Protobuf 업데이트
```
주의 파일:
- src/google/protobuf/message_lite.cc (ShutdownData)
```

**체크포인트:**
- 정적 초기화 순서 변경
- 새로운 Mutex 사용 패턴

### 3. ICU 업데이트
```
주의 파일:
- source/common/putilimp.h
- source/common/putil.cpp
```

**체크포인트:**
- `U_HAVE_TZSET`, `U_TIMEZONE` 등 매크로 변경
- 새로운 타임존 관련 기능 추가

### 4. BoringSSL 업데이트
```
주의 파일:
- crypto/bio/*.c (소켓 관련)
```

**체크포인트:**
- `OPENSSL_NO_SOCK` 매크로 지원 여부
- 새로운 네트워크 기능

### 5. ZetaSQL 자체 업데이트

**새 파일 추가 시 확인:**
```bash
# 새 헤더에서 gtest_prod.h 사용 여부
grep -r "gtest/gtest_prod.h" zetasql/

# 새 코드에서 타임존 하드코딩 여부
grep -r "America/Los_Angeles" zetasql/

# 네트워크 관련 헤더 사용 여부
grep -r "#include.*<net\|netdb\|arpa" zetasql/
```

**BUILD 파일 변경 시:**
- 새로운 `cc_library`가 `@com_google_googletest//:gtest_prod` 의존 시 `gtest_prod_compat.h`로 대체

### 6. WASI SDK 업데이트

**버전 호환성:**
- 현재 사용: WASI SDK 24.0
- `wasm32-wasip1-threads` 타겟 지원 여부 확인
- libc++ 버전 및 pthread 구현 변경

### 7. 메모리 사용량 증가

ZetaSQL에 새 기능 추가 시 메모리 요구량 증가 가능:
```python
# 필요시 증가
"-Wl,--initial-memory=2147483648",  # 2GB
"-Wl,--max-memory=2147483648",
```

---

## 테스트

### Python 테스트 스크립트
```python
# test_wasi.py 사용
python3 test_wasi.py "SELECT 1 + 2"
python3 test_wasi.py "SELECT CURRENT_TIMESTAMP()"
```

### 검증된 기능
- ✅ 기본 산술 연산: `SELECT 1 + 2`
- ✅ 문자열 처리: `SELECT "Hello, WASI!"`
- ✅ 배열/UNNEST: `SELECT * FROM UNNEST([1,2,3])`
- ✅ 구조체: `SELECT STRUCT(1 as a, "b" as b)`
- ✅ 집계 함수: `SELECT SUM(x), ARRAY_AGG(x) FROM ...`
- ✅ CTE: `WITH t AS (...) SELECT * FROM t`
- ✅ 날짜/시간: `SELECT DATE "2024-01-01"` (UTC 타임존)

### 검증 필요 기능
- ⚠️ 복잡한 타임존 연산
- ⚠️ 대용량 데이터 처리 (메모리 제한)
- ⚠️ 모든 내장 함수

---

## 알려진 제한사항

### 1. 함수 호환성

WASI 환경에서는 일부 SQL 함수가 정상적으로 작동하지 않습니다.

#### ❌ 작동하지 않는 함수

| 함수 | 오류 | 원인 |
|------|------|------|
| `GENERATE_UUID()` | 크래시 - "Failed generating seed-material for URBG" | WASI에 엔트로피 소스 없음 |
| `RAND()` | 크래시 - 동일 | abseil 난수 생성기 초기화 실패 |
| `TIMESTAMP("...", "America/Los_Angeles")` | "Invalid time zone" | ICU 타임존 데이터베이스 비활성화 |
| `FORMAT_TIMESTAMP(..., "Asia/Seoul")` | "Invalid time zone" | 동일 |

**난수 생성 실패 원인:**
- WASI 환경에는 `/dev/urandom` 같은 엔트로피 소스가 없음
- Abseil의 URBG(Uniform Random Bit Generator)가 시드를 생성하지 못함
- 이로 인해 `RAND()`, `GENERATE_UUID()` 등 난수 기반 함수가 크래시

**타임존 제한 우회:**
- 명명된 타임존 대신 **UTC 오프셋** 사용: `"+09:00"` ✅

```sql
-- ❌ 실패
SELECT TIMESTAMP("2025-01-01 12:00:00", "Asia/Seoul")

-- ✅ 성공 (UTC 오프셋 사용)
SELECT TIMESTAMP("2025-01-01 12:00:00", "+09:00")
```

#### ✅ 정상 작동하는 함수

| 카테고리 | 테스트된 함수 |
|----------|--------------|
| **날짜/시간** | `CURRENT_DATE()`, `CURRENT_TIMESTAMP()`, `DATE_ADD()`, `EXTRACT()`, `PARSE_DATE()`, `PARSE_TIMESTAMP()` |
| **타임존** | UTC 오프셋 형식만 지원 (`"+09:00"`, `"-05:00"` 등) |
| **문자열** | `NORMALIZE()`, `REGEXP_EXTRACT()`, `CONCAT()`, `UPPER()`, `LOWER()` 등 |
| **해시** | `MD5()`, `SHA256()`, `SHA512()` 등 |
| **수학** | `FLOOR()`, `CEIL()`, `ROUND()`, `ABS()`, `SQRT()`, `POW()`, `MOD()` 등 |
| **JSON** | `JSON_VALUE()`, `JSON_QUERY()`, `JSON_EXTRACT()` 등 |
| **배열** | `ARRAY_LENGTH()`, `ARRAY_AGG()`, `UNNEST()` 등 |
| **네트워크 파싱** | `NET.IP_FROM_STRING()`, `NET.HOST()`, `NET.PUBLIC_SUFFIX()` 등 |
| **기타** | `ERROR()`, `COALESCE()`, `IF()`, `CASE` 등 |

### 2. 타임존
- 모든 타임존 연산은 **UTC** 기준
- `America/Los_Angeles` 등 명명된 타임존 미지원
- ICU 타임존 데이터베이스 로드 불가
- **대안**: UTC 오프셋 사용 (`"+09:00"` 형식)

### 3. 네트워크
- 소켓 API 미지원
- DNS 해석 불가
- 원격 카탈로그 연결 불가

### 4. 파일 시스템
- WASI capability-based 파일 접근
- 런타임에서 디렉토리 pre-open 필요

### 5. 바이너리 크기
- ~373MB (최적화 전)
- ~25MB (wasm-opt -O3 후처리 후)

**자세한 최적화 방법은 [바이너리 최적화 (wasm-opt)](#바이너리-최적화-wasm-opt) 섹션 참조**

**주의: 빌드 시 최적화 플래그 사용 금지**

다음 플래그들은 ICU의 vtable/데이터를 손상시킴:
```python
# 사용하지 말 것!
"-Wl,--gc-sections"   # ICU 데이터 제거됨
"-Wl,--strip-all"     # 심볼 테이블 손상
"-fno-rtti"           # ICU가 RTTI 필요
```

### 6. 런타임 요구사항
- 스레드 지원 필수 (`--wasm threads=y --wasi threads=y`)
- 최소 1GB 메모리

### 7. Geography 함수
- `ST_GEOGPOINT()`, `ST_DISTANCE()` 등 Geography 함수 미지원
- 이는 WASI 제한이 아닌 `execute_query` 도구 자체의 제한

---

## 참고 자료

- [WASI SDK](https://github.com/WebAssembly/wasi-sdk)
- [Abseil WASM/Emscripten 지원](https://github.com/nicbarker/clay/issues/173)
- [Wasmtime Runtime](https://wasmtime.dev/)
- [WebAssembly Threads Proposal](https://github.com/WebAssembly/threads)

---

## 바이너리 최적화 (wasm-opt)

### 문제

빌드 직후의 WASM 바이너리는 **373MB**로 매우 크며, 이로 인해 다음 문제가 발생합니다:

| 문제 | 영향 |
|------|------|
| **Node.js 종료 지연** | V8 GC가 거대한 메모리 정리에 ~50초 이상 소요 |
| **느린 컴파일** | JIT 컴파일 시간 증가 |
| **메모리 사용량** | 불필요한 dead code로 인한 메모리 낭비 |

### 원인

- 빌드 시 `-Wl,--gc-sections` 플래그를 사용하면 ICU 데이터가 손상되어 사용 불가
- 따라서 빌드 시점에는 dead code elimination이 적용되지 않음
- 결과적으로 사용되지 않는 코드가 바이너리에 포함됨

### 해결 방법

**wasm-opt**를 사용하여 빌드 후 최적화를 적용합니다:

```bash
# Binaryen 설치 (Ubuntu)
sudo apt install binaryen

# 최적화 실행 (-O3 권장)
wasm-opt -O3 \
  --enable-threads \
  --enable-bulk-memory \
  --enable-mutable-globals \
  bazel-bin/zetasql/tools/execute_query/execute_query_wasi \
  -o bazel-bin/zetasql/tools/execute_query/execute_query_wasi.opt

# 최적화된 파일로 교체
cp bazel-bin/zetasql/tools/execute_query/execute_query_wasi.opt \
   bazel-bin/zetasql/tools/execute_query/execute_query_wasi
```

### 최적화 결과

| 항목 | 최적화 전 | 최적화 후 | 개선 |
|------|----------|----------|------|
| **파일 크기** | 373MB | 25MB | **93% 감소** |
| **Node.js 실행 시간** | ~63초 | ~0.4초 | **170배 빠름** |
| **Python (wasmtime) 실행** | ~6초 | ~0.5초 | **12배 빠름** |

### 최적화 옵션 설명

| 옵션 | 설명 |
|------|------|
| `-O3` | 최대 성능 최적화 (dead code elimination 포함) |
| `-Os` | 크기 최적화 (약간 더 작지만 성능은 -O3보다 낮음) |
| `-Oz` | 최대 크기 최적화 |
| `--enable-threads` | threads proposal 사용 (필수) |
| `--enable-bulk-memory` | bulk memory 연산 사용 |
| `--enable-mutable-globals` | mutable globals 사용 |

### 주의사항

1. **wasm-opt 버전**: 최신 버전 권장 (v105 이상 테스트됨)
2. **최적화 시간**: 373MB 파일 기준 약 1-2분 소요
3. **원본 백업**: 최적화 전 원본 파일 백업 권장

```bash
# 원본 백업
cp execute_query_wasi execute_query_wasi.original
```

---

## 런타임 테스트

### Python (wasmtime)

```bash
# 설치
pip install wasmtime

# 테스트
python test_wasi.py "SELECT 1 + 2"

# 벤치마크
python test_wasi.py --benchmark 10 "SELECT 1 + 2"
```

### Node.js

```bash
# 테스트 (Node.js 20+ 필요)
node --experimental-wasi-unstable-preview1 test_wasi.js "SELECT 1 + 2"

# 벤치마크
node --experimental-wasi-unstable-preview1 test_wasi.js --benchmark 10 "SELECT 1 + 2"
```

### 성능 비교 (최적화된 25MB 바이너리)

| 런타임 | 모듈 로드 | 쿼리 실행 (첫 번째) | 쿼리 실행 (반복) |
|--------|----------|-------------------|-----------------|
| Python (wasmtime) | ~0.5초 | ~0.1초 | ~30ms |
| Node.js | ~0.3초 | ~0.1초 | ~30ms |
| Wasmtime CLI | ~0.4초 | ~0.1초 | N/A |

---

## 변경 이력

| 날짜 | 버전 | 설명 |
|------|------|------|
| 2025-11-28 | 1.0 | 초기 WASI 포팅 완료 |
| 2025-11-29 | 1.1 | wasm-opt 최적화 문서화, Node.js 테스트 스크립트 추가 |

---

## 연락처

포팅 관련 문의: [Repository Issues](https://github.com/heoh/zetasql/issues)
