static void goodB2G() char * data ; char * dataArray [ 5 ] ; data = NULL; data = NULL; data = ( char * ) realloc ( data , 100 * sizeof ( char ) ); dataArray [ 2 ] = data; goodB2GSink ( dataArray ); void goodB2GSink(char * dataArray[]) char * data = dataArray [ 2 ] ; free ( data ); 