void bad() wchar_t * data ; wchar_t dataBadBuffer [ 50 ] ; data = dataBadBuffer; data [ 0 ] = L CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cpy_82_base * baseObject = new CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cpy_82_bad baseObject -> action ( data ); void CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cpy_82_bad::action(wchar_t * data) wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 