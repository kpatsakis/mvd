void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_66_bad() char * data ; char * dataArray [ 5 ] ; data = NULL; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_66b_badSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncat ( data , source , 100 ); free ( data ); 