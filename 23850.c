void CWE590_Free_Memory_Not_on_Heap__free_struct_static_64_bad() twoIntsStruct * data ; data = NULL; static twoIntsStruct dataBuffer [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] . intOne = 1; dataBuffer [ i ] . intTwo = 1; data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_struct_static_64b_badSink ( & data ); void CWE590_Free_Memory_Not_on_Heap__free_struct_static_64b_badSink(void * dataVoidPtr) twoIntsStruct * * dataPtr = ( twoIntsStruct * * ) dataVoidPtr ; twoIntsStruct * data = ( * dataPtr ) ; free ( data ); 