void CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_61_bad() int data ; data = - 1; data = CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_61b_badSource ( data ); int CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_61b_badSource(int data) char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); return data ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memcpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 