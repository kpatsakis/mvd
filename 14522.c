static void goodB2G() long * data ; data = ( long * ) malloc ( 1 * sizeof ( long ) ); CWE690_NULL_Deref_From_Return__long_malloc_64b_goodB2GSink ( & data ); void CWE690_NULL_Deref_From_Return__long_malloc_64b_goodB2GSink(void * dataVoidPtr) long * * dataPtr = ( long * * ) dataVoidPtr ; long * data = ( * dataPtr ) ; if ( data != NULL )  data [ 0 ] = 5L; printLongLine ( data [ 0 ] ); void printLongLine (long longNumber) printf ( "%ld\n" , longNumber ); free ( data ); 