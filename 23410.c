static void good1() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; wchar_t * password = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; password [ 0 ] = L '\0' if ( fgetws ( password , 100 , stdin ) == NULL )  password [ 0 ] = L '\0' passwordLen = wcslen ( password ); if ( passwordLen > 0 )  password [ passwordLen - 1 ] = L '\0' passwordLen = wcslen ( password ); SecureZeroMemory ( password , passwordLen * sizeof ( wchar_t ) ); if ( passwordLen > 0 )  SecureZeroMemory ( password , passwordLen * sizeof ( wchar_t ) ); 