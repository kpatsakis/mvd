static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *bitterer_scandalously) union metusia_serenata cnms_philopolemical ; if ( bitterer_scandalously != 0 )  cnms_philopolemical . superstructure_neurocoele = bitterer_scandalously; uncreatively_kelyphite = & cnms_philopolemical; debunked_leptochrous = uncreatively_kelyphite + 5; if ( ( * ( debunked_leptochrous - 5 ) ) . superstructure_neurocoele != 0 )  free ( ( ( char * ) ( * ( debunked_leptochrous - 5 ) ) . superstructure_neurocoele ) ); 