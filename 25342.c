static void goodB2G() long * data ; data = NULL; data = goodB2GSource ( data ); static long * goodB2GSource(long * data) data = ( long * ) realloc ( data , 1 * sizeof ( long ) ); return data ; if ( data != NULL )  data [ 0 ] = 5L; free ( data ); 