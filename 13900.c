static void goodG2B() char * data ; char * * dataPtr2 = & data ; data = NULL; data = new char [ 10 + 1 ]; char * data = * dataPtr2 ; char source [ 10 + 1 ] = SRC_STRING ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 