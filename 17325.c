void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_52_bad() int data ; data = - 1; data = INT_MAX / 2 + 2; CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_52b_badSink ( data ); void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_52b_badSink(int data) CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_52c_badSink ( data ); void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_52c_badSink(int data) size_t i ; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); for (i = 0; i < (size_t)data; i++) intPointer [ i ] = 0; free ( intPointer ); 