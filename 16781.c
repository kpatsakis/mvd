void CWE401_Memory_Leak__wchar_t_calloc_22_bad() wchar_t * data ; data = ( wchar_t * ) calloc ( 100 , sizeof ( wchar_t ) ); wcscpy ( data , L "A String" ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) CWE401_Memory_Leak__wchar_t_calloc_22_badSink ( data ); void CWE401_Memory_Leak__wchar_t_calloc_22_badSink(wchar_t * data) 