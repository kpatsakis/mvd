void CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_53_bad() wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer - 8; CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_53b_badSink ( data ); void CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_53b_badSink(wchar_t * data) CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_53c_badSink ( data ); void CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_53c_badSink(wchar_t * data) CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_53d_badSink ( data ); void CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_53d_badSink(wchar_t * data) wcsncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = L '\0' printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 