static void goodG2B() wchar_t * data ; wchar_t * & dataRef = data ; wchar_t dataGoodBuffer [ 10 + 1 ] ; data = dataGoodBuffer; data [ 0 ] = L '\0' wchar_t * data = dataRef ; wchar_t source [ 10 + 1 ] = SRC_STRING ; wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 