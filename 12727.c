void CWE590_Free_Memory_Not_on_Heap__free_wchar_t_declare_52_bad() wchar_t * data ; data = NULL; wchar_t dataBuffer [ 100 ] ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_wchar_t_declare_52b_badSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_wchar_t_declare_52b_badSink(wchar_t * data) CWE590_Free_Memory_Not_on_Heap__free_wchar_t_declare_52c_badSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_wchar_t_declare_52c_badSink(wchar_t * data) free ( data ); 