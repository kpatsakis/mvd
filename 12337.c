void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_snprintf_03_bad() wchar_t * data ; if ( 5 == 5 )  data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); SNPRINTF ( data , 100 , L "%s" , source ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 