static void goodG2B() int * data ; int * & dataRef = data ; data = NULL; data = new int [ 100 ]; int * data = dataRef ; int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 