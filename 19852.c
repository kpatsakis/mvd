void CWE78_OS_Command_Injection__char_console_w32_spawnlp_52_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; data [ dataLen ] = '\0'; CWE78_OS_Command_Injection__char_console_w32_spawnlp_52b_badSink ( data ); void CWE78_OS_Command_Injection__char_console_w32_spawnlp_52b_badSink(char * data) CWE78_OS_Command_Injection__char_console_w32_spawnlp_52c_badSink ( data ); void CWE78_OS_Command_Injection__char_console_w32_spawnlp_52c_badSink(char * data) 