static void goodG2B() short data ; CWE194_Unexpected_Sign_Extension__fgets_memcpy_67_structType myStruct ; data = 0; data = 100 - 1; myStruct . structFirst = data; CWE194_Unexpected_Sign_Extension__fgets_memcpy_67b_goodG2BSink ( myStruct ); void CWE194_Unexpected_Sign_Extension__fgets_memcpy_67b_goodG2BSink(CWE194_Unexpected_Sign_Extension__fgets_memcpy_67_structType myStruct) short data = myStruct . structFirst ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memcpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 