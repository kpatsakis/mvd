static void goodB2G1() void * data ; data = NULL; if ( STATIC_CONST_TRUE )  data = ( void * ) WIDE_STRING; if ( STATIC_CONST_FALSE )  size_t dataLen = wcslen ( ( wchar_t * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , sizeof ( wchar_t ) ) ; memcpy ( dest , data , ( dataLen + 1 ) * sizeof ( wchar_t ) ); free ( dest ); 