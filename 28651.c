void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_63_bad() char * data ; data = NULL; data = ( char * ) malloc ( 10 * sizeof ( char ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_63b_badSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_63b_badSink(char * * dataPtr) char * data = * dataPtr ; char source [ 10 + 1 ] = SRC_STRING ; size_t i , sourceLen ; sourceLen = strlen ( source ); for (i = 0; i < sourceLen + 1; i++) data [ i ] = source [ i ]; free ( data ); 