void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_32_bad() char * data ; char * * dataPtr1 = & data ; char * * dataPtr2 = & data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; char * data = * dataPtr1 ; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; char * data = * dataPtr2 ; char dest [ 50 ] = "" ; strcpy ( dest , data ); 