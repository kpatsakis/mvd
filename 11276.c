static void goodG2B() int64_t * data ; int64_t * dataGoodBuffer = ( int64_t * ) ALLOCA ( 100 * sizeof ( int64_t ) ) ; data = dataGoodBuffer; CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memmove_64b_goodG2BSink ( & data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memmove_64b_goodG2BSink(void * dataVoidPtr) int64_t * * dataPtr = ( int64_t * * ) dataVoidPtr ; int64_t * data = ( * dataPtr ) ; int64_t source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); 