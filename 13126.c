static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = L "" data = dataBuffer; CWE36_Absolute_Path_Traversal__wchar_t_listen_socket_fopen_82_base * baseObject = new CWE36_Absolute_Path_Traversal__wchar_t_listen_socket_fopen_82_goodG2B baseObject -> action ( data ); void CWE36_Absolute_Path_Traversal__wchar_t_listen_socket_fopen_82_goodG2B::action(wchar_t * data) FILE * pFile = NULL ; pFile = FOPEN ( data , L "wb+" ) if ( pFile != NULL )  fclose ( pFile ); 