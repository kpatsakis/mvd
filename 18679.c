void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_01_bad() char data [ 100 ] = "" ; WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; size_t dataLen = strlen ( data ) ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  listenSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( listenSocket == INVALID_SOCKET )  if ( listen ( listenSocket , LISTEN_BACKLOG ) == SOCKET_ERROR )  if ( bind ( listenSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  acceptSocket = accept ( listenSocket , NULL , NULL ); if ( acceptSocket == SOCKET_ERROR )  recvResult = recv ( acceptSocket , ( char * ) data + dataLen , ( int ) ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ recvResult ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; while ( 0 )  printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 