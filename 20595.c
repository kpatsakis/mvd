void CWE665_Improper_Initialization__char_ncat_51b_goodG2BSink(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; sourceLen = strlen ( source ); strncat ( data , source , sourceLen ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 