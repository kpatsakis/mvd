static void goodG2B() long * dataBuffer = ( long * ) malloc ( 100 * sizeof ( long ) ) ; if ( dataBuffer == NULL )  dataBuffer [ i ] = 5L; data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_long_alloca_64b_goodG2BSink ( & data ); void CWE590_Free_Memory_Not_on_Heap__free_long_alloca_64b_goodG2BSink(void * dataVoidPtr) long * * dataPtr = ( long * * ) dataVoidPtr ; long * data = ( * dataPtr ) ; printLongLine ( data [ 0 ] ); void printLongLine (long longNumber) printf ( "%ld\n" , longNumber ); free ( data ); 