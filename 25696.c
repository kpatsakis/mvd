void crotalaria_amenableness(void **monodonta_trehala) republics_ginn = ( ( char * ) ( ( char * ) ( * ( monodonta_trehala - 5 ) ) ) ); stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( republics_ginn ) + 1 ) ); stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( republics_ginn ) + 1 ) ); if ( stonesoupData -> data && stonesoupData -> file1 )  if ( ( sscanf ( republics_ginn , "%s %s" , stonesoupData -> file1 , stonesoupData -> data ) == 2 ) && ( strlen ( stonesoupData -> data ) != 0 ) && ( strlen ( stonesoupData -> file1 ) != 0 ) )  stonesoupData -> data_size = strlen ( stonesoupData -> data ); delNonAlpha ( stonesoupData ); void delNonAlpha (void *data) struct stonesoup_data * stonesoupData = ( struct stonesoup_data * ) data ; int i = 0 ; int j = 0 ; char * temp = malloc ( sizeof ( char ) * ( stonesoupData -> data_size + 1 ) ) ; while ( stonesoupData -> data [ i ] != '\0' )  if ( ( stonesoupData -> data [ i ] >= 'A' && stonesoupData -> data [ i ] <= 'Z' ) || ( stonesoupData -> data [ i ] >= 'a' && stonesoupData -> data [ i ] <= 'z' ) )  temp [ j ++ ] = stonesoupData -> data [ i ]; i ++; temp [ j ++ ] = '\0'; stonesoupData -> data_size = j; stonesoupData -> data = temp; waitForSig ( stonesoupData -> file1 ); void waitForSig(char* sleepFile) int fd ; char outStr [ 25 ] = { 0 } ; char filename [ 500 ] = { 0 } ; sprintf ( outStr , "%d.pid" , getpid ( ) ); strcat ( filename , "/opt/stonesoup/workspace/testData/" ); strcat ( filename , outStr ); if ( ( fd = open ( filename , O_CREAT | O_WRONLY , 0666 ) ) == - 1 )  stonesoup_readFile ( sleepFile ); void stonesoup_readFile(char *filename) FILE * fifo ; fifo = fopen ( filename , "r" ); if ( fifo != NULL )  fclose ( fifo ); 