--- memcached.c.orig	2023-03-08 21:34:27 UTC
+++ memcached.c
@@ -707,7 +707,7 @@ conn *conn_new(const int sfd, enum conn_states init_st
         if (init_state == conn_listening) {
             fprintf(stderr, "<%d server listening (%s)\n", sfd,
                 prot_text(c->protocol));
-        } else if (IS_UDP(transport)) {
+        } else if IS_UDP(transport) {
             fprintf(stderr, "<%d server listening (udp)\n", sfd);
         } else if (c->protocol == negotiating_prot) {
             fprintf(stderr, "<%d new auto-negotiating client connection\n",
@@ -772,7 +772,7 @@ conn *conn_new(const int sfd, enum conn_states init_st
         c->write = tcp_write;
     }
 
-    if (IS_UDP(transport)) {
+    if IS_UDP(transport) {
         c->try_read_command = try_read_command_udp;
     } else {
         switch (c->protocol) {
@@ -871,7 +871,7 @@ static void conn_cleanup(conn *c) {
         c->sasl_conn = NULL;
     }
 
-    if (IS_UDP(c->transport)) {
+    if IS_UDP(c->transport) {
         conn_set_state(c, conn_read);
     }
 }
@@ -1171,7 +1171,7 @@ bool resp_start(conn *c) {
         c->resp->next = resp;
         c->resp = resp;
     }
-    if (IS_UDP(c->transport)) {
+    if IS_UDP(c->transport) {
         // need to hold on to some data for async responses.
         c->resp->request_id = c->request_id;
         c->resp->request_addr = c->request_addr;
@@ -2166,7 +2166,7 @@ void process_stats_conns(ADD_STAT add_stats, void *c) 
              * output -- not worth the complexity of the locking that'd be
              * required to prevent it.
              */
-            if (IS_UDP(conns[i]->transport)) {
+            if IS_UDP(conns[i]->transport) {
                 APPEND_NUM_STAT(i, "UDP", "%s", "UDP");
             }
             if (conns[i]->state != conn_closed) {
@@ -3361,7 +3361,7 @@ static void drive_machine(conn *c) {
             break;
 
         case conn_closing:
-            if (IS_UDP(c->transport))
+            if IS_UDP(c->transport)
                 conn_cleanup(c);
             else
                 conn_close(c);
@@ -3552,7 +3552,7 @@ static int server_socket(const char *interface,
 #endif
 
         setsockopt(sfd, SOL_SOCKET, SO_REUSEADDR, (void *)&flags, sizeof(flags));
-        if (IS_UDP(transport)) {
+        if IS_UDP(transport) {
             maximize_sndbuf(sfd);
         } else {
             error = setsockopt(sfd, SOL_SOCKET, SO_KEEPALIVE, (void *)&flags, sizeof(flags));
@@ -3607,7 +3607,7 @@ static int server_socket(const char *interface,
             }
         }
 
-        if (IS_UDP(transport)) {
+        if IS_UDP(transport) {
             int c;
 
             for (c = 0; c < settings.num_threads_per_udp; c++) {
