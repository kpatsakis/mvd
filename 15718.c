svn_error_t *svn_utf_cstring_to_utf8(const char **dest,const char *src,apr_pool_t *pool) xlate_handle_node_t * node ; svn_error_t * err ; svn_error_t * svn_err__temp = get_ntou_xlate_handle_node ( & node , pool ) ; static svn_error_t *get_ntou_xlate_handle_node(xlate_handle_node_t **ret,apr_pool_t *pool) return get_xlate_handle_node ( ret , SVN_APR_UTF8_CHARSET , ( assume_native_charset_is_utf8 ? SVN_APR_UTF8_CHARSET : ( ( const char * ) 1 ) ) , SVN_UTF_NTOU_XLATE_HANDLE , pool ) ; static svn_error_t *get_xlate_handle_node(xlate_handle_node_t **ret,const char *topage,const char *frompage,const char *userdata_key,apr_pool_t *pool) xlate_handle_node_t * old_node = ( ( void * ) 0 ) ; if ( userdata_key )  if ( xlate_handle_hash )  if ( userdata_key == SVN_UTF_NTOU_XLATE_HANDLE )  old_node = ( atomic_swap ( & xlat_ntou_static_handle , ( ( void * ) 0 ) ) ); if ( userdata_key == SVN_UTF_UTON_XLATE_HANDLE )  old_node = ( atomic_swap ( & xlat_uton_static_handle , ( ( void * ) 0 ) ) ); if ( old_node && old_node -> valid )  return 0 ; void * p ; old_node = p; if ( old_node && old_node -> valid )  * ret = old_node; return 0 ; return xlate_alloc_handle ( ret , topage , frompage , pool ) ; static svn_error_t *xlate_alloc_handle(xlate_handle_node_t **ret,const char *topage,const char *frompage,apr_pool_t *pool) apr_status_t apr_err ; const char * name ; if ( ! ( frompage != ( ( const char * ) 0 ) && topage != ( ( const char * ) 0 ) && ( frompage != ( ( const char * ) 1 ) || topage != ( ( const char * ) 1 ) ) ) )  svn_error_t * svn_err__temp = svn_error__malfunction ( ! 0 , "utf.c" , 222 , "frompage != SVN_APR_DEFAULT_CHARSET && topage != SVN_APR_DEFAULT_CHARSET && (frompage != SVN_APR_LOCALE_CHARSET || topage != SVN_APR_LOCALE_CHARSET)" ) ; if ( svn_err__temp )  return svn_err__temp ; while ( 0 )  while ( 0 )  if ( apr_err == 22 || apr_err == 20000 + 50000 + 23 )  if ( apr_err != 0 )  const char * errstr ; char apr_strerr [ 512 ] ; if ( frompage == ( ( const char * ) 1 ) )  errstr = ( apr_psprintf ( pool , ( dgettext ( "subversion" , "Can't create a character converter from native encoding to '%s'" ) ) , topage ) ); if ( topage == ( ( const char * ) 1 ) )  errstr = ( apr_psprintf ( pool , ( dgettext ( "subversion" , "Can't create a character converter from '%s' to native encoding" ) ) , frompage ) ); errstr = ( apr_psprintf ( pool , ( dgettext ( "subversion" , "Can't create a character converter from '%s' to '%s'" ) ) , frompage , topage ) ); return svn_error_createf ( SVN_ERR_PLUGIN_LOAD_FAILURE , svn_error_create ( apr_err , ( ( void * ) 0 ) , apr_strerr ) , "%s%s" , name , errstr ) ; return 0 ; svn_mutex__t * svn_mutex__m = xlate_handle_mutex ; svn_error_t * svn_err__temp = svn_mutex__lock ( svn_mutex__m ) ; if ( svn_err__temp )  return svn_err__temp ; while ( 0 )  svn_error_t * svn_err__temp = svn_mutex__unlock ( svn_mutex__m , get_xlate_handle_node_internal ( ret , topage , frompage , userdata_key , pool ) ) ; static svn_error_t *get_xlate_handle_node_internal(xlate_handle_node_t **ret,const char *topage,const char *frompage,const char *userdata_key,apr_pool_t *pool) if ( userdata_key && xlate_handle_hash )  xlate_handle_node_t * old_node = ( ( void * ) 0 ) ; xlate_handle_node_t * * old_node_p = ( apr_hash_get ( xlate_handle_hash , userdata_key , ( - 1 ) ) ) ; if ( old_node_p )  old_node = * old_node_p; if ( old_node )  if ( old_node -> valid )  return 0 ; pool = apr_hash_pool_get ( xlate_handle_hash ); return xlate_alloc_handle ( ret , topage , frompage , pool ) ; static svn_error_t *xlate_alloc_handle(xlate_handle_node_t **ret,const char *topage,const char *frompage,apr_pool_t *pool) apr_status_t apr_err ; const char * name ; if ( ! ( frompage != ( ( const char * ) 0 ) && topage != ( ( const char * ) 0 ) && ( frompage != ( ( const char * ) 1 ) || topage != ( ( const char * ) 1 ) ) ) )  svn_error_t * svn_err__temp = svn_error__malfunction ( ! 0 , "utf.c" , 222 , "frompage != SVN_APR_DEFAULT_CHARSET && topage != SVN_APR_DEFAULT_CHARSET && (frompage != SVN_APR_LOCALE_CHARSET || topage != SVN_APR_LOCALE_CHARSET)" ) ; if ( svn_err__temp )  return svn_err__temp ; while ( 0 )  while ( 0 )  if ( apr_err == 22 || apr_err == 20000 + 50000 + 23 )  if ( apr_err != 0 )  const char * errstr ; char apr_strerr [ 512 ] ; if ( frompage == ( ( const char * ) 1 ) )  errstr = ( apr_psprintf ( pool , ( dgettext ( "subversion" , "Can't create a character converter from native encoding to '%s'" ) ) , topage ) ); if ( topage == ( ( const char * ) 1 ) )  errstr = ( apr_psprintf ( pool , ( dgettext ( "subversion" , "Can't create a character converter from '%s' to native encoding" ) ) , frompage ) ); errstr = ( apr_psprintf ( pool , ( dgettext ( "subversion" , "Can't create a character converter from '%s' to '%s'" ) ) , frompage , topage ) ); return svn_error_createf ( SVN_ERR_PLUGIN_LOAD_FAILURE , svn_error_create ( apr_err , ( ( void * ) 0 ) , apr_strerr ) , "%s%s" , name , errstr ) ; return 0 ; if ( svn_err__temp )  return svn_err__temp ; while ( 0 )  while ( 0 )  return 0 ; if ( svn_err__temp )  while ( 0 )  err = convert_cstring ( dest , src , node , pool ); static svn_error_t *convert_cstring(const char **dest,const char *src,xlate_handle_node_t *node,apr_pool_t *pool) if ( node -> handle )  svn_error_t * svn_err__temp = convert_to_stringbuf ( node , src , strlen ( src ) , & destbuf , pool ) ; static svn_error_t *convert_to_stringbuf(xlate_handle_node_t *node,const char *src_data,apr_size_t src_length,svn_stringbuf_t **dest,apr_pool_t *pool) if ( apr_err )  const char * errstr ; svn_error_t * err ; if ( node -> frompage == ( ( const char * ) 1 ) )  errstr = ( apr_psprintf ( pool , ( dgettext ( "subversion" , "Can't convert string from native encoding to '%s':" ) ) , node -> topage ) ); if ( node -> topage == ( ( const char * ) 1 ) )  errstr = ( apr_psprintf ( pool , ( dgettext ( "subversion" , "Can't convert string from '%s' to native encoding:" ) ) , node -> frompage ) ); errstr = ( apr_psprintf ( pool , ( dgettext ( "subversion" , "Can't convert string from '%s' to '%s':" ) ) , node -> frompage , node -> topage ) ); err = svn_error_create ( apr_err , ( ( void * ) 0 ) , fuzzy_escape ( src_data , src_length , pool ) ); static const char *fuzzy_escape(const char *src,apr_size_t len,apr_pool_t *pool) const char * new_orig ; return new_orig ; return svn_error_create ( apr_err , err , errstr ) ; return 0 ; if ( svn_err__temp )  return svn_err__temp ; while ( 0 )  apr_size_t len = strlen ( src ) ; svn_error_t * svn_err__temp = check_non_ascii ( src , len , pool ) ; static svn_error_t *check_non_ascii(const char *data,apr_size_t len,apr_pool_t *pool) const char * data_start = data ; for (; len > 0; (--len , data++)) if ( ! ( 0 != ( svn_ctype_table [ ( unsigned char ) ( * data ) ] & 0x0080 ) ) || ! ( 0 != ( svn_ctype_table [ ( unsigned char ) ( * data ) ] & 0x0002 ) ) && 0 != ( svn_ctype_table [ ( unsigned char ) ( * data ) ] & 0x0001 ) )  if ( data - data_start )  const char * error_data = ( apr_pstrndup ( pool , data_start , ( data - data_start ) ) ) ; return svn_error_createf ( 22 , ( ( void * ) 0 ) , ( dgettext ( "subversion" , "Safe data '%s' was followed by non-ASCII byte %d: unable to convert to/from UTF-8" ) ) , error_data , ( * ( ( const unsigned char * ) data ) ) ) ; return svn_error_createf ( 22 , ( ( void * ) 0 ) , ( dgettext ( "subversion" , "Non-ASCII character (code %d) detected, and unable to convert to/from UTF-8" ) ) , ( * ( ( const unsigned char * ) data ) ) ) ; return 0 ; if ( svn_err__temp )  return svn_err__temp ; while ( 0 )  return 0 ; svn_error_t * svn_err__temp = svn_error_compose_create ( err , put_xlate_handle_node ( node , SVN_UTF_NTOU_XLATE_HANDLE , pool ) ) ; static svn_error_t *put_xlate_handle_node(xlate_handle_node_t *node,const char *userdata_key,apr_pool_t *pool) if ( ! userdata_key )  return 0 ; if ( xlate_handle_hash )  if ( userdata_key == SVN_UTF_NTOU_XLATE_HANDLE )  node = ( atomic_swap ( & xlat_ntou_static_handle , node ) ); if ( userdata_key == SVN_UTF_UTON_XLATE_HANDLE )  node = ( atomic_swap ( & xlat_uton_static_handle , node ) ); if ( node == ( ( void * ) 0 ) )  return 0 ; svn_mutex__t * svn_mutex__m = xlate_handle_mutex ; svn_error_t * svn_err__temp = svn_mutex__lock ( svn_mutex__m ) ; if ( svn_err__temp )  return svn_err__temp ; while ( 0 )  svn_error_t * svn_err__temp = svn_mutex__unlock ( svn_mutex__m , put_xlate_handle_node_internal ( node , userdata_key ) ) ; static svn_error_t *put_xlate_handle_node_internal(xlate_handle_node_t *node,const char *userdata_key) return 0 ; if ( svn_err__temp )  return svn_err__temp ; while ( 0 )  while ( 0 )  return 0 ; if ( svn_err__temp )  while ( 0 )  return check_cstring_utf8 ( * dest , pool ) ; static svn_error_t *check_cstring_utf8(const char *data,apr_pool_t *pool) if ( ! svn_utf__cstring_is_valid ( data ) )  return invalid_utf8 ( data , strlen ( data ) , pool ) ; static svn_error_t *invalid_utf8(const char *data,apr_size_t len,apr_pool_t *pool) const char * last = svn_utf__last_valid ( data , len ) ; const char * valid_txt = "" ; const char * invalid_txt = "" ; apr_size_t i ; size_t valid ; size_t invalid ; valid = ( last - data ); if ( valid > 24 )  valid = 24; for (i = 0; i < valid; ++i) valid_txt = ( apr_pstrcat ( pool , valid_txt , apr_psprintf ( pool , " %02x" , ( ( unsigned char ) last [ i - valid ] ) ) , ( ( char * ) ( ( void * ) 0 ) ) ) ); invalid = ( data + len - last ); if ( invalid > 4 )  invalid = 4; for (i = 0; i < invalid; ++i) invalid_txt = ( apr_pstrcat ( pool , invalid_txt , apr_psprintf ( pool , " %02x" , ( ( unsigned char ) last [ i ] ) ) , ( ( char * ) ( ( void * ) 0 ) ) ) ); return svn_error_createf ( 22 , ( ( void * ) 0 ) , ( dgettext ( "subversion" , "Valid UTF-8 data\n(hex:%s)\nfollowed by invalid UTF-8 sequence\n(hex:%s)" ) ) , valid_txt , invalid_txt ) ; 