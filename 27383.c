static void goodG2B() int data ; data = - 1; data = 100 - 1; CWE195_Signed_to_Unsigned_Conversion_Error__fgets_malloc_53b_goodG2BSink ( data ); void CWE195_Signed_to_Unsigned_Conversion_Error__fgets_malloc_53b_goodG2BSink(int data) CWE195_Signed_to_Unsigned_Conversion_Error__fgets_malloc_53c_goodG2BSink ( data ); void CWE195_Signed_to_Unsigned_Conversion_Error__fgets_malloc_53c_goodG2BSink(int data) CWE195_Signed_to_Unsigned_Conversion_Error__fgets_malloc_53d_goodG2BSink ( data ); void CWE195_Signed_to_Unsigned_Conversion_Error__fgets_malloc_53d_goodG2BSink(int data) if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 