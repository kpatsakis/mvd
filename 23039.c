static void goodG2B() TwoIntsClass * data ; data = ( TwoIntsClass * ) malloc ( 100 * sizeof ( TwoIntsClass ) ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodG2BSink ( dataMap ); void goodG2BSink(map<int, TwoIntsClass *> dataMap) TwoIntsClass * data = dataMap [ 2 ] ; free ( data ); 