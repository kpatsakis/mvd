void CWE127_Buffer_Underread__char_declare_cpy_53_bad() char dataBuffer [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; CWE127_Buffer_Underread__char_declare_cpy_53b_badSink ( data ); void CWE127_Buffer_Underread__char_declare_cpy_53b_badSink(char * data) CWE127_Buffer_Underread__char_declare_cpy_53c_badSink ( data ); void CWE127_Buffer_Underread__char_declare_cpy_53c_badSink(char * data) CWE127_Buffer_Underread__char_declare_cpy_53d_badSink ( data ); void CWE127_Buffer_Underread__char_declare_cpy_53d_badSink(char * data) strcpy ( dest , data ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 