void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_21_bad() char * data ; data = NULL; data = badSource ( data ); static char * badSource(char * data) if ( badStatic )  data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; return data ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcat ( data , source ); free ( data ); 