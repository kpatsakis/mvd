static void goodB2G() int * data ; data = ( int * ) malloc ( 1 * sizeof ( int ) ); int * dataCopy = data ; int * data = dataCopy ; if ( data != NULL )  data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 