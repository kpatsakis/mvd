static void goodB2G() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = wcslen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == L '\n' ) CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_63b_goodB2GSink ( & data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_63b_goodB2GSink(wchar_t * * dataPtr) wchar_t * data = * dataPtr ; for (i=0; i < wcslen(data); i++) if ( data [ i ] == SEARCH_CHAR )  free ( data ); 