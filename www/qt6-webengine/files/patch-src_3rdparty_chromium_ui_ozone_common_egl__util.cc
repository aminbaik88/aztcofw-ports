--- src/3rdparty/chromium/ui/ozone/common/egl_util.cc.orig	2022-09-26 10:05:50 UTC
+++ src/3rdparty/chromium/ui/ozone/common/egl_util.cc
@@ -36,9 +36,9 @@ const base::FilePath::CharType kDefaultEglSoname[] =
     FILE_PATH_LITERAL("libGLESv2.so");
 #else  // BUILDFLAG(IS_FUCHSIA)
 const base::FilePath::CharType kDefaultEglSoname[] =
-    FILE_PATH_LITERAL("libEGL.so.1");
+    FILE_PATH_LITERAL("libEGL.so");
 const base::FilePath::CharType kDefaultGlesSoname[] =
-    FILE_PATH_LITERAL("libGLESv2.so.2");
+    FILE_PATH_LITERAL("libGLESv2.so");
 #endif
 const base::FilePath::CharType kAngleEglSoname[] =
     FILE_PATH_LITERAL("libEGL.so");
