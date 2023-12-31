--- src/3rdparty/chromium/content/zygote/zygote_main_linux.cc.orig	2021-12-15 16:12:54 UTC
+++ src/3rdparty/chromium/content/zygote/zygote_main_linux.cc
@@ -11,7 +11,9 @@
 #include <stddef.h>
 #include <stdint.h>
 #include <string.h>
+#if !defined(OS_BSD)
 #include <sys/prctl.h>
+#endif
 #include <sys/socket.h>
 #include <sys/types.h>
 #include <unistd.h>
@@ -99,6 +101,7 @@ static bool EnterSuidSandbox(sandbox::SetuidSandboxCli
 // created through the setuid sandbox.
 static bool EnterSuidSandbox(sandbox::SetuidSandboxClient* setuid_sandbox,
                              base::OnceClosure post_fork_parent_callback) {
+#if !defined(OS_BSD)
   DCHECK(setuid_sandbox);
   DCHECK(setuid_sandbox->IsSuidSandboxChild());
 
@@ -131,6 +134,9 @@ static bool EnterSuidSandbox(sandbox::SetuidSandboxCli
 
   CHECK(sandbox::policy::SandboxDebugHandling::SetDumpableStatusAndHandlers());
   return true;
+#else
+  return false;
+#endif // !defined(OS_BSD)
 }
 
 static void DropAllCapabilities(int proc_fd) {
@@ -178,6 +184,7 @@ bool ZygoteMain(
 
 bool ZygoteMain(
     std::vector<std::unique_ptr<ZygoteForkDelegate>> fork_delegates) {
+#if !defined(OS_BSD)
   sandbox::SetAmZygoteOrRenderer(true, GetSandboxFD());
 
   auto* linux_sandbox = sandbox::policy::SandboxLinux::GetInstance();
@@ -243,6 +250,9 @@ bool ZygoteMain(
 
   // This function call can return multiple times, once per fork().
   return zygote.ProcessRequests();
+#else
+  return false;
+#endif // !defined(OS_BSD)
 }
 
 }  // namespace content
