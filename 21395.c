static void goodG2B2() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; if ( GLOBAL_CONST_TRUE )  wcscpy ( data , L "fixedstringtest" ) if ( GLOBAL_CONST_TRUE )  goodG2B2VaSinkB ( data , data ); static void goodG2B2VaSinkB(wchar_t * data, ...) wchar_t dest [ 100 ] = L "" va_list args ; _vsnwprintf ( dest , 100 - 1 , data , args ); 