static void goodG2B() char * data ; data = new char [ 100 ]; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; goodG2BSink ( & data ); void goodG2BSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; SNPRINTF ( dest , strlen ( data ) , "%s" , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 