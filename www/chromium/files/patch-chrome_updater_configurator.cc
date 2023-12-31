--- chrome/updater/configurator.cc.orig	2023-04-28 17:01:32 UTC
+++ chrome/updater/configurator.cc
@@ -64,7 +64,7 @@ Configurator::Configurator(scoped_refptr<UpdaterPrefs>
         return absl::nullopt;
 #endif
       }()) {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // On Linux creating the NetworkFetcherFactory requires performing blocking IO
   // to load an external library. This should be done when the configurator is
   // created.
