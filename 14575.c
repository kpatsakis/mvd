 nestegg_sniff(unsigned char const * buffer, size_t length) nestegg_io io ; struct sniff_buffer userdata ; userdata . buffer = buffer; userdata . length = length; userdata . offset = 0; io . read = ne_buffer_read; io . seek = ne_buffer_seek; io . tell = ne_buffer_tell; io . userdata = & userdata; return ne_match_webm ( io , length ) ; static ne_match_webm(nestegg_io io, int64_t max_offset) nestegg * ctx ; if ( ! ( io . read && io . seek && io . tell ) )  ctx = ne_alloc ( sizeof ( * ctx ) ); if ( ! ctx )  ctx -> io = ne_alloc ( sizeof ( * ctx -> io ) ); if ( ! ctx -> io )  nestegg_destroy ( ctx );  nestegg_destroy(nestegg * ctx) free ( ctx ); 