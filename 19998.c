static void goodG2B() wchar_t * data ; data = NULL; CWE126_Buffer_Overread__malloc_wchar_t_memcpy_84_goodG2B * goodG2BObject = new CWE126_Buffer_Overread__malloc_wchar_t_memcpy_84_goodG2B ( data ) ; CWE126_Buffer_Overread__malloc_wchar_t_memcpy_84_goodG2B::CWE126_Buffer_Overread__malloc_wchar_t_memcpy_84_goodG2B(wchar_t * dataCopy) data = dataCopy; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' delete goodG2BObject CWE126_Buffer_Overread__malloc_wchar_t_memcpy_84_goodG2B::~CWE126_Buffer_Overread__malloc_wchar_t_memcpy_84_goodG2B() wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' memcpy ( dest , data , wcslen ( dest ) * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 