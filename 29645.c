void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncpy_05_bad() wchar_t * data ; if ( staticTrue )  data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); wcsncpy ( data , source , 100 - 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 