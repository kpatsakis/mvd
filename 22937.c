static void goodG2B2() int * data ; int dataGoodBuffer [ 100 ] ; if ( globalFive == 5 )  data = dataGoodBuffer; int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 