void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_bad() char * data ; char dataBadBuffer [ 10 ] ; data = dataBadBuffer; data [ 0 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_badSink(char * data) char source [ 10 + 1 ] = SRC_STRING ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 