static void goodG2B1() TwoIntsClass * data ; data = NULL; if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; data = new TwoIntsClass [ 100 ]; TwoIntsClass source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; memcpy ( data , source , 100 * sizeof ( TwoIntsClass ) ); printIntLine ( data [ 0 ] . intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 