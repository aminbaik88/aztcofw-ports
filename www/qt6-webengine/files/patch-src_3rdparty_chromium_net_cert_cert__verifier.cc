--- src/3rdparty/chromium/net/cert/cert_verifier.cc.orig	2022-09-26 10:05:50 UTC
+++ src/3rdparty/chromium/net/cert/cert_verifier.cc
@@ -78,7 +78,7 @@ std::unique_ptr<CertVerifier> CertVerifier::CreateDefa
 std::unique_ptr<CertVerifier> CertVerifier::CreateDefaultWithoutCaching(
     scoped_refptr<CertNetFetcher> cert_net_fetcher) {
   scoped_refptr<CertVerifyProc> verify_proc;
-#if BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   verify_proc =
       CertVerifyProc::CreateBuiltinVerifyProc(std::move(cert_net_fetcher));
 #elif BUILDFLAG(BUILTIN_CERT_VERIFIER_FEATURE_SUPPORTED)
