void CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_08_bad() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; BYTE payload [ 100 ] ; DWORD payloadLen = strlen ( PAYLOAD ) ; HCRYPTPROV hCryptProv = ( HCRYPTPROV ) NULL ; HCRYPTHASH hHash = ( HCRYPTHASH ) NULL ; HCRYPTKEY hKey = ( HCRYPTKEY ) NULL ; char hashData [ 100 ] = HASH_INPUT ; memcpy ( payload , PAYLOAD , payloadLen ); if ( ! CryptAcquireContext ( & hCryptProv , NULL , MS_ENH_RSA_AES_PROV , PROV_RSA_AES , 0 ) )  if ( ! CryptHashData ( hHash , ( BYTE * ) hashData , strlen ( hashData ) , 0 ) )  if ( ! CryptDeriveKey ( hCryptProv , CALG_AES_256 , hHash , 0 , & hKey ) )  if ( ! CryptEncrypt ( hKey , 0 , 1 , 0 , payload , & payloadLen , sizeof ( payload ) ) )  while ( 0 )  