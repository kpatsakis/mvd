int main(int argc, char *argv[]) unsigned i ; if ( fork ( ) )  for (i=0;i<3;++i) pid = fork ( ); if ( pid == 0 )  pid = getpid ( ); handler ( pid ); void handler(int curPid) struct stat fileStat ; if ( stat ( fName , & fileStat ) )  if ( fileStat . st_size > 2048 )  if ( ( fp = fopen ( fName , "wb" ) ) != NULL )  char output [ BUFSIZ ] ; sprintf ( output , "(%d) %s" , curPid , string ); if ( fwrite ( output , sizeof * output , strlen ( output ) , fp ) < strlen ( output ) )  fprintf ( stderr , "(%d) Couldn't write all characters\n" , curPid ); 