static void goodB2G() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); dataArray [ 2 ] = data; CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_66b_goodB2GSink ( dataArray ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_66b_goodB2GSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; for (i=0; i < wcslen(data); i++) if ( data [ i ] == SEARCH_CHAR )  free ( data ); 