void CWE78_OS_Command_Injection__char_environment_popen_06_bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; if ( STATIC_CONST_FIVE == 5 )  size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 100 - dataLen - 1 ); pipe = POPEN ( data , "wb" ); if ( pipe != NULL )  PCLOSE ( pipe ); 