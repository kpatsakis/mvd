void CWE134_Uncontrolled_Format_String__char_file_vfprintf_67_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; myStruct . structFirst = data; CWE134_Uncontrolled_Format_String__char_file_vfprintf_67b_badSink ( myStruct ); void CWE134_Uncontrolled_Format_String__char_file_vfprintf_67b_badSink(CWE134_Uncontrolled_Format_String__char_file_vfprintf_67_structType myStruct) char * data = myStruct . structFirst ; badVaSink ( data , data ); static void badVaSink(char * data, ...) va_start ( args , data ); vfprintf ( stdout , data , args ); 