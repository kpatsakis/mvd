void CWE194_Unexpected_Sign_Extension__fgets_memmove_63_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = ( short ) atoi ( inputBuffer ); CWE194_Unexpected_Sign_Extension__fgets_memmove_63b_badSink ( & data ); void CWE194_Unexpected_Sign_Extension__fgets_memmove_63b_badSink(short * dataPtr) short data = * dataPtr ; if ( data < 100 )  memmove ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 