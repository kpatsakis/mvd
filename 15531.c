void bad() size_t data ; unionType myUnion ; data = 0; data = rand ( ); myUnion . unionFirst = data; size_t data = myUnion . unionSecond ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = new char [ data ]; strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] myString 