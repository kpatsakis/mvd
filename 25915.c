void CWE78_OS_Command_Injection__char_console_popen_22_bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; data = CWE78_OS_Command_Injection__char_console_popen_22_badSource ( data ); char * CWE78_OS_Command_Injection__char_console_popen_22_badSource(char * data) if ( CWE78_OS_Command_Injection__char_console_popen_22_badGlobal )  size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; 