void CWE78_OS_Command_Injection__char_file_w32_spawnv_61_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; data = CWE78_OS_Command_Injection__char_file_w32_spawnv_61b_badSource ( data ); char * CWE78_OS_Command_Injection__char_file_w32_spawnv_61b_badSource(char * data) size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; fclose ( pFile ); return data ; 