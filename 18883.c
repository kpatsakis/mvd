static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; myStruct . structFirst = data; CWE134_Uncontrolled_Format_String__char_listen_socket_fprintf_67b_goodB2GSink ( myStruct ); void CWE134_Uncontrolled_Format_String__char_listen_socket_fprintf_67b_goodB2GSink(CWE134_Uncontrolled_Format_String__char_listen_socket_fprintf_67_structType myStruct) char * data = myStruct . structFirst ; fprintf ( stdout , "%s\n" , data ); 