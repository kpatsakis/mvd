void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; if ( globalTrue )  size_t dataLen = strlen ( data ) ; if ( FILENAME_MAX - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 