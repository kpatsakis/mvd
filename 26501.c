void CWE194_Unexpected_Sign_Extension__fgets_malloc_14_bad() short data ; data = 0; if ( globalFive == 5 )  char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = ( short ) atoi ( inputBuffer ); if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 