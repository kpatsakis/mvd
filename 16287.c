static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *analgesic_cote) char * stonesoup_extension = ".lck" ; char * stonesoup_thelockfile ; if ( analgesic_cote != 0 )  leptothrix_dirgler = ( ( char * ) analgesic_cote ); stonesoup_thelockfile = ( char * ) malloc ( strlen ( "/opt/stonesoup/workspace/testData/" ) + strlen ( leptothrix_dirgler ) + strlen ( stonesoup_extension ) + 1 ); if ( stonesoup_thelockfile )  strcpy ( stonesoup_thelockfile , "/opt/stonesoup/workspace/testData/" ); strcat ( stonesoup_thelockfile , leptothrix_dirgler ); strcat ( stonesoup_thelockfile , stonesoup_extension ); if ( access ( "/opt/stonesoup/workspace/testData/" , R_OK && W_OK ) == - 1 )  free ( stonesoup_thelockfile ); 