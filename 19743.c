static void goodG2B2() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; int64_t * dataBuffer = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ) ; if ( dataBuffer == NULL )  data = dataBuffer; printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 