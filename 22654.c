static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *preselects_sertule) int stonesoup_taint_len ; int cinemactic_unpreventative ; if ( preselects_sertule != 0 )  autologous_undiaphanously = ( ( void * ) preselects_sertule ); cinemactic_unpreventative = 1; stentoraphonic_irregardless = & autologous_undiaphanously; mismanageable_shogged = ( ( void * * ) ( ( ( unsigned long ) stentoraphonic_irregardless ) * cinemactic_unpreventative * cinemactic_unpreventative ) ) + 5; caliphates_pallmall = ( ( char * ) ( ( char * ) ( * ( mismanageable_shogged - 5 ) ) ) ); stonesoup_data = ( struct stonesoup_struct * ) malloc ( sizeof ( struct stonesoup_struct ) ); if ( stonesoup_data != NULL )  stonesoup_taint_len = ( ( int ) ( strlen ( caliphates_pallmall ) ) ); for (; stonesoup_taint_len >= 0; (--stonesoup_buff_size , --stonesoup_taint_len)) stonesoup_data -> buffer [ stonesoup_buff_size ] = caliphates_pallmall [ stonesoup_taint_len ]; tracepoint ( stonesoup_trace , variable_buffer , "stonesoup_data->buffer" , stonesoup_data -> buffer , "CROSSOVER-STATE" ); stonesoup_data -> buffer [ stonesoup_i ] = stonesoup_toupper ( stonesoup_data -> buffer [ stonesoup_i ] ); int stonesoup_toupper(int c) if ( c >= 97 && c <= 122 )  return c - 32 ; return c ; stonesoup_printf ( "%c" , stonesoup_data -> before ( stonesoup_data -> buffer [ stonesoup_i ] ) ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); mg_vprintf_data ( ( struct mg_connection * ) stonesoup_printf_context , format , argptr ); free ( stonesoup_data ); tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoup_i" , stonesoup_i , & stonesoup_i , "FINAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoup_data->buffer" , stonesoup_data -> buffer , "FINAL-STATE" ); 