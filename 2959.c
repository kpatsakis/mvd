static void goodB2G2() size_t data ; data = 0; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = new wchar_t [ data ]; wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] myString 