static void goodG2B1() wchar_t * data ; data = NULL; data = goodG2B1Source ( data ); static wchar_t * goodG2B1Source(wchar_t * data) if ( goodG2B1Static )  data = ( wchar_t * ) malloc ( ( 10 + 1 ) * sizeof ( wchar_t ) ); return data ; wchar_t source [ 10 + 1 ] = SRC_STRING ; wcsncpy ( data , source , wcslen ( source ) + 1 ); free ( data ); 