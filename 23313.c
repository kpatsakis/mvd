void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_53_bad() wchar_t * data ; data = NULL; data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_53b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_53b_badSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_53c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_53c_badSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_53d_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_53d_badSink(wchar_t * data) free ( data ); 