void CWE126_Buffer_Overread__CWE170_char_loop_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; char src [ 150 ] , dest [ 100 ] ; memset ( src , 'A' , 149 ); src [ 149 ] = '\0'; char src [ 150 ] , dest [ 100 ] ; memset ( src , 'A' , 149 ); src [ 149 ] = '\0'; dest [ i ] = src [ i ]; dest [ 99 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 