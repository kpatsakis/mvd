CWE127_Buffer_Underread__new_char_loop_83_goodG2B::~CWE127_Buffer_Underread__new_char_loop_83_goodG2B() char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; dest [ i ] = data [ i ]; dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 