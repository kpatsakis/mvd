static void goodG2B() char * data ; structType myStruct ; data = NULL; data = new char [ 100 ]; data [ 0 ] = '\0'; myStruct . structFirst = data; goodG2BSink ( myStruct ); void goodG2BSink(structType myStruct) char * data = myStruct . structFirst ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memmove ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 