static void goodG2B2() char * data ; data = NULL; if ( GLOBAL_CONST_FIVE == 5 )  data = ( char * ) ALLOCA ( 100 * sizeof ( char ) ); strcpy ( data , "a string" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 