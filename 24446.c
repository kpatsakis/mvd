void bad() wchar_t * data ; wchar_t dataBadBuffer [ 10 ] ; data = dataBadBuffer; data [ 0 ] = L CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_loop_82_base * baseObject = new CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_loop_82_bad baseObject -> action ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_loop_82_bad::action(wchar_t * data) wchar_t source [ 10 + 1 ] = SRC_STRING ; size_t i , sourceLen ; sourceLen = wcslen ( source ); for (i = 0; i < sourceLen + 1; i++) 