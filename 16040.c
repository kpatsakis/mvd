void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_54b_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_54c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_54c_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_54d_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_54d_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_54e_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_54e_badSink(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncat ( data , source , 100 ); free ( data ); 