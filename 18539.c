static int unix_stream_connect(struct socket *sock, struct sockaddr int addr_len, int flags) struct sockaddr_un * sunaddr = ( struct sockaddr_un * ) uaddr ; int err ; err = unix_mkname ( sunaddr , addr_len , & hash ); static int unix_mkname(struct sockaddr_un *sunaddr, int len, unsigned int *hashp) if ( len <= sizeof ( short ) || len > sizeof ( * sunaddr ) )  if ( ! sunaddr || sunaddr -> sun_family != AF_UNIX )  if ( sunaddr -> sun_path [ 0 ] )  ( ( char * ) sunaddr ) [ len ] = 0; len = strlen ( sunaddr -> sun_path ) + 1 + sizeof ( short ); return len ; 