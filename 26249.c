static void goodG2B() char * data ; char * dataArray [ 5 ] ; data = NULL; data = new char [ 100 ]; data [ 0 ] = '\0'; dataArray [ 2 ] = data; goodG2BSink ( dataArray ); void goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 