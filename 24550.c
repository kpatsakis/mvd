static void goodG2B() char * password ; char passwordBuffer [ 100 ] = "" ; password = passwordBuffer; strcpy ( password , "Password1234!" ); CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_64b_goodG2BSink ( & password ); void CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_64b_goodG2BSink(void * passwordVoidPtr) char * * passwordPtr = ( char * * ) passwordVoidPtr ; char * password = ( * passwordPtr ) ; if ( LogonUserA ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  