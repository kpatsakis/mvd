void CWE606_Unchecked_Loop_Condition__char_file_17_bad() int i , j ; char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; for(i = 0; i < 1; i++) size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; if ( sscanf ( data , "%d" , & n ) == 1 )  