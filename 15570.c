void CWE367_TOC_TOU__access_11_bad() if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; char filename [ 100 ] = "" ; if ( fgets ( filename , 100 , stdin ) == NULL )  filename [ 0 ] = '\0'; if ( strlen ( filename ) > 0 )  filename [ strlen ( filename ) - 1 ] = '\0'; fileDesc = OPEN ( filename , O_RDWR ); if ( WRITE ( fileDesc , BAD_SINK_STRING , strlen ( BAD_SINK_STRING ) ) == - 1 )  