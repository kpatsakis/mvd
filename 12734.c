static void goodB2G2() char * data ; data = NULL; data = ( char * ) realloc ( data , 20 * sizeof ( char ) ); if ( GLOBAL_CONST_FIVE == 5 )  if ( data != NULL )  strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 