void CWE127_Buffer_Underread__char_declare_cpy_54b_goodG2BSink(char * data) CWE127_Buffer_Underread__char_declare_cpy_54c_goodG2BSink ( data ); void CWE127_Buffer_Underread__char_declare_cpy_54c_goodG2BSink(char * data) CWE127_Buffer_Underread__char_declare_cpy_54d_goodG2BSink ( data ); void CWE127_Buffer_Underread__char_declare_cpy_54d_goodG2BSink(char * data) CWE127_Buffer_Underread__char_declare_cpy_54e_goodG2BSink ( data ); void CWE127_Buffer_Underread__char_declare_cpy_54e_goodG2BSink(char * data) char dest [ 100 * 2 ] ; memset ( dest , 'C' , 100 * 2 - 1 ); dest [ 100 * 2 - 1 ] = '\0'; strcpy ( dest , data ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 