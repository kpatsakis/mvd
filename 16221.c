static void goodG2B() wchar_t * data ; data = NULL; data = new wchar_t [ 100 ]; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L CWE126_Buffer_Overread__new_wchar_t_memcpy_82_base * baseObject = new CWE126_Buffer_Overread__new_wchar_t_memcpy_82_goodG2B baseObject -> action ( data ); void CWE126_Buffer_Overread__new_wchar_t_memcpy_82_goodG2B::action(wchar_t * data) wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' memcpy ( dest , data , wcslen ( dest ) * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 