void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( FILENAME_MAX - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; badSink ( & data ); void badSink(char * * dataPtr) char * data = * dataPtr ; fileDesc = OPEN ( data , O_RDWR | O_CREAT , S_IREAD | S_IWRITE ); if ( fileDesc != - 1 )  CLOSE ( fileDesc ); 