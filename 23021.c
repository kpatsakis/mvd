static void goodB2G2() size_t data ; data = rand ( ); goodB2G2Sink ( data ); void goodB2G2Sink(size_t data) if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = new wchar_t [ data ]; wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] myString 