void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_67_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); myStruct . structFirst = data; CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_67b_badSink ( myStruct ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_67b_badSink(CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_67_structType myStruct) wchar_t * data = myStruct . structFirst ; if ( * data == SEARCH_CHAR )  free ( data ); 