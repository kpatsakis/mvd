static void goodG2B() int data ; data = - 1; CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_84_goodG2B * goodG2BObject = new CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_84_goodG2B ( data ) ; CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_84_goodG2B::CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_84_goodG2B(int dataCopy) data = dataCopy; data = 100 - 1; delete goodG2BObject CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_84_goodG2B::~CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_84_goodG2B() char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memcpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 