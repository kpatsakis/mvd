static void goodG2B() wchar_t * data ; map < int , wchar_t * > dataMap ; data = new wchar_t [ 100 ]; wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodG2BSink ( dataMap ); void goodG2BSink(map<int, wchar_t *> dataMap) wchar_t * data = dataMap [ 2 ] ; wchar_t dest [ 50 ] = L "" wcsncat ( dest , data , wcslen ( data ) ); 