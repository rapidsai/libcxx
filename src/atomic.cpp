//===------------------------- atomic.cpp ---------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_HAS_NO_THREADS
#include "functional"
#include "atomic"

_LIBCPP_BEGIN_NAMESPACE_STD

#ifndef _LIBCPP_HAS_NO_THREAD_CONTENTION_TABLE

__libcpp_contention_t contention[ 256 /* < there's no magic in this number */ ];

__libcpp_contention_t * __libcpp_contention_state(void const volatile * p) _NOEXCEPT {
    return contention + ((std::uintptr_t)p & 255);
}

#endif

#ifndef _LIBCPP_HAS_NO_THREAD_FAVORITE_HASH

thread_local std::size_t __libcpp_thread_favorite_hash =
    std::hash<__libcpp_thread_id>()(__libcpp_thread_get_current_id());

#endif

_LIBCPP_END_NAMESPACE_STD

#endif //_LIBCPP_HAS_NO_THREADS
