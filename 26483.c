void CWE590_Free_Memory_Not_on_Heap__free_wchar_t_declare_53_bad() wchar_t * data ; data = NULL; wchar_t dataBuffer [ 100 ] ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_wchar_t_declare_53b_badSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_wchar_t_declare_53b_badSink(wchar_t * data) CWE590_Free_Memory_Not_on_Heap__free_wchar_t_declare_53c_badSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_wchar_t_declare_53c_badSink(wchar_t * data) CWE590_Free_Memory_Not_on_Heap__free_wchar_t_declare_53d_badSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_wchar_t_declare_53d_badSink(wchar_t * data) free ( data ); 