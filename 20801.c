 nestegg_track_codec_data(nestegg * ctx, unsigned int track, unsigned int unsigned char ** data, size_t * length) struct track_entry * entry ; entry = ne_find_track_entry ( ctx , track ); static struct track_entry ne_find_track_entry(nestegg * ctx, unsigned int track) struct ebml_list_node * node ; unsigned int tracks = 0 ; node = ctx -> segment . tracks . track_entry . head; while ( node )  assert ( node -> id == ID_TRACK_ENTRY ); if ( track == tracks )  tracks += 1; node = node -> next; 