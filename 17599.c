void CWE510_Trapdoor__hostname_based_logic_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; WSADATA wsaData ; struct sockaddr_in service , acceptService ; char hostname [ NI_MAXHOST ] ; char servInfo [ NI_MAXSERV ] ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  listenSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( listenSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = INADDR_ANY; service . sin_port = htons ( 20000 ); if ( bind ( listenSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  if ( listen ( listenSocket , 5 ) == SOCKET_ERROR )  acceptSocket = accept ( listenSocket , NULL , NULL ); if ( acceptSocket == SOCKET_ERROR )  if ( getsockname ( acceptSocket , ( struct sockaddr * ) & acceptService , & acceptServiceLen ) == - 1 )  if ( getnameinfo ( ( struct sockaddr * ) & acceptService , sizeof ( struct sockaddr ) , hostname , NI_MAXHOST , servInfo , NI_MAXSERV , NI_NUMERICSERV ) != 0 )  if ( strcmp ( "admin.google.com" , hostname ) == 0 )  if ( send ( acceptSocket , ADMIN_MESSAGE , strlen ( ADMIN_MESSAGE ) , 0 ) == SOCKET_ERROR )  if ( send ( acceptSocket , DEFAULT_MESSAGE , strlen ( DEFAULT_MESSAGE ) , 0 ) == SOCKET_ERROR )  while ( 0 )  if ( listenSocket != INVALID_SOCKET )  CLOSE_SOCKET ( listenSocket ); if ( acceptSocket != INVALID_SOCKET )  CLOSE_SOCKET ( acceptSocket ); 