static void goodB2G() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wcscpy ( data , BAD_SOURCE_FIXED_STRING ); CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_63b_goodB2GSink ( & data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_63b_goodB2GSink(wchar_t * * dataPtr) wchar_t * data = * dataPtr ; for (i=0; i < wcslen(data); i++) if ( data [ i ] == SEARCH_CHAR )  free ( data ); 