void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_22_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen - 1 ] = L '\0' data [ dataLen ] = L '\0' CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_22_badSink ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_22_badSink(wchar_t * data) if ( CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_22_badGlobal )  free ( data ); 