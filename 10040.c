static void goodG2B() int data ; data = - 1; data = 100 - 1; CWE195_Signed_to_Unsigned_Conversion_Error__connect_socket_malloc_63b_goodG2BSink ( & data ); void CWE195_Signed_to_Unsigned_Conversion_Error__connect_socket_malloc_63b_goodG2BSink(int * dataPtr) int data = * dataPtr ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; printLine ( dataBuffer ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dataBuffer ); 