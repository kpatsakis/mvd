int main(int argc, char *argv[]) unsigned i ; if ( fork ( ) )  for (i=0;i<3;++i) pid = fork ( ); if ( pid == 0 )  pid = getpid ( ); handler ( pid ); void handler(int curPid) struct stat fileStat ; if ( stat ( fName , & fileStat ) )  if ( fileStat . st_size > 2048 )  if ( ( fp = fopen ( fName , "wb" ) ) != NULL )  fprintf ( stderr , "(%d) Error opening file\n" , curPid ); 