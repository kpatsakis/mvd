void waitForSig() int fd ; char outStr [ 25 ] = { 0 } ; char filename [ 500 ] = { 0 } ; sprintf ( outStr , "%d.pid" , getpid ( ) ); strcat ( filename , "/opt/stonesoup/workspace/testData/" ); strcat ( filename , outStr ); if ( ( fd = open ( filename , O_CREAT | O_WRONLY , 0666 ) ) == - 1 )  stonesoup_readFile ( stonesoupData -> file1 ); void stonesoup_readFile(char *filename) FILE * fifo ; fifo = fopen ( filename , "r" ); if ( fifo != NULL )  fclose ( fifo ); 