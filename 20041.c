static cgiParseResultType cgiParsePostMultipartInput() cgiParseResultType result ; mpStreamPtr mpp = & mp ; if ( ! cgiContentLength )  result = afterNextBoundary ( mpp , 0 , 0 , 0 , 1 ); cgiParseResultType afterNextBoundary(mpStreamPtr mpp, FILE *outf, char int *bodyLengthP, int first) int outLen = 0 ; int outSpace = 256 ; char * out = 0 ; int boffset ; int got ; char d [ 2 ] ; char workingBoundaryData [ 1024 ] ; char * workingBoundary = workingBoundaryData ; int workingBoundaryLength ; if ( ( ! outf ) && ( outP ) )  out = ( char * ) malloc ( outSpace ); if ( ! out )  boffset = 0; sprintf ( workingBoundaryData , "\r\n--%s" , cgiMultipartBoundary ); if ( first )  workingBoundary = workingBoundaryData + 2; workingBoundaryLength = strlen ( workingBoundary ); while ( 1 )  got = mpRead ( mpp , d , 1 ); if ( got != 1 )  if ( d [ 0 ] == workingBoundary [ boffset ] )  boffset ++; if ( boffset == workingBoundaryLength )  if ( boffset > 0 )  boffset = 0; got = mpRead ( mpp , d , 2 ); if ( got != 2 )  if ( out && outSpace )  out [ outLen ] = '\0'; out = ( char * ) realloc ( out , outLen + 1 ); if ( ! out )  * outP = out; if ( out )  free ( out ); 