static void goodG2B1() int data ; data = - 1; data = goodG2B1Source ( data ); static int goodG2B1Source(int data) if ( goodG2B1Static )  data = 100 - 1; return data ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 