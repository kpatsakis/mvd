void CWE127_Buffer_Underread__char_alloca_ncpy_15_bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; switch ( 6 )  data = dataBuffer - 8; char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; strncpy ( dest , data , strlen ( dest ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 