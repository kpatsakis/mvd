void CWE134_Uncontrolled_Format_String__wchar_t_environment_vprintf_67_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); myStruct . structFirst = data; CWE134_Uncontrolled_Format_String__wchar_t_environment_vprintf_67b_badSink ( myStruct ); void CWE134_Uncontrolled_Format_String__wchar_t_environment_vprintf_67b_badSink(CWE134_Uncontrolled_Format_String__wchar_t_environment_vprintf_67_structType myStruct) wchar_t * data = myStruct . structFirst ; badVaSink ( data , data ); static void badVaSink(wchar_t * data, ...) va_start ( args , data ); vwprintf ( data , args ); 