static void goodB2G2() wchar_t * data ; data = NULL; data = ( wchar_t * ) calloc ( 20 , sizeof ( wchar_t ) ); CWE690_NULL_Deref_From_Return__wchar_t_calloc_22_goodB2G2Sink ( data ); void CWE690_NULL_Deref_From_Return__wchar_t_calloc_22_goodB2G2Sink(wchar_t * data) if ( CWE690_NULL_Deref_From_Return__wchar_t_calloc_22_goodB2G2Global )  if ( data != NULL )  wcscpy ( data , L "Initialize" ) free ( data ); 