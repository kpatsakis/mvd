static void goodG2B1() int64_t * data ; data = NULL; if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ); int64_t source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int64_t ) ); free ( data ); 