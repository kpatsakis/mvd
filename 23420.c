static void goodG2B() char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; CWE124_Buffer_Underwrite__char_alloca_memcpy_54b_goodG2BSink ( data ); void CWE124_Buffer_Underwrite__char_alloca_memcpy_54b_goodG2BSink(char * data) CWE124_Buffer_Underwrite__char_alloca_memcpy_54c_goodG2BSink ( data ); void CWE124_Buffer_Underwrite__char_alloca_memcpy_54c_goodG2BSink(char * data) CWE124_Buffer_Underwrite__char_alloca_memcpy_54d_goodG2BSink ( data ); void CWE124_Buffer_Underwrite__char_alloca_memcpy_54d_goodG2BSink(char * data) CWE124_Buffer_Underwrite__char_alloca_memcpy_54e_goodG2BSink ( data ); void CWE124_Buffer_Underwrite__char_alloca_memcpy_54e_goodG2BSink(char * data) memcpy ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 