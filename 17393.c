void bad() int * data ; map < int , int * > dataMap ; data = NULL; data = ( int * ) malloc ( 10 ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, int *> dataMap) int * data = dataMap [ 2 ] ; int source [ 10 ] = { 0 } ; memmove ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 