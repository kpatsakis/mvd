static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; goodB2GSource ( data ); static void goodB2GSource(char * &data) size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; fclose ( pFile ); 