static void goodG2B1() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; if ( 0 )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; char dest [ 50 ] = "" ; memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 