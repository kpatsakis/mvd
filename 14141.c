void CWE124_Buffer_Underwrite__malloc_wchar_t_memmove_68b_badSink() wchar_t * data = CWE124_Buffer_Underwrite__malloc_wchar_t_memmove_68_badData ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' memmove ( data , source , 100 * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 