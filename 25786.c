void CWE134_Uncontrolled_Format_String__char_file_vprintf_16_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; while ( 1 )  size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; fclose ( pFile ); badVaSinkB ( data , data ); static void badVaSinkB(char * data, ...) va_start ( args , data ); vprintf ( data , args ); 