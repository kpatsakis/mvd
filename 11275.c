static void goodG2B() char * data ; CWE127_Buffer_Underread__malloc_char_memmove_67_structType myStruct ; data = NULL; char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; myStruct . structFirst = data; CWE127_Buffer_Underread__malloc_char_memmove_67b_goodG2BSink ( myStruct ); void CWE127_Buffer_Underread__malloc_char_memmove_67b_goodG2BSink(CWE127_Buffer_Underread__malloc_char_memmove_67_structType myStruct) char * data = myStruct . structFirst ; char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memmove ( dest , data , 100 * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 