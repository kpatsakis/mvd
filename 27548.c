void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_22_bad() wchar_t * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_22_badSource ( data ); wchar_t * CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_22_badSource(wchar_t * data) if ( CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_22_badGlobal )  data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' return data ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscat ( data , source ); 