static void goodB2G() char * data ; data = NULL; CWE401_Memory_Leak__char_calloc_84_goodB2G * goodB2GObject = new CWE401_Memory_Leak__char_calloc_84_goodB2G ( data ) ; CWE401_Memory_Leak__char_calloc_84_goodB2G::CWE401_Memory_Leak__char_calloc_84_goodB2G(char * dataCopy) data = dataCopy; data = ( char * ) calloc ( 100 , sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 