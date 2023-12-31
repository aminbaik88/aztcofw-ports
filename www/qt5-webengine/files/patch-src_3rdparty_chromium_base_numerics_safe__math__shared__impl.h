--- src/3rdparty/chromium/base/numerics/safe_math_shared_impl.h.orig	2021-12-15 16:12:54 UTC
+++ src/3rdparty/chromium/base/numerics/safe_math_shared_impl.h
@@ -24,8 +24,7 @@
 // Where available use builtin math overflow support on Clang and GCC.
 #elif !defined(__native_client__) &&                         \
       ((defined(__clang__) &&                                \
-        ((__clang_major__ > 3) ||                            \
-         (__clang_major__ == 3 && __clang_minor__ >= 4))) || \
+        (__clang_major__ > 6)) ||                            \
        (defined(__GNUC__) && __GNUC__ >= 5))
 #include "base/numerics/safe_math_clang_gcc_impl.h"
 #define BASE_HAS_OPTIMIZED_SAFE_MATH (1)
