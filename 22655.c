void CWE690_NULL_Deref_From_Return__char_calloc_51_bad() char * data ; data = ( char * ) calloc ( 20 , sizeof ( char ) ); CWE690_NULL_Deref_From_Return__char_calloc_51b_badSink ( data ); void CWE690_NULL_Deref_From_Return__char_calloc_51b_badSink(char * data) strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 