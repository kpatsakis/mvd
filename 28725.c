void CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_07_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; if ( staticFive == 5 )  size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); badVaSinkB ( data , data ); static void badVaSinkB(wchar_t * data, ...) va_start ( args , data ); vfwprintf ( stdout , data , args ); 