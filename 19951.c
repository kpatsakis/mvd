void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_32_bad() char * data ; char * * dataPtr2 = & data ; data = NULL; data = ( char * ) malloc ( 10 * sizeof ( char ) ); char * data = * dataPtr2 ; char source [ 10 + 1 ] = SRC_STRING ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 