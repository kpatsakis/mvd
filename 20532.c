void CWE123_Write_What_Where_Condition__connect_socket_13_bad() badStruct data ; linkedList head = { & head , & head } ; data . list . next = head . next; data . list . prev = head . prev; if ( GLOBAL_CONST_FIVE == 5 )  WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = inet_addr ( IP_ADDRESS ); service . sin_port = htons ( TCP_PORT ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  recvResult = recv ( connectSocket , ( char * ) & data , sizeof ( data ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  while ( 0 )  