static void goodB2G() size_t data ; size_t & dataRef = data ; data = 0; data = rand ( ); size_t data = dataRef ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 