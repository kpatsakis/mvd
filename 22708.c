static void goodB2G() char * data ; CWE690_NULL_Deref_From_Return__char_malloc_34_unionType myUnion ; data = NULL; data = ( char * ) malloc ( 20 * sizeof ( char ) ); myUnion . unionFirst = data; char * data = myUnion . unionSecond ; if ( data != NULL )  strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 