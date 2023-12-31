--- extensions/browser/extension_prefs.cc.orig	2023-04-05 11:05:06 UTC
+++ extensions/browser/extension_prefs.cc
@@ -2228,7 +2228,7 @@ void ExtensionPrefs::RegisterProfilePrefs(
   registry->RegisterListPref(
       pref_names::kExtendedBackgroundLifetimeForPortConnectionsToUrls);
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   registry->RegisterBooleanPref(pref_names::kChromeAppsEnabled, false);
 #endif
   registry->RegisterBooleanPref(
