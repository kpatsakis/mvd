void CWE114_Process_Control__w32_wchar_t_environment_53_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE114_Process_Control__w32_wchar_t_environment_53b_badSink ( data ); void CWE114_Process_Control__w32_wchar_t_environment_53b_badSink(wchar_t * data) CWE114_Process_Control__w32_wchar_t_environment_53c_badSink ( data ); void CWE114_Process_Control__w32_wchar_t_environment_53c_badSink(wchar_t * data) CWE114_Process_Control__w32_wchar_t_environment_53d_badSink ( data ); void CWE114_Process_Control__w32_wchar_t_environment_53d_badSink(wchar_t * data) hModule = LoadLibraryW ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 