static void goodG2B() char * cryptoKey ; char cryptoKeyBuffer [ 100 ] = "" ; cryptoKey = cryptoKeyBuffer; cryptoKey = CWE321_Hard_Coded_Cryptographic_Key__w32_char_61b_goodG2BSource ( cryptoKey ); char * CWE321_Hard_Coded_Cryptographic_Key__w32_char_61b_goodG2BSource(char * cryptoKey) size_t cryptoKeyLen = strlen ( cryptoKey ) ; if ( 100 - cryptoKeyLen > 1 )  if ( fgets ( cryptoKey + cryptoKeyLen , ( int ) ( 100 - cryptoKeyLen ) , stdin ) == NULL )  cryptoKey [ cryptoKeyLen ] = '\0'; cryptoKeyLen = strlen ( cryptoKey ); if ( cryptoKeyLen > 0 )  cryptoKey [ cryptoKeyLen - 1 ] = '\0'; return cryptoKey ; 