static void goodB2G() size_t data ; data = 0; CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_64b_goodB2GSink ( & data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_64b_goodB2GSink(void * dataVoidPtr) size_t * dataPtr = ( size_t * ) dataVoidPtr ; size_t data = ( * dataPtr ) ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( myString ); 