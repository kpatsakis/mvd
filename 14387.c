void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54b_badSink(int64_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54c_badSink(int64_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54d_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54d_badSink(int64_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54e_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54e_badSink(int64_t * data) int64_t source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 