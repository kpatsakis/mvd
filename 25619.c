static void goodB2G() int64_t * data ; data = ( int64_t * ) calloc ( 100 , sizeof ( int64_t ) ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodB2GSink ( dataMap ); void goodB2GSink(map<int, int64_t *> dataMap) int64_t * data = dataMap [ 2 ] ; free ( data ); 