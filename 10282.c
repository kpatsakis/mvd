static void goodG2B() int64_t * data ; data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ); dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_66b_goodG2BSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_66b_goodG2BSink(int64_t * dataArray[]) int64_t * data = dataArray [ 2 ] ; memcpy ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 