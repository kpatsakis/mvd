static void goodB2G() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; data = goodB2GSource ( data ); static char * goodB2GSource(char * data) size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; return data ; for (i=0; i < strlen(data); i++) if ( data [ i ] == SEARCH_CHAR )  free ( data ); 