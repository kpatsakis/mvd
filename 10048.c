void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; CWE36_Absolute_Path_Traversal__char_console_open_84_bad * badObject = new CWE36_Absolute_Path_Traversal__char_console_open_84_bad ( data ) ; CWE36_Absolute_Path_Traversal__char_console_open_84_bad::CWE36_Absolute_Path_Traversal__char_console_open_84_bad(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; if ( FILENAME_MAX - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; data [ dataLen ] = '\0'; 