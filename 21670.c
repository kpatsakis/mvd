static void goodG2B1() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; char dest [ 50 ] = "" ; memmove ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 