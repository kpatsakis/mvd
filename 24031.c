static void goodG2B() char dataGoodBuffer [ 100 ] ; memset ( dataGoodBuffer , 'A' , 100 - 1 ); dataGoodBuffer [ 100 - 1 ] = '\0'; data = dataGoodBuffer; CWE126_Buffer_Overread__char_declare_memmove_41_goodG2BSink ( data ); void CWE126_Buffer_Overread__char_declare_memmove_41_goodG2BSink(char * data) memmove ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 