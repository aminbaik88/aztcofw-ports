--- src/3rdparty/chromium/chrome/browser/media/webrtc/webrtc_log_uploader.cc.orig	2021-12-15 16:12:54 UTC
+++ src/3rdparty/chromium/chrome/browser/media/webrtc/webrtc_log_uploader.cc
@@ -359,6 +359,8 @@ void WebRtcLogUploader::SetupMultipart(
   const char product[] = "Chrome_Android";
 #elif defined(OS_CHROMEOS)
   const char product[] = "Chrome_ChromeOS";
+#elif defined(OS_FREEBSD)
+  const char product[] = "Chrome_FreeBSD";
 #else
 #error Platform not supported.
 #endif
