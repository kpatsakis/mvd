static cgiParseResultType cgiParsePostMultipartInput() cgiParseResultType result ; int got ; char tfileName [ 1024 ] ; mpStreamPtr mpp = & mp ; if ( ! cgiContentLength )  result = afterNextBoundary ( mpp , 0 , 0 , 0 , 1 ); if ( result == cgiParseIO )  if ( result != cgiParseSuccess )  while ( 1 )  char d [ 1024 ] ; char fvalue [ 1024 ] ; char fname [ 1024 ] ; int bodyLength = 0 ; char ffileName [ 1024 ] ; char fcontentType [ 1024 ] ; out = 0; got = mpRead ( mpp , d , 2 ); if ( got < 2 )  if ( ( d [ 0 ] == '-' ) && ( d [ 1 ] == '-' ) )  if ( ! cgiStrEqNc ( fvalue , "form-data" ) )  result = afterNextBoundary ( mpp , 0 , 0 , 0 , 0 ); if ( result != cgiParseSuccess )  if ( strlen ( ffileName ) )  if ( getTempFileName ( tfileName ) != cgiParseSuccess )  outf = fopen ( tfileName , "w+b" ); outf = 0; tfileName [ 0 ] = '\0'; result = afterNextBoundary ( mpp , outf , & out , & bodyLength , 0 ); if ( result != cgiParseSuccess )  n = ( cgiFormEntry * ) malloc ( sizeof ( cgiFormEntry ) ); if ( ! n )  memset ( n , 0 , sizeof ( cgiFormEntry ) ); n -> attr = ( char * ) malloc ( strlen ( fname ) + 1 ); if ( ! n -> attr )  if ( out )  if ( outf )  n -> value = ( char * ) malloc ( 1 ); if ( ! n -> value )  n -> value [ 0 ] = '\0'; n -> valueLength = bodyLength; n -> next = 0; n -> fileName = ( char * ) malloc ( strlen ( ffileName ) + 1 ); if ( ! n -> fileName )  strcpy ( n -> fileName , ffileName ); n -> contentType = ( char * ) malloc ( strlen ( fcontentType ) + 1 ); if ( ! n -> contentType )  strcpy ( n -> contentType , fcontentType ); n -> tfileName = ( char * ) malloc ( strlen ( tfileName ) + 1 ); if ( ! n -> tfileName )  cgiParseResultType afterNextBoundary(mpStreamPtr mpp, FILE *outf, char int *bodyLengthP, int first) int outSpace = 256 ; if ( ( ! outf ) && ( outP ) )  out = ( char * ) malloc ( outSpace ); if ( ! out )  if ( outP )  if ( out )  free ( out ); 