void CWE127_Buffer_Underread__malloc_wchar_t_memmove_53_bad() wchar_t * data ; data = NULL; wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer - 8; CWE127_Buffer_Underread__malloc_wchar_t_memmove_53b_badSink ( data ); void CWE127_Buffer_Underread__malloc_wchar_t_memmove_53b_badSink(wchar_t * data) CWE127_Buffer_Underread__malloc_wchar_t_memmove_53c_badSink ( data ); void CWE127_Buffer_Underread__malloc_wchar_t_memmove_53c_badSink(wchar_t * data) CWE127_Buffer_Underread__malloc_wchar_t_memmove_53d_badSink ( data ); void CWE127_Buffer_Underread__malloc_wchar_t_memmove_53d_badSink(wchar_t * data) wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' memmove ( dest , data , 100 * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 