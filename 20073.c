void bad() int * data ; data = NULL; if ( GLOBAL_CONST_TRUE )  data = new int [ 50 ]; int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 