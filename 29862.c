void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); myStruct . structFirst = data; badSink ( myStruct ); void badSink(structType myStruct) wchar_t * data = myStruct . structFirst ; outputFile . open ( ( char * ) data ); 