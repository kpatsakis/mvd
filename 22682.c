static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *hydropult_nerstrand) int vagrantlike_mehetabel = 7 ; long apotype_pentathlete [ 10 ] ; struct glenmoore_contraception hackensack_cacomixls [ 10 ] = { 0 } ; struct glenmoore_contraception parathyroidal_concinnate ; if ( hydropult_nerstrand != 0 )  parathyroidal_concinnate . adsorbates_donkeyback = ( ( char * ) hydropult_nerstrand ); hackensack_cacomixls [ 5 ] = parathyroidal_concinnate; apotype_pentathlete [ 1 ] = 5; unlibidinously_almohades = * ( hackensack_cacomixls + apotype_pentathlete [ 1 ] ); diaplases_unstick ( vagrantlike_mehetabel , unlibidinously_almohades ); void diaplases_unstick(int cavelet_stableboy,struct glenmoore_contraception arsyversy_furnaceman) cavelet_stableboy --; if ( cavelet_stableboy > 0 )  diaplases_unstick ( cavelet_stableboy , arsyversy_furnaceman ); void diaplases_unstick(int cavelet_stableboy,struct glenmoore_contraception arsyversy_furnaceman) cavelet_stableboy --; if ( cavelet_stableboy > 0 )  if ( arsyversy_furnaceman . adsorbates_donkeyback != 0 )  free ( ( ( char * ) arsyversy_furnaceman . adsorbates_donkeyback ) ); 