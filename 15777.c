void CWE617_Reachable_Assertion__fgets_08_bad() int data ; data = - 1; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); assert ( data > ASSERT_VALUE ); 