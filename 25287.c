static void goodB2G() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); free ( data ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodB2GSink ( dataMap ); void goodB2GSink(map<int, char *> dataMap) char * data = dataMap [ 2 ] ; 