void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_64_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_64b_badSink ( & data ); void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_64b_badSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; char dest [ 50 ] = "" ; strcpy ( dest , data ); 