static void goodB2G() TwoIntsClass * data ; structType myStruct ; data = NULL; data = NULL; data = ( TwoIntsClass * ) realloc ( data , 100 * sizeof ( TwoIntsClass ) ); myStruct . structFirst = data; goodB2GSink ( myStruct ); void goodB2GSink(structType myStruct) TwoIntsClass * data = myStruct . structFirst ; free ( data ); 