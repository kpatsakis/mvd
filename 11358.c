static void goodB2G1() int64_t * data ; data = NULL; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = NULL; data = ( int64_t * ) realloc ( data , 100 * sizeof ( int64_t ) ); if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; free ( data ); 