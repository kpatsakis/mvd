void bad() wchar_t * data ; map < int , wchar_t * > dataMap ; data = NULL; data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, wchar_t *> dataMap) wchar_t * data = dataMap [ 2 ] ; size_t i ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' for (i = 0; i < 100; i++) data [ i ] = source [ i ]; data [ 100 - 1 ] = L '\0' free ( data ); 