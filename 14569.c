static void goodB2G() wchar_t * data ; map < int , wchar_t * > dataMap ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodB2GSink ( dataMap ); void goodB2GSink(map<int, wchar_t *> dataMap) wchar_t * data = dataMap [ 2 ] ; size_t i ; for (i=0; i < wcslen(data); i++) if ( data [ i ] == SEARCH_CHAR )  