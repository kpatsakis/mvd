void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memmove_12_bad() twoIntsStruct * data ; twoIntsStruct * dataBadBuffer = ( twoIntsStruct * ) ALLOCA ( 50 * sizeof ( twoIntsStruct ) ) ; twoIntsStruct * dataGoodBuffer = ( twoIntsStruct * ) ALLOCA ( 100 * sizeof ( twoIntsStruct ) ) ; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; data = dataBadBuffer; data = dataGoodBuffer; twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intOne = 0; memmove ( data , source , 100 * sizeof ( twoIntsStruct ) ); printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); 