void CWE127_Buffer_Underread__wchar_t_alloca_ncpy_68b_badSink() wchar_t * data = CWE127_Buffer_Underread__wchar_t_alloca_ncpy_68_badData ; wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' wcsncpy ( dest , data , wcslen ( dest ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 