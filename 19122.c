static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; CWE114_Process_Control__w32_char_console_84_goodG2B * goodG2BObject = new CWE114_Process_Control__w32_char_console_84_goodG2B ( data ) ; CWE114_Process_Control__w32_char_console_84_goodG2B::CWE114_Process_Control__w32_char_console_84_goodG2B(char * dataCopy) data = dataCopy; strcpy ( data , "C:\\Windows\\System32\\winsrv.dll" ); delete goodG2BObject CWE114_Process_Control__w32_char_console_84_goodG2B::~CWE114_Process_Control__w32_char_console_84_goodG2B() HMODULE hModule ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 