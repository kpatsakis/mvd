static void goodG2B1() wchar_t * data ; data = new wchar_t [ 100 ]; data = goodG2B1Source ( data ); wchar_t * goodG2B1Source(wchar_t * data) if ( goodG2B1Global )  wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' return data ; wchar_t dest [ 50 ] = L "" memmove ( dest , data , wcslen ( data ) * sizeof ( wchar_t ) ); 