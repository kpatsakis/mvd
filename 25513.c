void bad() twoIntsStruct * data ; map < int , twoIntsStruct * > dataMap ; data = NULL; data = ( twoIntsStruct * ) malloc ( sizeof ( data ) ); data -> intOne = 1; data -> intTwo = 2; dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, twoIntsStruct *> dataMap) twoIntsStruct * data = dataMap [ 2 ] ; free ( data ); 