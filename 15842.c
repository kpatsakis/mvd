static void goodG2B() char * data ; data = NULL; char * dataBuffer = new char [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; goodG2BSink_b ( data ); void goodG2BSink_b(char * data) goodG2BSink_c ( data ); void goodG2BSink_c(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 