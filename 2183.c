static void goodB2G2() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); size_t dataLen = wcslen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( wchar_t ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  replace = wcschr ( data , L '\r' ) if ( replace )  replace = wcschr ( data , L '\n' ) if ( replace )  goodB2G2Sink ( data ); static void goodB2G2Sink(wchar_t * data) for (i=0; i < wcslen(data); i++) if ( data [ i ] == SEARCH_CHAR )  free ( data ); 