static void goodG2B2() char * data ; data = new char [ 100 ]; if ( STATIC_CONST_TRUE )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; memmove ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 