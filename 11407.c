cgiEnvironmentResultType cgiWriteEnvironment(char *filename) FILE * out ; out = fopen ( filename , "wb" ); if ( ! out )  if ( ! cgiWriteString ( out , "CGIC2.0" ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); static int cgiWriteInt(FILE *out, int i) if ( ! fwrite ( & i , sizeof ( int ) , 1 , out ) )  if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiServerSoftware ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiServerName ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiGatewayInterface ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiServerProtocol ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiServerPort ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiRequestMethod ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiPathInfo ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiPathTranslated ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiScriptName ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiQueryString ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiRemoteHost ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiRemoteAddr ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiAuthType ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiRemoteUser ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiRemoteIdent ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiContentType ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiAccept ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiUserAgent ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiReferrer ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , cgiCookie ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteInt ( out , cgiContentLength ) )  static int cgiWriteInt(FILE *out, int i) if ( ! fwrite ( & i , sizeof ( int ) , 1 , out ) )  if ( ! cgiWriteString ( out , e -> attr ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , e -> value ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , e -> fileName ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteString ( out , e -> contentType ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  if ( ! cgiWriteInt ( out , e -> valueLength ) )  static int cgiWriteInt(FILE *out, int i) if ( ! fwrite ( & i , sizeof ( int ) , 1 , out ) )  if ( ! cgiWriteInt ( out , 1 ) )  static int cgiWriteInt(FILE *out, int i) if ( ! fwrite ( & i , sizeof ( int ) , 1 , out ) )  if ( ( ( int ) fwrite ( buffer , 1 , got , out ) ) != got )  if ( ! cgiWriteInt ( out , 0 ) )  static int cgiWriteInt(FILE *out, int i) if ( ! fwrite ( & i , sizeof ( int ) , 1 , out ) )  fclose ( out ); fclose ( out ); 