static void goodG2B() int data ; data = - 1; data = CWE195_Signed_to_Unsigned_Conversion_Error__connect_socket_memcpy_61b_goodG2BSource ( data ); int CWE195_Signed_to_Unsigned_Conversion_Error__connect_socket_memcpy_61b_goodG2BSource(int data) data = 100 - 1; return data ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memcpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 