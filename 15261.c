static void goodG2B() wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; CWE124_Buffer_Underwrite__malloc_wchar_t_memmove_54b_goodG2BSink ( data ); void CWE124_Buffer_Underwrite__malloc_wchar_t_memmove_54b_goodG2BSink(wchar_t * data) CWE124_Buffer_Underwrite__malloc_wchar_t_memmove_54c_goodG2BSink ( data ); void CWE124_Buffer_Underwrite__malloc_wchar_t_memmove_54c_goodG2BSink(wchar_t * data) CWE124_Buffer_Underwrite__malloc_wchar_t_memmove_54d_goodG2BSink ( data ); void CWE124_Buffer_Underwrite__malloc_wchar_t_memmove_54d_goodG2BSink(wchar_t * data) CWE124_Buffer_Underwrite__malloc_wchar_t_memmove_54e_goodG2BSink ( data ); void CWE124_Buffer_Underwrite__malloc_wchar_t_memmove_54e_goodG2BSink(wchar_t * data) memmove ( data , source , 100 * sizeof ( wchar_t ) ); data [ 100 - 1 ] = L '\0' printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 