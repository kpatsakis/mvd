static void goodB2G() size_t data ; data = 0; while ( 1 )  data = rand ( ); while ( 1 )  wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( myString ); 