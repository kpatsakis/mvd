static void goodG2B() char * data ; data = NULL; CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_84_goodG2B * goodG2BObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_84_goodG2B ( data ) ; CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_84_goodG2B::CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_84_goodG2B(char * dataCopy) data = dataCopy; data = ( char * ) malloc ( ( 10 + 1 ) * sizeof ( char ) ); delete goodG2BObject CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_84_goodG2B::~CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_84_goodG2B() char source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 