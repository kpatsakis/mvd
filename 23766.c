void CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cat_02_bad() wchar_t * data ; wchar_t dataBadBuffer [ 50 ] ; if ( 1 )  data = dataBadBuffer; data [ 0 ] = L '\0' wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscat ( data , source ); 