static void goodG2B1() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; data = CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cpy_22_goodG2B1Source ( data ); wchar_t * CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cpy_22_goodG2B1Source(wchar_t * data) if ( CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cpy_22_goodG2B1Global )  wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' return data ; wchar_t dest [ 50 ] = L "" wcscpy ( dest , data ); 