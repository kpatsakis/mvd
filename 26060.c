static void goodG2B() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; CWE36_Absolute_Path_Traversal__char_connect_socket_fopen_84_goodG2B * goodG2BObject = new CWE36_Absolute_Path_Traversal__char_connect_socket_fopen_84_goodG2B ( data ) ; CWE36_Absolute_Path_Traversal__char_connect_socket_fopen_84_goodG2B::CWE36_Absolute_Path_Traversal__char_connect_socket_fopen_84_goodG2B(char * dataCopy) data = dataCopy; strcat ( data , "c:\\temp\\file.txt" ); delete goodG2BObject CWE36_Absolute_Path_Traversal__char_connect_socket_fopen_84_goodG2B::~CWE36_Absolute_Path_Traversal__char_connect_socket_fopen_84_goodG2B() pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 