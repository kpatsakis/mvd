void CWE126_Buffer_Overread__malloc_char_loop_67_bad() char * data ; data = NULL; data = ( char * ) malloc ( 50 * sizeof ( char ) ); memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; myStruct . structFirst = data; CWE126_Buffer_Overread__malloc_char_loop_67b_badSink ( myStruct ); void CWE126_Buffer_Overread__malloc_char_loop_67b_badSink(CWE126_Buffer_Overread__malloc_char_loop_67_structType myStruct) char * data = myStruct . structFirst ; dest [ i ] = data [ i ]; dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 