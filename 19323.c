void CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_64_bad() char * password ; password = ( char * ) malloc ( 100 * sizeof ( char ) ); if ( password == NULL )  strcpy ( password , "Password1234!" ); CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_64b_badSink ( & password ); void CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_64b_badSink(void * passwordVoidPtr) char * * passwordPtr = ( char * * ) passwordVoidPtr ; char * password = ( * passwordPtr ) ; if ( LogonUserA ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  free ( password ); 