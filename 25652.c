static void goodB2G() int64_t * data ; data = NULL; data = ( int64_t * ) calloc ( 100 , sizeof ( int64_t ) ); data [ 0 ] = 5L L CWE401_Memory_Leak__int64_t_calloc_53b_goodB2GSink ( data ); void CWE401_Memory_Leak__int64_t_calloc_53b_goodB2GSink(int64_t * data) CWE401_Memory_Leak__int64_t_calloc_53c_goodB2GSink ( data ); void CWE401_Memory_Leak__int64_t_calloc_53c_goodB2GSink(int64_t * data) CWE401_Memory_Leak__int64_t_calloc_53d_goodB2GSink ( data ); void CWE401_Memory_Leak__int64_t_calloc_53d_goodB2GSink(int64_t * data) free ( data ); 