void bad() int data ; data = - 1; CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memmove_84_bad * badObject = new CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memmove_84_bad ( data ) ; CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memmove_84_bad::CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memmove_84_bad(int dataCopy) data = dataCopy; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); printLine ( "fgets() failed." ); delete badObject CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memmove_84_bad::~CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memmove_84_bad() char source [ 100 ] ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memmove ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 