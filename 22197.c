void CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_42_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; data = badSource ( data ); static char * badSource(char * data) size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); return data ; 