static void goodG2B() int * data ; data = ( int * ) malloc ( 100 * sizeof ( int ) ); myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_67b_goodG2BSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_67b_goodG2BSink(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_67_structType myStruct) int * data = myStruct . structFirst ; memcpy ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 