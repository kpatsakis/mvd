static void goodG2B() char * data ; data = ( char * ) malloc ( ( 10 + 1 ) * sizeof ( char ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_53b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_53b_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_53c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_53c_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_53d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_53d_goodG2BSink(char * data) strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 