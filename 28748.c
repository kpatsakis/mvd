void CWE401_Memory_Leak__char_calloc_54_bad() char * data ; data = ( char * ) calloc ( 100 , sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); CWE401_Memory_Leak__char_calloc_54b_badSink ( data ); void CWE401_Memory_Leak__char_calloc_54b_badSink(char * data) CWE401_Memory_Leak__char_calloc_54c_badSink ( data ); void CWE401_Memory_Leak__char_calloc_54c_badSink(char * data) CWE401_Memory_Leak__char_calloc_54d_badSink ( data ); void CWE401_Memory_Leak__char_calloc_54d_badSink(char * data) CWE401_Memory_Leak__char_calloc_54e_badSink ( data ); void CWE401_Memory_Leak__char_calloc_54e_badSink(char * data) 