static void goodG2B() int * data ; data = ( int * ) malloc ( 10 * sizeof ( int ) ); CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_63b_goodG2BSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_63b_goodG2BSink(int * * dataPtr) int * data = * dataPtr ; memcpy ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 