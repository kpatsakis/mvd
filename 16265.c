static void goodG2B() char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; dataArray [ 2 ] = data; CWE124_Buffer_Underwrite__char_alloca_memmove_66b_goodG2BSink ( dataArray ); void CWE124_Buffer_Underwrite__char_alloca_memmove_66b_goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; memmove ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 