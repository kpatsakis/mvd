static void goodG2B1() char * data ; if ( STATIC_CONST_FALSE )  data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; memcpy ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 