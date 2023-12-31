--- src/3rdparty/chromium/base/cpu.h.orig	2022-09-26 10:05:50 UTC
+++ src/3rdparty/chromium/base/cpu.h
@@ -108,7 +108,7 @@ class BASE_EXPORT CPU final {
   const std::string& cpu_brand() const { return cpu_brand_; }
 
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || \
-    BUILDFLAG(IS_AIX)
+    BUILDFLAG(IS_AIX) || BUILDFLAG(IS_BSD)
   enum class CoreType {
     kUnknown = 0,
     kOther,
