static void goodB2G() char * data ; char myString [ ] = "myString" ; data = strdup ( myString ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodB2GSink ( dataMap ); void goodB2GSink(map<int, char *> dataMap) char * data = dataMap [ 2 ] ; free ( data ); 