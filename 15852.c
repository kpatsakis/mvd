static void goodB2G1() wchar_t * data ; data = NULL; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = ( wchar_t * ) calloc ( 100 , sizeof ( wchar_t ) ); wcscpy ( data , L "A String" ) if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; free ( data ); 