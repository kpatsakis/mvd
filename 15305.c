void CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_08_bad() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; DWORD payloadLen = strlen ( PAYLOAD ) ; memcpy ( payload , PAYLOAD , payloadLen ); printBytesLine ( payload , payloadLen ); void printBytesLine(const unsigned char * bytes, size_t numBytes) for (i = 0; i < numBytes; ++i) printf ( "%02x" , bytes [ i ] ); 