static void goodB2G() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) realloc ( data , 1 * sizeof ( twoIntsStruct ) ); CWE690_NULL_Deref_From_Return__struct_realloc_52b_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__struct_realloc_52b_goodB2GSink(twoIntsStruct * data) CWE690_NULL_Deref_From_Return__struct_realloc_52c_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__struct_realloc_52c_goodB2GSink(twoIntsStruct * data) if ( data != NULL )  data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 