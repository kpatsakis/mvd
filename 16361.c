static void goodG2B() int * data ; int dataGoodBuffer [ 100 ] ; data = dataGoodBuffer; CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_82_base * baseObject = new CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_82_goodG2B baseObject -> action ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_82_goodG2B::action(int * data) int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 