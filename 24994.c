static void goodG2B() wchar_t * data ; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_snprintf_67_structType myStruct ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_snprintf_67b_goodG2BSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_snprintf_67b_goodG2BSink(CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_snprintf_67_structType myStruct) wchar_t * data = myStruct . structFirst ; free ( data ); 