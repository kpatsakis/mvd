void bad() twoIntsStruct * data ; data = NULL; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_84_bad * badObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_84_bad ( data ) ; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_84_bad::CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_84_bad(twoIntsStruct * dataCopy) data = dataCopy; data = ( twoIntsStruct * ) malloc ( 50 * sizeof ( twoIntsStruct ) ); delete badObject CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_84_bad::~CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_84_bad() twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; memmove ( data , source , 100 * sizeof ( twoIntsStruct ) ); printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 