void bad() int * data ; data = NULL; data = badSource ( data ); static int * badSource(int * data) if ( badStatic )  data = new int [ 50 ]; return data ; int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 