static void good1() if ( 0 )  charVoid structCharVoid ; structCharVoid . voidSecond = ( void * ) SRC_STR; memmove ( structCharVoid . charFirst , SRC_STR , sizeof ( structCharVoid . charFirst ) ); structCharVoid . charFirst [ ( sizeof ( structCharVoid . charFirst ) / sizeof ( char ) ) - 1 ] = '\0'; printLine ( ( char * ) structCharVoid . charFirst ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); printLine ( ( char * ) structCharVoid . voidSecond ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 