void CWE114_Process_Control__w32_wchar_t_console_63_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen - 1 ] = L '\0' data [ dataLen ] = L '\0' CWE114_Process_Control__w32_wchar_t_console_63b_badSink ( & data ); void CWE114_Process_Control__w32_wchar_t_console_63b_badSink(wchar_t * * dataPtr) wchar_t * data = * dataPtr ; HMODULE hModule ; hModule = LoadLibraryW ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 