void bad() char * data ; char dataBuffer [ 256 ] = "" ; data = dataBuffer; badSource ( data ); void badSource(char * &data) size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 256 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 256 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; fclose ( pFile ); 