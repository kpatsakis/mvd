void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncat_51_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncat_51b_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncat_51b_badSink(char * data) strncat ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 