static void goodG2B() int h ; char * data ; data = NULL; for(h = 0; h < 1; h++) data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcpy ( data , source ); free ( data ); 