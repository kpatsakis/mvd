void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); badSink_b ( data ); void badSink_b(wchar_t * data) badSink_c ( data ); void badSink_c(wchar_t * data) pFile = FOPEN ( data , L "wb+" ) if ( pFile != NULL )  fclose ( pFile ); 