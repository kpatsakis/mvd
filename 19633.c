static void goodG2B() wchar_t * data ; data = NULL; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' CWE126_Buffer_Overread__malloc_wchar_t_memmove_64b_goodG2BSink ( & data ); void CWE126_Buffer_Overread__malloc_wchar_t_memmove_64b_goodG2BSink(void * dataVoidPtr) wchar_t * * dataPtr = ( wchar_t * * ) dataVoidPtr ; wchar_t * data = ( * dataPtr ) ; free ( data ); 