static void good1() if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; char * reversedString = helperGood ( "GoodSink" ) ; static char * helperGood(char * aString) if ( aString != NULL )  i = strlen ( aString ); reversedString = ( char * ) malloc ( i + 1 ); for (j = 0; j < i; j++) reversedString [ j ] = aString [ i - j - 1 ]; reversedString [ i ] = '\0'; return reversedString ; 