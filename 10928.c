void CWE126_Buffer_Overread__CWE170_char_strncpy_15_bad() switch ( 6 )  char data [ 150 ] , dest [ 100 ] ; memset ( data , 'A' , 149 ); data [ 149 ] = '\0'; strncpy ( dest , data , 99 ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 