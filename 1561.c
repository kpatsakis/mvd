void CWE665_Improper_Initialization__wchar_t_cat_54b_badSink(wchar_t * data) CWE665_Improper_Initialization__wchar_t_cat_54c_badSink ( data ); void CWE665_Improper_Initialization__wchar_t_cat_54c_badSink(wchar_t * data) CWE665_Improper_Initialization__wchar_t_cat_54d_badSink ( data ); void CWE665_Improper_Initialization__wchar_t_cat_54d_badSink(wchar_t * data) CWE665_Improper_Initialization__wchar_t_cat_54e_badSink ( data ); void CWE665_Improper_Initialization__wchar_t_cat_54e_badSink(wchar_t * data) wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscat ( data , source ); 