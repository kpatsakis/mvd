static void goodG2B() char * data ; char * dataGoodBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataGoodBuffer; data [ 0 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_51b_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_51b_goodG2BSink(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 