static void goodG2B() wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; baseObject -> action ( data ); void CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_82_goodG2B::action(wchar_t * data) wcsncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = L '\0' printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 