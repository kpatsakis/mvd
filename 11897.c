static void goodG2B2() char * data ; char dataGoodBuffer [ 10 + 1 ] ; if ( 5 == 5 )  data = dataGoodBuffer; data [ 0 ] = '\0'; char source [ 10 + 1 ] = SRC_STRING ; strncpy ( data , source , strlen ( source ) + 1 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 