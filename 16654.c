static void goodG2B() char * data ; char dataGoodBuffer [ 100 ] ; memset ( dataGoodBuffer , 'A' , 100 - 1 ); dataGoodBuffer [ 100 - 1 ] = '\0'; data = dataGoodBuffer; CWE126_Buffer_Overread__char_declare_memcpy_51b_goodG2BSink ( data ); void CWE126_Buffer_Overread__char_declare_memcpy_51b_goodG2BSink(char * data) char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memcpy ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 