static void goodG2B() char * data ; data = NULL; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE126_Buffer_Overread__malloc_char_memmove_82_base * baseObject = new CWE126_Buffer_Overread__malloc_char_memmove_82_goodG2B baseObject -> action ( data ); void CWE126_Buffer_Overread__malloc_char_memmove_82_goodG2B::action(char * data) free ( data ); 