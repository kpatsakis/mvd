void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67_bad() int64_t * data ; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67_structType myStruct ; data = NULL; data = ( int64_t * ) malloc ( 50 * sizeof ( int64_t ) ); myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67b_badSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67b_badSink(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67_structType myStruct) int64_t * data = myStruct . structFirst ; int64_t source [ 100 ] = { 0 } ; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 