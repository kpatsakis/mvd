static void goodG2B() size_t data ; CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_34_unionType myUnion ; data = 0; data = 20; myUnion . unionFirst = data; size_t data = myUnion . unionSecond ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 