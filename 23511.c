static void goodG2B() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_snprintf_64b_goodG2BSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_snprintf_64b_goodG2BSink(void * dataVoidPtr) wchar_t * * dataPtr = ( wchar_t * * ) dataVoidPtr ; wchar_t * data = ( * dataPtr ) ; printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 