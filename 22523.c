void CWE506_Embedded_Malicious_Code__w32_aes_encrypted_payload_07_bad() if ( staticFive == 5 )  BYTE payload [ 20 ] = { 0xfb , 0x50 , 0xe5 , 0x8d , 0xc5 , 0x4b , 0xdd , 0xe0 , 0x26 , 0x2b , 0x98 , 0x49 , 0x73 , 0xfb , 0x4c , 0xf6 } ; HCRYPTPROV hCryptProv = 0 ; HCRYPTHASH hHash = 0 ; HCRYPTKEY hKey = 0 ; char hashData [ 100 ] = HASH_INPUT ; if ( ! CryptAcquireContext ( & hCryptProv , NULL , MS_ENH_RSA_AES_PROV , PROV_RSA_AES , 0 ) )  if ( ! CryptCreateHash ( hCryptProv , CALG_SHA_256 , 0 , 0 , & hHash ) )  if ( ! CryptHashData ( hHash , ( BYTE * ) hashData , strlen ( hashData ) , 0 ) )  if ( ! CryptDeriveKey ( hCryptProv , CALG_AES_256 , hHash , 0 , & hKey ) )  if ( ! CryptDecrypt ( hKey , 0 , 1 , 0 , ( BYTE * ) payload , & payloadLen ) )  while ( 0 )  