static void goodB2G() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); baseObject -> action ( data ); void CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_82_goodB2G::action(wchar_t * data) goodB2GVaSink ( data , data ); static void goodB2GVaSink(wchar_t * data, ...) va_start ( args , data ); 