void CWE127_Buffer_Underread__CWE839_fgets_52_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); CWE127_Buffer_Underread__CWE839_fgets_52b_badSink ( data ); void CWE127_Buffer_Underread__CWE839_fgets_52b_badSink(int data) CWE127_Buffer_Underread__CWE839_fgets_52c_badSink ( data ); void CWE127_Buffer_Underread__CWE839_fgets_52c_badSink(int data) if ( data < 10 )  printIntLine ( buffer [ data ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 