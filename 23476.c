void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cpy_08_bad() char * data ; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 