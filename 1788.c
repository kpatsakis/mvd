void CWE475_Undefined_Behavior_for_Input_to_API__wchar_t_03_bad() if ( 5 == 5 )  wchar_t dataBuffer [ 100 ] = L "" wchar_t * data = dataBuffer ; wcscpy ( data , L "abcdefghijklmnopqrstuvwxyz" ) memcpy ( data + 6 , data + 4 , 10 * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 