static void *skinny_ss(void *data) struct ast_channel * c = data ; struct skinny_subchannel * sub = c -> tech_pvt ; struct skinny_line * l = sub -> line ; struct skinny_device * d = l -> device ; int timeout = firstdigittimeout ; int loop_pause = 100 ; len = strlen ( sub -> exten ); while ( len < AST_MAX_EXTENSION - 1 )  res = 1; while ( strlen ( sub -> exten ) == len )  timeout -= loop_pause; if ( ( timeout -= loop_pause ) <= 0 )  res = 0; res = 1; if ( sub != l -> activesub )  timeout = 0; len = strlen ( sub -> exten ); if ( ast_exists_extension ( c , c -> context , sub -> exten , 1 , l -> cid_num ) )  if ( ! res || ! ast_matchmore_extension ( c , c -> context , sub -> exten , 1 , l -> cid_num ) )  if ( l -> getforward )  transmit_lamp_indication ( d , STIMULUS_FORWARDALL , 1 , SKINNY_LAMP_ON ); timeout = matchdigittimeout; if ( res == 0 )  if ( ! ast_canmatch_extension ( c , c -> context , sub -> exten , 1 , S_COR ( c -> caller . id . number . valid , c -> caller . id . number . str , NULL ) ) && ( ( sub -> exten [ 0 ] != '*' ) || ( ! ast_strlen_zero ( sub -> exten ) > 2 ) ) )  if ( ! timeout )  timeout = gendigittimeout; static void transmit_lamp_indication(struct skinny_device *d, int stimulus, int instance, int indication) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct set_lamp_message ) , SET_LAMP_MESSAGE ) ) )  req -> data . setlamp . stimulus = htolel ( stimulus ); req -> data . setlamp . stimulusInstance = htolel ( instance ); req -> data . setlamp . deviceStimulus = htolel ( indication ); transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); if ( res == - 1 )  skinny_unregister ( NULL , s ); ast_mutex_unlock ( & s -> lock ); 