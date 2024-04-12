 nestegg_read_packet(nestegg * ctx, nestegg_packet ** pkt) uint64_t id , size ; * pkt = NULL; r = ne_peek_element ( ctx , & id , & size ); if ( r != 1 )  if ( ne_is_suspend_element ( id ) )  r = ne_read_element ( ctx , & id , & size ); if ( r != 1 )  r = ne_read_block ( ctx , id , size , pkt ); r = ne_parse ( ctx , NULL , - 1 ); if ( r != 1 )  static ne_read_block(nestegg * ctx, uint64_t block_id, uint64_t block_size, nestegg_packet ** data) int r ; int64_t timecode , abs_timecode ; nestegg_packet * pkt ; struct cluster * cluster ; struct frame * f , * last ; struct track_entry * entry ; double track_scale ; uint64_t track_number , length , frame_sizes [ 256 ] , cluster_tc , flags , frames , tc_scale , total ; unsigned int i , lacing , track ; size_t consumed = 0 ; if ( block_size > LIMIT_BLOCK )  r = ne_read_vint ( ctx -> io , & track_number , & length ); if ( r != 1 )  if ( track_number == 0 )  consumed += length; r = ne_read_int ( ctx -> io , & timecode , 2 ); if ( r != 1 )  consumed += 2; r = ne_read_uint ( ctx -> io , & flags , 1 ); if ( r != 1 )  consumed += 1; frames = 0; lacing = ( flags & BLOCK_FLAGS_LACING ) >> 1; switch ( lacing )  frames = 1; r = ne_read_uint ( ctx -> io , & frames , 1 ); if ( r != 1 )  consumed += 1; frames += 1; if ( frames > 256 )  switch ( lacing )  frame_sizes [ 0 ] = block_size - consumed; if ( frames == 1 )  r = ne_read_xiph_lacing ( ctx -> io , block_size , & consumed , frames , frame_sizes ); if ( r != 1 )  if ( ( block_size - consumed ) % frames )  for (i = 0; i < frames; ++i) frame_sizes [ i ] = ( block_size - consumed ) / frames; if ( frames == 1 )  r = ne_read_ebml_lacing ( ctx -> io , block_size , & consumed , frames , frame_sizes ); if ( r != 1 )  total = consumed; for (i = 0; i < frames; ++i) total += frame_sizes [ i ]; if ( total > block_size )  if ( ne_map_track_number_to_index ( ctx , track_number , & track ) != 0 )  entry = ne_find_track_entry ( ctx , track ); if ( ! entry )  track_scale = 1.0; tc_scale = ne_get_timecode_scale ( ctx ); cluster = ctx -> segment . cluster . tail -> data; if ( ne_get_uint ( cluster -> timecode , & cluster_tc ) != 0 )  abs_timecode = timecode + cluster_tc; if ( abs_timecode < 0 )  pkt = ne_alloc ( sizeof ( * pkt ) ); if ( ! pkt )  pkt -> track = track; pkt -> timecode = abs_timecode * tc_scale * track_scale; for (i = 0; i < frames; ++i) if ( frame_sizes [ i ] > LIMIT_FRAME )  f = ne_alloc ( sizeof ( * f ) ); if ( ! f )  nestegg_free_packet ( pkt ); f -> data = ne_alloc ( frame_sizes [ i ] ); if ( ! f -> data )  f -> length = frame_sizes [ i ]; r = ne_io_read ( ctx -> io , f -> data , frame_sizes [ i ] ); if ( r != 1 )   nestegg_free_packet(nestegg_packet * pkt) struct frame * frame ; struct block_additional * block_additional ; while ( pkt -> frame )  frame = pkt -> frame; pkt -> frame = frame -> next; while ( pkt -> block_additional )  block_additional = pkt -> block_additional; pkt -> block_additional = block_additional -> next; free ( block_additional -> data ); 