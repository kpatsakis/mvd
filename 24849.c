static void goodB2G1() size_t data ; data = 0; if ( GLOBAL_CONST_TRUE )  data = rand ( ); if ( GLOBAL_CONST_FALSE )  char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 