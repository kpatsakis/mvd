static void goodB2G2() struct _twoIntsStruct * data ; data = NULL; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = ( struct _twoIntsStruct * ) realloc ( data , 100 * sizeof ( struct _twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; free ( data ); 