static void goodB2G() twoIntsStruct * data ; data = NULL; CWE401_Memory_Leak__twoIntsStruct_malloc_84_goodB2G * goodB2GObject = new CWE401_Memory_Leak__twoIntsStruct_malloc_84_goodB2G ( data ) ; CWE401_Memory_Leak__twoIntsStruct_malloc_84_goodB2G::CWE401_Memory_Leak__twoIntsStruct_malloc_84_goodB2G(twoIntsStruct * dataCopy) data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); 