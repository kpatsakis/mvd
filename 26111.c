void CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_51_bad() char * password ; char passwordBuffer [ 100 ] = "" ; password = passwordBuffer; WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; char * replace ; size_t passwordLen = strlen ( password ) ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = inet_addr ( IP_ADDRESS ); service . sin_port = htons ( TCP_PORT ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  recvResult = recv ( connectSocket , ( char * ) ( password + passwordLen ) , ( 100 - passwordLen - 1 ) * sizeof ( char ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  password [ passwordLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( password , '\n' ); if ( replace )  * replace = '\0'; while ( 0 )  