static void goodB2G1() size_t data ; data = 0; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  