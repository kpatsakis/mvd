static void goodG2B() void * data ; void * dataArray [ 5 ] ; data = NULL; data = ( void * ) CHAR_STRING; dataArray [ 2 ] = data; CWE121_Stack_Based_Buffer_Overflow__CWE135_66b_goodG2BSink ( dataArray ); void CWE121_Stack_Based_Buffer_Overflow__CWE135_66b_goodG2BSink(void * dataArray[]) void * data = dataArray [ 2 ] ; size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); printLine ( ( char * ) dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dest ); 