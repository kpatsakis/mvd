static void goodB2G2() wchar_t * data ; data = NULL; data = ( wchar_t * ) realloc ( data , 20 * sizeof ( wchar_t ) ); if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; if ( data != NULL )  wcscpy ( data , L "Initialize" ) free ( data ); 