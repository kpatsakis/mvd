static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *goran_arbalo) if ( goran_arbalo != 0 )  domes_subsidizes = & goran_arbalo; gratifier_hashhead ( domes_subsidizes ); void gratifier_hashhead(char **lummoxes_violle) scalefish_arboriculture ( lummoxes_violle ); void scalefish_arboriculture(char **securigerous_unsolemnified) int stonesoup_len ; latt_recontrolling = ( ( char * ) ( * securigerous_unsolemnified ) ); stonesoup_len = strtol ( latt_recontrolling , & stonesoup_endptr , 10 ); if ( stonesoup_len > 0 && stonesoup_len < 1000 )  stonesoup_temp = fopen ( "/opt/stonesoup/workspace/testData/myfile.txt" , "w+" ); if ( stonesoup_temp != 0 )  fputs ( stonesoup_values [ stonesoup_i ] , stonesoup_temp ); fclose ( stonesoup_temp ); 