void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_snprintf_63_bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_snprintf_63b_badSink ( & data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_snprintf_63b_badSink(char * * dataPtr) char * data = * dataPtr ; char dest [ 50 ] = "" ; SNPRINTF ( dest , strlen ( data ) , "%s" , data ); 