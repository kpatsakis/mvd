static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *cainsville_tuts) char query [ 1000 ] ; char dbconn_str [ 150 ] ; if ( cainsville_tuts != 0 )  filigreing_stilts = ( ( char * ) cainsville_tuts ); dbhost = getenv ( "DBPGHOST" ); dbuser = getenv ( "DBPGUSER" ); dbpassword = getenv ( "DBPGPASSWORD" ); dbport = getenv ( "DBPGPORT" ); dbdatabase = getenv ( "SS_DBPGDATABASE" ); if ( dbhost != 0 && dbport != 0 && dbuser != 0 && dbpassword != 0 && dbdatabase != 0 )  snprintf ( dbconn_str , 150 , "dbname=%s host=%s user=%s password=%s port=%s" , dbdatabase , dbhost , dbuser , dbpassword , dbport ); conn = PQconnectdb ( dbconn_str ); stonesoup_random_int = ( rand ( ) % 1000 ) + 100; snprintf ( query , 1000 , "INSERT INTO shippers (shipperid, companyname) VALUES ('%d', '%s');" , stonesoup_random_int , filigreing_stilts ); res = PQexec ( conn , query ); if ( PQresultStatus ( res ) != PGRES_COMMAND_OK )  PQclear ( res ); 