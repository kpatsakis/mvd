void CWE134_Uncontrolled_Format_String__char_file_vfprintf_53_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; CWE134_Uncontrolled_Format_String__char_file_vfprintf_53b_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_vfprintf_53b_badSink(char * data) CWE134_Uncontrolled_Format_String__char_file_vfprintf_53c_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_vfprintf_53c_badSink(char * data) CWE134_Uncontrolled_Format_String__char_file_vfprintf_53d_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_vfprintf_53d_badSink(char * data) badVaSink ( data , data ); static void badVaSink(char * data, ...) va_start ( args , data ); vfprintf ( stdout , data , args ); 