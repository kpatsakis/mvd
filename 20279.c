char *svn__i64toa_sep(apr_int64_t number,char seperator,apr_pool_t *pool) char buffer [ 2 * 21 ] ; if ( number < 0 )  ui64toa_sep ( ( ( apr_uint64_t ) number ) , seperator , buffer ); static void ui64toa_sep(apr_uint64_t number,char seperator,char *buffer) apr_size_t length = svn__ui64toa ( buffer , number ) ; apr_size_t svn__ui64toa(char *dest,apr_uint64_t number) if ( number < 100 )  if ( number < 10 )  memcpy ( dest , decimal_table [ ( apr_size_t ) number ] , 2 ); dest [ 2 ] = 0; 