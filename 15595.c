static void goodG2B() size_t data ; data = 0; data = 20; goodG2BSink ( data ); static void goodG2BSink(size_t data) if ( goodG2bStatic )  wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = new wchar_t [ data ]; wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] myString 