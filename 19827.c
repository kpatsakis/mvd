static void good1() if ( globalFalse )  int * data ; data = ( int * ) malloc ( sizeof ( int ) ); * data = 5; * pointer = data; int * data = * pointer ; printIntLine ( * data ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( pointer ); 