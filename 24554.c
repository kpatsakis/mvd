void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_snprintf_66_bad() wchar_t * data ; wchar_t * dataArray [ 5 ] ; data = NULL; data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_snprintf_66b_badSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_snprintf_66b_badSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; free ( data ); 