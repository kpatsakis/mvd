static void goodG2B() int h ; char * data ; char * dataGoodBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; memset ( dataGoodBuffer , 'A' , 100 - 1 ); dataGoodBuffer [ 100 - 1 ] = '\0'; for(h = 0; h < 1; h++) data = dataGoodBuffer; char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memmove ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 