void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_12_bad() char * data ; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; strncat ( data , source , 100 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 