void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_67_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); myStruct . structFirst = data; CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_67b_badSink ( myStruct ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_67b_badSink(CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_67_structType myStruct) size_t data = myStruct . structFirst ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( myString ); 