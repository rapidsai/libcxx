//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// WARNING: This test was generated by generate_feature_test_macros_tests.py and
// should not be edited manually.

// <mutex>

// Test the feature test macros defined by <mutex>

/*  Constant                 Value
    __cpp_lib_scoped_lock    201703L [C++17]
*/

#include <mutex>
#include "test_macros.h"

#if TEST_STD_VER < 14

# ifdef __cpp_lib_scoped_lock
#   error "__cpp_lib_scoped_lock should not be defined before c++17"
# endif

#elif TEST_STD_VER == 14

# ifdef __cpp_lib_scoped_lock
#   error "__cpp_lib_scoped_lock should not be defined before c++17"
# endif

#elif TEST_STD_VER == 17

# ifndef __cpp_lib_scoped_lock
#   error "__cpp_lib_scoped_lock should be defined in c++17"
# endif
# if __cpp_lib_scoped_lock != 201703L
#   error "__cpp_lib_scoped_lock should have the value 201703L in c++17"
# endif

#elif TEST_STD_VER > 17

# ifndef __cpp_lib_scoped_lock
#   error "__cpp_lib_scoped_lock should be defined in c++2a"
# endif
# if __cpp_lib_scoped_lock != 201703L
#   error "__cpp_lib_scoped_lock should have the value 201703L in c++2a"
# endif

#endif // TEST_STD_VER > 17

int main() {}
