static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *drinkery_undeflowered) union predesirously_earwitness ungripe_shoshonean ; if ( drinkery_undeflowered != 0 )  ungripe_shoshonean . helodes_haff = drinkery_undeflowered; burdash_razzle = & ungripe_shoshonean; nonspiritous_bustards ( burdash_razzle ); void nonspiritous_bustards(union predesirously_earwitness *echo_twining) subroutines_agamy ( echo_twining ); void subroutines_agamy(union predesirously_earwitness *blanchi_aeger) if ( ( * blanchi_aeger ) . helodes_haff != 0 )  free ( ( ( char * ) ( * blanchi_aeger ) . helodes_haff ) ); 