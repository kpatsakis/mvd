static void goodG2B2() wchar_t * data ; data = NULL; data = CWE126_Buffer_Overread__malloc_wchar_t_loop_22_goodG2B2Source ( data ); wchar_t * CWE126_Buffer_Overread__malloc_wchar_t_loop_22_goodG2B2Source(wchar_t * data) if ( CWE126_Buffer_Overread__malloc_wchar_t_loop_22_goodG2B2Global )  data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' return data ; free ( data ); 