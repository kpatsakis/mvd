void *stonesoup_calc_data (void *data) struct stonesoup_data * ssD = ( struct stonesoup_data * ) data ; stonesoup_readFile ( ssD -> file1 ); void stonesoup_readFile(char *filename) FILE * fifo ; char ch ; fifo = fopen ( filename , "r" ); if ( fifo != NULL )  while ( ( ch = fgetc ( fifo ) ) != EOF )  stonesoup_printf ( "%c" , ch ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); vfprintf ( stonesoup_printf_context , format , argptr ); 