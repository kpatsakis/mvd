void CWE134_Uncontrolled_Format_String__char_file_fprintf_06_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( STATIC_CONST_FIVE == 5 )  size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  fclose ( pFile ); 