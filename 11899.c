int main(int argc, char *argv[]) unsigned i ; if ( fork ( ) )  for (i=0;i<3;++i) pid = fork ( ); if ( pid == 0 )  pid = getpid ( ); handler ( pid ); void handler(int curPid) int fd ; if ( ( fd = open ( fName , O_WRONLY | O_CREAT | O_EXCL ) ) != - 1 )  if ( errno == EEXIST )  fprintf ( stderr , "(%d) File exists\n" , curPid ); 