static void CVE_2010_3907_PATCHED_DemuxAudioMethod1( demux_t *p_demux, real_track_t *tk, mtime_t i_pts, unsigned int i_flags ) demux_sys_t * p_sys = p_demux -> p_sys ; uint8_t * p_buf = p_sys -> buffer ; if ( ( i_flags & 2 ) || p_sys -> b_seek )  tk -> i_subpacket = 0; tk -> i_out_subpacket = 0; p_sys -> b_seek = false; if ( tk -> fmt . i_codec == VLC_CODEC_COOK || tk -> fmt . i_codec == VLC_CODEC_ATRAC3 )  const int y = tk -> i_subpacket / ( tk -> i_subpacket_h / 2 ) ; for( int i = 0; i < tk->i_subpacket_h / 2; i++ ) int i_index = ( i * 2 * tk -> i_frame_size / tk -> i_coded_frame_size ) + y ; if ( i_index >= tk -> i_subpackets )  block_t * p_block = block_New ( p_demux , tk -> i_coded_frame_size ) ; if ( ! p_block )  if ( & p_buf [ tk -> i_coded_frame_size ] > & p_sys -> buffer [ p_sys -> i_buffer ] )  memcpy ( p_block -> p_buffer , p_buf , tk -> i_coded_frame_size ); p_block -> i_dts = p_block -> i_pts = i_index == 0 ? i_pts : VLC_TS_INVALID; p_buf += tk -> i_coded_frame_size; if ( tk -> p_subpackets [ i_index ] != NULL )  msg_Dbg ( p_demux , "p_subpackets[ %d ] not null!" , i_index ); block_Release ( tk -> p_subpackets [ i_index ] ); tk -> p_subpackets [ i_index ] = p_block; tk -> i_subpacket ++; while ( tk -> i_out_subpacket != tk -> i_subpackets && tk -> p_subpackets [ tk -> i_out_subpacket ] )  block_t * p_block = tk -> p_subpackets [ tk -> i_out_subpacket ] ; tk -> p_subpackets [ tk -> i_out_subpacket ] = NULL; if ( tk -> p_subpackets_timecode [ tk -> i_out_subpacket ] )  p_block -> i_dts = p_block -> i_pts = tk -> p_subpackets_timecode [ tk -> i_out_subpacket ]; tk -> p_subpackets_timecode [ tk -> i_out_subpacket ] = 0; tk -> i_out_subpacket ++; CheckPcr ( p_demux , tk , p_block -> i_pts ); es_out_Send ( p_demux -> out , tk -> p_es , p_block ); if ( tk -> i_subpacket == tk -> i_subpackets && tk -> i_out_subpacket != tk -> i_subpackets )  if ( tk -> i_subpacket == tk -> i_subpackets )  tk -> i_subpacket = 0; tk -> i_out_subpacket = 0; 