void bad() char * data ; char * * dataPtr1 = & data ; data = new char [ 100 ]; char * data = * dataPtr1 ; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; * dataPtr1 = data; strcat ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 