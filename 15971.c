void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_04_bad() size_t data ; data = 0; if ( STATIC_CONST_TRUE )  char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); if ( STATIC_CONST_TRUE )  char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 