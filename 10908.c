static void goodG2B() wchar_t * data ; data = NULL; data = CWE124_Buffer_Underwrite__malloc_wchar_t_cpy_61b_goodG2BSource ( data ); wchar_t * CWE124_Buffer_Underwrite__malloc_wchar_t_cpy_61b_goodG2BSource(wchar_t * data) wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer; return data ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 