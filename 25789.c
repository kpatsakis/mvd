static void goodB2G() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); CWE401_Memory_Leak__char_malloc_64b_goodB2GSink ( & data ); void CWE401_Memory_Leak__char_malloc_64b_goodB2GSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; free ( data ); 