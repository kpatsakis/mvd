static void goodG2B() char * data ; data = NULL; char * dataBuffer = new char [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; goodG2BSink_b ( data ); void goodG2BSink_b(char * data) goodG2BSink_c ( data ); void goodG2BSink_c(char * data) goodG2BSink_d ( data ); void goodG2BSink_d(char * data) char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memmove ( dest , data , 100 * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 