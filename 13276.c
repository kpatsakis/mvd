void bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; badSource ( data ); static void badSource(char * &data) size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; 