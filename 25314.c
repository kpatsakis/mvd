void CWE127_Buffer_Underread__malloc_wchar_t_loop_34_bad() wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer - 8; myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; dest [ i ] = data [ i ]; printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 