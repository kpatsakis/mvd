void bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; CWE114_Process_Control__w32_wchar_t_listen_socket_84_bad * badObject = new CWE114_Process_Control__w32_wchar_t_listen_socket_84_bad ( data ) ; CWE114_Process_Control__w32_wchar_t_listen_socket_84_bad::CWE114_Process_Control__w32_wchar_t_listen_socket_84_bad(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( wchar_t ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  