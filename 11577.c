static void goodG2B() char * data ; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_34_unionType myUnion ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; myUnion . unionFirst = data; char * data = myUnion . unionSecond ; size_t i , dataLen ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) 