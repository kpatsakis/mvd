static void goodG2B() int data ; data = - 1; CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_84_goodG2B * goodG2BObject = new CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_84_goodG2B ( data ) ; CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_84_goodG2B::CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_84_goodG2B(int dataCopy) data = dataCopy; data = 100 - 1; delete goodG2BObject CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_84_goodG2B::~CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_84_goodG2B() if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 