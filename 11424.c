static void goodG2B() char * data ; char * dataArray [ 5 ] ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_loop_66b_goodG2BSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_loop_66b_goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; free ( data ); 