int pam_conv_func(int num_msg, const struct pam_message **msg, struct pam_response **resp, void *appdata_ptr) int i , j ; if ( 0 >= num_msg && num_msg > PAM_MAX_NUM_MSG )  * resp = calloc ( num_msg , sizeof * * resp ); if ( ! * resp )  for (i = 0; i < num_msg; ++i) switch ( msg [ i ] -> msg_style )  fprintf ( stderr , "Username: %s\n" , ( const char * ) appdata_ptr ); ( * resp ) [ i ] . resp = getpass_r ( msg [ i ] -> msg ); char * getpass_r(const char *prompt) struct termios oflags , nflags ; char password [ 64 ] = { '\0' } ; if ( tcgetattr ( fileno ( stdin ) , & oflags ) )  return NULL ; nflags = oflags; nflags . c_lflag &= ~ECHO; nflags . c_lflag |= ECHONL; if ( tcsetattr ( fileno ( stdin ) , TCSAFLUSH , & nflags ) )  return NULL ; ret = fgets ( password , sizeof ( password ) , stdin ); if ( tcsetattr ( fileno ( stdin ) , TCSAFLUSH , & oflags ) )  return NULL ; if ( ret )  ret = strdup ( password ); return ret ; if ( ( * resp ) [ i ] . resp == NULL )  fputs ( msg [ i ] -> msg , stderr ); 