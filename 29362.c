void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_66_bad() wchar_t * data ; wchar_t * dataArray [ 5 ] ; data = NULL; data = ( wchar_t * ) malloc ( 10 * sizeof ( wchar_t ) ); dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_66b_badSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_66b_badSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; wchar_t source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); free ( data ); 