void CWE690_NULL_Deref_From_Return__struct_malloc_67_bad() twoIntsStruct * data ; CWE690_NULL_Deref_From_Return__struct_malloc_67_structType myStruct ; data = NULL; data = ( twoIntsStruct * ) malloc ( 1 * sizeof ( twoIntsStruct ) ); myStruct . structFirst = data; CWE690_NULL_Deref_From_Return__struct_malloc_67b_badSink ( myStruct ); void CWE690_NULL_Deref_From_Return__struct_malloc_67b_badSink(CWE690_NULL_Deref_From_Return__struct_malloc_67_structType myStruct) twoIntsStruct * data = myStruct . structFirst ; data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 