void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_66_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); dataArray [ 2 ] = data; CWE126_Buffer_Overread__malloc_wchar_t_memcpy_66b_badSink ( dataArray ); void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_66b_badSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; memcpy ( dest , data , wcslen ( dest ) * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 