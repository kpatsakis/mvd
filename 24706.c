void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_52_bad() char * data ; data = NULL; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_52b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_52b_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_52c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_52c_badSink(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncat ( data , source , 100 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 