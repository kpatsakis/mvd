static void good2() if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; char dest [ DEST_SIZE ] ; sprintf ( dest , "%s %s" , SOURCE_STRING , SOURCE_STRING ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 