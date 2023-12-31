--- plugins/preauth/pkinit/pkinit_crypto_openssl.c.orig	2022-10-17 09:52:43 UTC
+++ plugins/preauth/pkinit/pkinit_crypto_openssl.c
@@ -184,6 +184,17 @@ pkcs11err(int err);
     (*_x509_pp) = PKCS7_cert_from_signer_info(_p7,_si)
 #endif
 
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
+
+/*
+ * 1.1 adds DHX support, which uses the RFC 3279 DomainParameters encoding we
+ * need for PKINIT.  For 1.0 we must use the original DH type when creating
+ * EVP_PKEY objects.
+ */
+#define EVP_PKEY_DHX EVP_PKEY_DH
+#define d2i_DHxparams d2i_DHparams
+#endif
+
 #if OPENSSL_VERSION_NUMBER < 0x10100000L
 
 /* 1.1 standardizes constructor and destructor names, renaming
@@ -193,13 +204,6 @@ pkcs11err(int err);
 #define EVP_MD_CTX_free EVP_MD_CTX_destroy
 #define ASN1_STRING_get0_data ASN1_STRING_data
 
-/*
- * 1.1 adds DHX support, which uses the RFC 3279 DomainParameters encoding we
- * need for PKINIT.  For 1.0 we must use the original DH type when creating
- * EVP_PKEY objects.
- */
-#define EVP_PKEY_DHX EVP_PKEY_DH
-
 /* 1.1 makes many handle types opaque and adds accessors.  Add compatibility
  * versions of the new accessors we use for pre-1.1. */
 
@@ -588,7 +592,7 @@ set_padded_derivation(EVP_PKEY_CTX *ctx)
 {
     EVP_PKEY_CTX_set_dh_pad(ctx, 1);
 }
-#elif OPENSSL_VERSION_NUMBER >= 0x10100000L
+#elif OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
 static void
 set_padded_derivation(EVP_PKEY_CTX *ctx)
 {
