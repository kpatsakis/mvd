static void goodG2B() char * data ; CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_34_unionType myUnion ; char dataGoodBuffer [ 10 + 1 ] ; data = dataGoodBuffer; data [ 0 ] = '\0'; myUnion . unionFirst = data; char * data = myUnion . unionSecond ; char source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 