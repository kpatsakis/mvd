static void goodG2B2() wchar_t * data ; wchar_t dataGoodBuffer [ 10 + 1 ] ; if ( GLOBAL_CONST_FIVE == 5 )  data = dataGoodBuffer; data [ 0 ] = L '\0' wchar_t source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 