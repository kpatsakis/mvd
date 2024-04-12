int CVE_2010_3864_VULN_ssl_parse_clienthello_tlsext(SSL *s, unsigned char **p, unsigned char *d, int n, int *al) unsigned short type ; unsigned short size ; unsigned short len ; unsigned char * data = * p ; s -> servername_done = 0; s -> tlsext_status_type = - 1; if ( data >= ( d + n - 2 ) )  if ( data > ( d + n - len ) )  while ( data <= ( d + n - 4 ) )  if ( data + size > ( d + n ) )  if ( type == TLSEXT_TYPE_server_name )  unsigned char * sdata ; int servname_type ; int dsize ; if ( size < 2 )  size -= 2; if ( dsize > size )  sdata = data; while ( dsize > 3 )  servname_type = * ( sdata ++ ); dsize -= 3; if ( len > dsize )  if ( s -> servername_done == 0 )  switch ( servname_type )  if ( s -> session -> tlsext_hostname == NULL )  if ( len > TLSEXT_MAXLEN_host_name || ( ( s -> session -> tlsext_hostname = OPENSSL_malloc ( len + 1 ) ) == NULL ) )  memcpy ( s -> session -> tlsext_hostname , sdata , len ); s -> session -> tlsext_hostname [ len ] = '\0'; if ( strlen ( s -> session -> tlsext_hostname ) != len )  s -> session -> tlsext_hostname = NULL; s -> servername_done = 1; s -> servername_done = strlen ( s -> session -> tlsext_hostname ) == len && strncmp ( s -> session -> tlsext_hostname , ( char * ) sdata , len ) == 0; dsize -= len; if ( dsize != 0 )  if ( type == TLSEXT_TYPE_ec_point_formats && s -> version != DTLS1_VERSION )  unsigned char * sdata = data ; int ecpointformatlist_length = * ( sdata ++ ) ; if ( ecpointformatlist_length != size - 1 )  s -> session -> tlsext_ecpointformatlist_length = 0; if ( ( s -> session -> tlsext_ecpointformatlist = OPENSSL_malloc ( ecpointformatlist_length ) ) == NULL )  s -> session -> tlsext_ecpointformatlist_length = ecpointformatlist_length; if ( type == TLSEXT_TYPE_elliptic_curves && s -> version != DTLS1_VERSION )  unsigned char * sdata = data ; int ellipticcurvelist_length = ( * ( sdata ++ ) << 8 ) ; ellipticcurvelist_length += ( * ( sdata ++ ) ); if ( ellipticcurvelist_length != size - 2 )  s -> session -> tlsext_ellipticcurvelist_length = 0; if ( ( s -> session -> tlsext_ellipticcurvelist = OPENSSL_malloc ( ellipticcurvelist_length ) ) == NULL )  s -> session -> tlsext_ellipticcurvelist_length = ellipticcurvelist_length; memcpy ( s -> session -> tlsext_ellipticcurvelist , sdata , ellipticcurvelist_length ); fprintf ( stderr , "CVE_2010_3864_VULN_ssl_parse_clienthello_tlsext s->session->tlsext_ellipticcurvelist (length=%i) " , s -> session -> tlsext_ellipticcurvelist_length ); fprintf ( stderr , "\n" ); if ( type == TLSEXT_TYPE_opaque_prf_input && s -> version != DTLS1_VERSION )  unsigned char * sdata = data ; if ( size < 2 )  if ( s -> s3 -> client_opaque_prf_input_len != size - 2 )  if ( s -> s3 -> client_opaque_prf_input_len == 0 )  s -> s3 -> client_opaque_prf_input = OPENSSL_malloc ( 1 ); s -> s3 -> client_opaque_prf_input = BUF_memdup ( sdata , s -> s3 -> client_opaque_prf_input_len ); if ( s -> s3 -> client_opaque_prf_input == NULL )  if ( type == TLSEXT_TYPE_session_ticket )  if ( s -> tls_session_ticket_ext_cb && ! s -> tls_session_ticket_ext_cb ( s , data , size , s -> tls_session_ticket_ext_cb_arg ) )  if ( type == TLSEXT_TYPE_renegotiate )  if ( ! ssl_parse_clienthello_renegotiate_ext ( s , data , size , al ) )  if ( type == TLSEXT_TYPE_status_request && s -> version != DTLS1_VERSION && s -> ctx -> tlsext_status_cb )  if ( size < 5 )  s -> tlsext_status_type = * data ++; size --; if ( s -> tlsext_status_type == TLSEXT_STATUSTYPE_ocsp )  const unsigned char * sdata ; int dsize ; size -= 2; if ( dsize > size )  while ( dsize > 0 )  OCSP_RESPID * id ; int idsize ; if ( dsize < 4 )  dsize -= 2 + idsize; if ( dsize < 0 )  sdata = data; data += idsize; id = d2i_OCSP_RESPID ( NULL , & sdata , idsize ); if ( ! id )  if ( data != sdata )  if ( ! s -> tlsext_ocsp_ids && ! ( s -> tlsext_ocsp_ids = sk_OCSP_RESPID_new_null ( ) ) )  if ( ! sk_OCSP_RESPID_push ( s -> tlsext_ocsp_ids , id ) )  size -= 2; if ( dsize > size )  sdata = data; if ( dsize > 0 )  s -> tlsext_ocsp_exts = d2i_X509_EXTENSIONS ( NULL , & sdata , dsize ); if ( ! s -> tlsext_ocsp_exts || ( data + dsize != sdata ) )  s -> tlsext_status_type = - 1; data += size; 