void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_52_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_52b_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_52b_badSink(char * data) CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_52c_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_52c_badSink(char * data) char dest [ 50 ] = "" ; strcat ( dest , data ); 