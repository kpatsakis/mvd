void CWE690_NULL_Deref_From_Return__struct_calloc_51_bad() twoIntsStruct * data ; data = ( twoIntsStruct * ) calloc ( 1 , sizeof ( twoIntsStruct ) ); CWE690_NULL_Deref_From_Return__struct_calloc_51b_badSink ( data ); void CWE690_NULL_Deref_From_Return__struct_calloc_51b_badSink(twoIntsStruct * data) data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 