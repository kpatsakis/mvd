static void goodG2B() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_54b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_54b_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_54c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_54c_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_54d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_54d_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_54e_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_54e_goodG2BSink(char * data) strcat ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 