static void goodB2G1() int * data ; data = ( int * ) malloc ( 1 * sizeof ( int ) ); goodB2G1Sink ( data ); static void goodB2G1Sink(int * data) if ( data != NULL )  data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 