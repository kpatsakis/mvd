static void goodB2G2() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; if ( staticFive == 5 )  FILE * pFile ; pFile = fopen ( "passwords.txt" , "r" ); if ( pFile != NULL )  if ( fgetws ( data , 100 , pFile ) == NULL )  data [ 0 ] = L '\0' data [ 0 ] = L '\0' if ( staticFive == 5 )  char hashData [ 100 ] = HASH_INPUT ; HCRYPTPROV hCryptProv = 0 ; HCRYPTHASH hHash = 0 ; HCRYPTKEY hKey = 0 ; BYTE payload [ ( 100 - 1 ) * sizeof ( wchar_t ) ] ; DWORD payloadBytes ; payloadBytes = decodeHexWChars ( payload , sizeof ( payload ) , data ); size_t decodeHexWChars(unsigned char * bytes, size_t numBytes, const wchar_t * hex) size_t numWritten = 0 ; while ( numWritten < numBytes && iswxdigit ( hex [ 2 * numWritten ] ) && iswxdigit ( hex [ 2 * numWritten + 1 ] ) )  int byte ; bytes [ numWritten ] = ( unsigned char ) byte; return numWritten ; if ( ! CryptAcquireContext ( & hCryptProv , NULL , MS_ENH_RSA_AES_PROV , PROV_RSA_AES , 0 ) )  if ( ! CryptCreateHash ( hCryptProv , CALG_SHA_256 , 0 , 0 , & hHash ) )  if ( ! CryptHashData ( hHash , ( BYTE * ) hashData , strlen ( hashData ) , 0 ) )  if ( ! CryptDeriveKey ( hCryptProv , CALG_AES_256 , hHash , 0 , & hKey ) )  if ( ! CryptDecrypt ( hKey , 0 , 1 , 0 , payload , & payloadBytes ) )  memcpy ( data , payload , payloadBytes ); while ( 0 )  if ( LogonUserW ( username , domain , data , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  