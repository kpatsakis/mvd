void bad() size_t data ; data = 0; badSink_b ( data ); void badSink_b(size_t data) badSink_c ( data ); void badSink_c(size_t data) char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = new char [ data ]; strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] myString 