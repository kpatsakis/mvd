void CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_67_bad() char * password ; char passwordBuffer [ 100 ] = "" ; password = passwordBuffer; size_t passwordLen = strlen ( password ) ; recvResult = recv ( connectSocket , ( char * ) ( password + passwordLen ) , ( 100 - passwordLen - 1 ) * sizeof ( char ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  password [ passwordLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( password , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( password , '\n' ); if ( replace )  * replace = '\0'; myStruct . structFirst = password; CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_67b_badSink ( myStruct ); void CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_67b_badSink(CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_67_structType myStruct) char * password = myStruct . structFirst ; if ( LogonUserA ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  