void CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_memmove_34_bad() wchar_t * data ; CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_memmove_34_unionType myUnion ; wchar_t dataBadBuffer [ 50 ] ; data = dataBadBuffer; data [ 0 ] = L '\0' myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' memmove ( data , source , 100 * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 