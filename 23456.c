static void CVE_2011_3623_PATCHED_AVI_ChunkDumpDebug_level( vlc_object_t avi_chunk_t  *p_chk, unsigned i_level ) avi_chunk_t * p_child ; if ( i_level * 5 + 1 >= sizeof ( str ) )  p_child = p_chk -> common . p_first; while ( p_child )  CVE_2011_3623_PATCHED_AVI_ChunkDumpDebug_level ( p_obj , p_child , i_level + 1 ); p_child = p_child -> common . p_next; static void CVE_2011_3623_PATCHED_AVI_ChunkDumpDebug_level( vlc_object_t avi_chunk_t  *p_chk, unsigned i_level ) avi_chunk_t * p_child ; if ( i_level * 5 + 1 >= sizeof ( str ) )  p_child = p_chk -> common . p_first; while ( p_child )  CVE_2011_3623_PATCHED_AVI_ChunkDumpDebug_level ( p_obj , p_child , i_level + 1 ); p_child = p_child -> common . p_next; static void CVE_2011_3623_PATCHED_AVI_ChunkDumpDebug_level( vlc_object_t avi_chunk_t  *p_chk, unsigned i_level ) avi_chunk_t * p_child ; if ( i_level * 5 + 1 >= sizeof ( str ) )  p_child = p_chk -> common . p_first; while ( p_child )  CVE_2011_3623_PATCHED_AVI_ChunkDumpDebug_level ( p_obj , p_child , i_level + 1 ); p_child = p_child -> common . p_next; static void CVE_2011_3623_PATCHED_AVI_ChunkDumpDebug_level( vlc_object_t avi_chunk_t  *p_chk, unsigned i_level ) char str [ 512 ] ; if ( i_level * 5 + 1 >= sizeof ( str ) )  memset ( str , ' ' , sizeof ( str ) ); str [ i * 5 ] = '|'; snprintf ( & str [ i_level * 5 ] , sizeof ( str ) - 5 * i_level "%c %4.4s-%4.4s size:%" PRIu64 " pos:%" PRIu64 i_level ? '+' : '*' ( char * ) & p_chk -> common . i_chunk_fourcc ( char * ) & p_chk -> list . i_type p_chk -> common . i_chunk_size p_chk -> common . i_chunk_pos ) snprintf ( & str [ i_level * 5 ] , sizeof ( str ) - 5 * i_level "+ %4.4s size:%" PRIu64 " pos:%" PRIu64 ( char * ) & p_chk -> common . i_chunk_fourcc p_chk -> common . i_chunk_size p_chk -> common . i_chunk_pos ) msg_Dbg ( p_obj , "%s" , str ); 