static void goodG2B() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; while ( 1 )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; strcpy ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 