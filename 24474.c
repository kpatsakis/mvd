static void goodB2G1() twoIntsStruct * data ; data = NULL; if ( 5 == 5 )  data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); size_t i ; for(i = 0; i < 100; i++) data [ i ] . intOne = 1; data [ i ] . intTwo = 2; free ( data ); 