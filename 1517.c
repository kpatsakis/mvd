void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_11_bad() char * data ; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = ( char * ) malloc ( 10 * sizeof ( char ) ); strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 