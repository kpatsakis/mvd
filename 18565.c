void CWE690_NULL_Deref_From_Return__long_malloc_52_bad() long * data ; data = ( long * ) malloc ( 1 * sizeof ( long ) ); CWE690_NULL_Deref_From_Return__long_malloc_52b_badSink ( data ); void CWE690_NULL_Deref_From_Return__long_malloc_52b_badSink(long * data) CWE690_NULL_Deref_From_Return__long_malloc_52c_badSink ( data ); void CWE690_NULL_Deref_From_Return__long_malloc_52c_badSink(long * data) data [ 0 ] = 5L; printLongLine ( data [ 0 ] ); void printLongLine (long longNumber) printf ( "%ld\n" , longNumber ); free ( data ); 