static void good1() wchar_t * password = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; password [ 0 ] = L '\0' if ( fgetws ( password , 100 , stdin ) == NULL )  password [ 0 ] = L '\0' passwordLen = wcslen ( password ); if ( passwordLen > 0 )  password [ passwordLen - 1 ] = L '\0' password = realloc ( password , 200 * sizeof ( wchar_t ) ); wcscpy ( password , L "Nothing to see here" ) printWLine ( password ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( password ); 