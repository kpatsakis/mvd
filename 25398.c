static void goodG2B() char * data ; char * dataArray [ 5 ] ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "15" ); dataArray [ 2 ] = data; CWE606_Unchecked_Loop_Condition__char_listen_socket_66b_goodG2BSink ( dataArray ); void CWE606_Unchecked_Loop_Condition__char_listen_socket_66b_goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; if ( sscanf ( data , "%d" , & n ) == 1 )  