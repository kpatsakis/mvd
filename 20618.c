void CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_34_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); char * dataCopy = data ; char * data = dataCopy ; badVaSink ( data , data ); static void badVaSink(char * data, ...) va_start ( args , data ); vsnprintf ( dest , 100 - 1 , data , args ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 