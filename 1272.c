void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_08_bad() int * data ; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = ( int * ) malloc ( 50 * sizeof ( int ) ); memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 