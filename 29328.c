static void goodG2B1() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); if ( globalFive != 5 )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; strcpy ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 