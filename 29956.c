static void goodB2G() twoIntsStruct * data ; twoIntsStruct * dataArray [ 5 ] ; data = NULL; data = ( twoIntsStruct * ) realloc ( data , 100 * sizeof ( twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; dataArray [ 2 ] = data; CWE401_Memory_Leak__twoIntsStruct_realloc_66b_goodB2GSink ( dataArray ); void CWE401_Memory_Leak__twoIntsStruct_realloc_66b_goodB2GSink(twoIntsStruct * dataArray[]) twoIntsStruct * data = dataArray [ 2 ] ; free ( data ); 