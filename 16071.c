static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "fixedstringtest" ); CWE134_Uncontrolled_Format_String__char_listen_socket_w32_vsnprintf_63b_goodG2BSink ( & data ); void CWE134_Uncontrolled_Format_String__char_listen_socket_w32_vsnprintf_63b_goodG2BSink(char * * dataPtr) char * data = * dataPtr ; goodG2BVaSink ( data , data ); static void goodG2BVaSink(char * data, ...) char dest [ 100 ] = "" ; va_list args ; vsnprintf ( dest , 100 - 1 , data , args ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 