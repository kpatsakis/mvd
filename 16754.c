void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; data = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_badSource ( data ); char * CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_badSource(char * data) if ( CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_badGlobal )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; return data ; char dest [ 50 ] = "" ; strcpy ( dest , data ); 