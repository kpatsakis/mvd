void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_66_bad() wchar_t * data ; wchar_t * dataArray [ 5 ] ; data = NULL; data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' dataArray [ 2 ] = data; CWE126_Buffer_Overread__malloc_wchar_t_memcpy_66b_badSink ( dataArray ); void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_66b_badSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; free ( data ); 