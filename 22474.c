static void goodB2G() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_51b_goodB2GSink ( data ); void CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_51b_goodB2GSink(wchar_t * data) SNPRINTF ( dest , 100 - 1 , L "%s" , data ) 