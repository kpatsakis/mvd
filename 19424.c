static void goodG2B() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); dataArray [ 2 ] = data; CWE126_Buffer_Overread__malloc_wchar_t_memmove_66b_goodG2BSink ( dataArray ); void CWE126_Buffer_Overread__malloc_wchar_t_memmove_66b_goodG2BSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; memmove ( dest , data , wcslen ( dest ) * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 