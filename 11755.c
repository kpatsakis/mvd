void CWE401_Memory_Leak__twoIntsStruct_malloc_54_bad() twoIntsStruct * data ; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); CWE401_Memory_Leak__twoIntsStruct_malloc_54b_badSink ( data ); void CWE401_Memory_Leak__twoIntsStruct_malloc_54b_badSink(twoIntsStruct * data) CWE401_Memory_Leak__twoIntsStruct_malloc_54c_badSink ( data ); void CWE401_Memory_Leak__twoIntsStruct_malloc_54c_badSink(twoIntsStruct * data) CWE401_Memory_Leak__twoIntsStruct_malloc_54d_badSink ( data ); void CWE401_Memory_Leak__twoIntsStruct_malloc_54d_badSink(twoIntsStruct * data) CWE401_Memory_Leak__twoIntsStruct_malloc_54e_badSink ( data ); void CWE401_Memory_Leak__twoIntsStruct_malloc_54e_badSink(twoIntsStruct * data) 