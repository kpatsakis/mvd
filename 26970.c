static void goodB2G() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); CWE124_Buffer_Underwrite__CWE839_fgets_53b_goodB2GSink ( data ); void CWE124_Buffer_Underwrite__CWE839_fgets_53b_goodB2GSink(int data) CWE124_Buffer_Underwrite__CWE839_fgets_53c_goodB2GSink ( data ); void CWE124_Buffer_Underwrite__CWE839_fgets_53c_goodB2GSink(int data) CWE124_Buffer_Underwrite__CWE839_fgets_53d_goodB2GSink ( data ); void CWE124_Buffer_Underwrite__CWE839_fgets_53d_goodB2GSink(int data) if ( data >= 0 && data < ( 10 ) )  buffer [ data ] = 1; printIntLine ( buffer [ i ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 