static void good1() if ( GLOBAL_CONST_FIVE != 5 )  char * password = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; password [ 0 ] = '\0'; if ( fgets ( password , 100 , stdin ) == NULL )  password [ 0 ] = '\0'; passwordLen = strlen ( password ); if ( passwordLen > 0 )  password [ passwordLen - 1 ] = '\0'; if ( LogonUserA ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & hUser ) != 0 )  passwordLen = strlen ( password ); SecureZeroMemory ( password , passwordLen * sizeof ( char ) ); 