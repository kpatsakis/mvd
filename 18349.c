static void goodG2B() vector < short > dataVector ; goodG2BSink ( dataVector ); void goodG2BSink(vector<short> dataVector) short data = dataVector [ 2 ] ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 