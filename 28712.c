static void goodG2B2() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; strcpy ( data , "fixedstringtest" ); goodG2B2VaSinkB ( data , data ); static void goodG2B2VaSinkB(char * data, ...) va_start ( args , data ); vprintf ( data , args ); 