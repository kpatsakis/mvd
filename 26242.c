static void goodG2B() wchar_t * data ; data = ( wchar_t * ) malloc ( ( 10 + 1 ) * sizeof ( wchar_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_53b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_53b_goodG2BSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_53c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_53c_goodG2BSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_53d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_53d_goodG2BSink(wchar_t * data) wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 