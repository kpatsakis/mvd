static void goodB2G() int i , k ; char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; for(i = 0; i < 1; i++) size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; data [ dataLen ] = '\0'; goodB2GVaSinkG ( data , data ); static void goodB2GVaSinkG(char * data, ...) va_start ( args , data ); 