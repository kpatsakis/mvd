void bad() int * data ; data = NULL; data = new int [ 50 ]; badSink_b ( data ); void badSink_b(int * data) badSink_c ( data ); void badSink_c(int * data) int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 