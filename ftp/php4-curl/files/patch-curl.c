--- curl.c.orig	Wed Dec  6 11:12:37 2006
+++ curl.c	Wed Dec  6 11:13:27 2006
@@ -258,7 +258,9 @@
 	REGISTER_CURL_CONSTANT(CURLOPT_FTPAPPEND);
 	REGISTER_CURL_CONSTANT(CURLOPT_NETRC);
 	REGISTER_CURL_CONSTANT(CURLOPT_FOLLOWLOCATION);
+#if CURLOPT_FTPASCII != 0
 	REGISTER_CURL_CONSTANT(CURLOPT_FTPASCII);
+#endif
 	REGISTER_CURL_CONSTANT(CURLOPT_PUT);
 #if CURLOPT_MUTE != 0
 	REGISTER_CURL_CONSTANT(CURLOPT_MUTE);
@@ -296,7 +298,9 @@
 	REGISTER_CURL_CONSTANT(CURLOPT_FILETIME);
 	REGISTER_CURL_CONSTANT(CURLOPT_WRITEFUNCTION);
 	REGISTER_CURL_CONSTANT(CURLOPT_READFUNCTION);
+#if CURLOPT_PASSWDFUNCTION != 0
 	REGISTER_CURL_CONSTANT(CURLOPT_PASSWDFUNCTION);
+#endif
 	REGISTER_CURL_CONSTANT(CURLOPT_HEADERFUNCTION);
 	REGISTER_CURL_CONSTANT(CURLOPT_MAXREDIRS);
 	REGISTER_CURL_CONSTANT(CURLOPT_MAXCONNECTS);
