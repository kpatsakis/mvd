static void goodG2B() char * data ; char * dataArray [ 5 ] ; data = NULL; char * dataBuffer = new char [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; dataArray [ 2 ] = data; goodG2BSink ( dataArray ); void goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memmove ( dest , data , 100 * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 