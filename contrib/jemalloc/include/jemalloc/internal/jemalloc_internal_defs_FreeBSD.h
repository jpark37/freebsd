#ifndef __clang__
#  undef JEMALLOC_INTERNAL_UNREACHABLE
#  define JEMALLOC_INTERNAL_UNREACHABLE abort

#  undef JEMALLOC_C11_ATOMICS
#  undef JEMALLOC_GCC_ATOMIC_ATOMICS
#  undef JEMALLOC_GCC_U8_ATOMIC_ATOMICS
#  undef JEMALLOC_GCC_U8_SYNC_ATOMICS
#endif
