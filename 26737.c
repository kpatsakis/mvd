void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_fixed_string_12_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; strcpy ( data , BAD_SOURCE_FIXED_STRING ); if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; for (; *data != '\0'; data++) if ( * data == SEARCH_CHAR )  free ( data ); 