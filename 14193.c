void CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_51_bad() int * data ; data = NULL; data = ( int * ) ALLOCA ( 10 ); CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_51b_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_51b_badSink(int * data) int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 