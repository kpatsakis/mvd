void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memcpy_42_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data = badSource ( data ); static char * badSource(char * data) memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; return data ; char dest [ 50 ] = "" ; memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 