void bad() char * data ; char * * dataPtr1 = & data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; char * data = * dataPtr1 ; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); * dataPtr1 = data; outputFile . open ( ( char * ) data ); 