void CWE134_Uncontrolled_Format_String__char_environment_fprintf_03_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( 5 == 5 )  size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); if ( 5 == 5 )  fprintf ( stdout , data ); 