static void goodG2B() wchar_t * data ; data = NULL; wchar_t * dataBuffer = new wchar_t [ 100 ] ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer; goodG2BSink_b ( data ); void goodG2BSink_b(wchar_t * data) goodG2BSink_c ( data ); void goodG2BSink_c(wchar_t * data) wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' memmove ( dest , data , 100 * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 