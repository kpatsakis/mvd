void bad() int * data ; data = NULL; data = new int [ 50 ]; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_int_memcpy_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_int_memcpy_82_bad baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_int_memcpy_82_bad::action(int * data) int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 