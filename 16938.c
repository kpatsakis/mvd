void bad() wchar_t * data ; data = NULL; badSource ( data ); void badSource(wchar_t * &data) data = ( wchar_t * ) calloc ( 100 , sizeof ( wchar_t ) ); wcscpy ( data , L "A String" ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 