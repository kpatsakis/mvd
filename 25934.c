void bad() wchar_t * data ; data = new wchar_t [ 100 ]; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_wchar_t_memmove_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_wchar_t_memmove_82_bad baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_wchar_t_memmove_82_bad::action(wchar_t * data) wchar_t dest [ 50 ] = L "" memmove ( dest , data , wcslen ( data ) * sizeof ( wchar_t ) ); 