void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_52_bad() int * data ; data = ( int * ) malloc ( 10 ); CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_52b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_52b_badSink(int * data) CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_52c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_52c_badSink(int * data) memcpy ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 