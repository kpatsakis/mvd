int avformat_find_stream_info(AVFormatContext *ic,AVDictionary **options) int i ; int ret ; int read_size ; int j ; AVStream * st ; AVPacket * pkt ; for (i = 0; i < ic -> nb_streams; i++) st = ic -> streams [ i ]; if ( ( st -> codec -> codec_type ) == AVMEDIA_TYPE_VIDEO || ( st -> codec -> codec_type ) == AVMEDIA_TYPE_SUBTITLE )  if ( ! st -> codec -> time_base . num )  st -> codec -> time_base = st -> time_base; if ( ! st -> parser && ! ( ic -> flags & 0x20 ) )  st -> parser = av_parser_init ( ( st -> codec -> codec_id ) ); if ( st -> parser )  if ( ( st -> need_parsing ) == AVSTREAM_PARSE_HEADERS )  st -> parser -> flags |= 0x1; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_FULL_RAW )  st -> parser -> flags |= 0x1000; for (i = 0; i < ic -> nb_streams; i++) ic -> streams [ i ] -> info -> last_dts = ( ( int64_t ) 0x8000000000000000UL ); ic -> streams [ i ] -> info -> fps_first_dts = ( ( int64_t ) 0x8000000000000000UL ); ic -> streams [ i ] -> info -> fps_last_dts = ( ( int64_t ) 0x8000000000000000UL ); read_size = 0; if ( ff_check_interrupt ( & ic -> interrupt_callback ) )  for (i = 0; i < ic -> nb_streams; i++) int fps_analyze_framecount = 20 ; st = ic -> streams [ i ]; if ( ! has_codec_parameters ( st , ( ( void * ) 0 ) ) )  static int has_codec_parameters(AVStream *st,const char **errmsg_ptr) return 0 ; while ( 0 )  if ( ( avctx -> codec_id ) == AV_CODEC_ID_NONE )  return 0 ; while ( 0 )  return 1 ; if ( av_q2d ( st -> time_base ) > 0.0005 )  fps_analyze_framecount *= 2; if ( ic -> fps_probe_size >= 0 )  fps_analyze_framecount = ic -> fps_probe_size; if ( st -> disposition & 0x0400 )  fps_analyze_framecount = 0; if ( tb_unreliable ( st -> codec ) && ! ( st -> r_frame_rate . num && st -> avg_frame_rate . num ) && st -> info -> duration_count < fps_analyze_framecount && ( st -> codec -> codec_type ) == AVMEDIA_TYPE_VIDEO )  static int tb_unreliable(AVCodecContext *c) if ( c -> time_base . den >= 101L * c -> time_base . num || c -> time_base . den < 5L * c -> time_base . num || c -> codec_tag == ( ( const union unaligned_32 * ) "mp4v" ) -> l || ( c -> codec_id ) == AV_CODEC_ID_MPEG2VIDEO || ( c -> codec_id ) == AV_CODEC_ID_H264 )  return 1 ; return 0 ; if ( st -> parser && st -> parser -> parser -> split && ! st -> codec -> extradata )  if ( st -> first_dts == ( ( int64_t ) 0x8000000000000000UL ) && ( ( st -> codec -> codec_type ) == AVMEDIA_TYPE_VIDEO || ( st -> codec -> codec_type ) == AVMEDIA_TYPE_AUDIO ) )  if ( i == ic -> nb_streams )  if ( ! ( ic -> ctx_flags & 0x1 ) )  if ( read_size >= ic -> probesize )  ret = read_frame_internal ( ic , & pkt1 ); if ( ret == - '\v' )  if ( ret < 0 )  if ( ic -> flags & 0x0040 )  pkt = & pkt1; pkt = add_to_pktbuf ( & ic -> packet_buffer , & pkt1 , & ic -> packet_buffer_end ); static AVPacket *add_to_pktbuf(AVPacketList **packet_buffer,AVPacket *pkt,AVPacketList **plast_pktl) AVPacketList * pktl = ( av_mallocz ( sizeof ( AVPacketList ) ) ) ; if ( ! pktl )  return ( ( void * ) 0 ) ; pktl -> pkt = * pkt; return & pktl -> pkt ; if ( ( ret = av_dup_packet ( pkt ) ) < 0 )  read_size += pkt -> size; st = ic -> streams [ pkt -> stream_index ]; if ( pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) && st -> codec_info_nb_frames > 1 )  if ( st -> info -> fps_last_dts != ( ( int64_t ) 0x8000000000000000UL ) && st -> info -> fps_last_dts >= pkt -> dts )  st -> info -> fps_first_dts = st -> info -> fps_last_dts = ( ( int64_t ) 0x8000000000000000UL ); if ( st -> info -> fps_last_dts != ( ( int64_t ) 0x8000000000000000UL ) && st -> info -> fps_last_dts_idx > st -> info -> fps_first_dts_idx && ( pkt -> dts - st -> info -> fps_last_dts ) / 1000 > ( st -> info -> fps_last_dts - st -> info -> fps_first_dts ) / ( st -> info -> fps_last_dts_idx - st -> info -> fps_first_dts_idx ) )  st -> info -> fps_first_dts = st -> info -> fps_last_dts = ( ( int64_t ) 0x8000000000000000UL ); if ( st -> info -> fps_first_dts == ( ( int64_t ) 0x8000000000000000UL ) )  st -> info -> fps_first_dts = pkt -> dts; st -> info -> fps_first_dts_idx = st -> codec_info_nb_frames; st -> info -> fps_last_dts = pkt -> dts; st -> info -> fps_last_dts_idx = st -> codec_info_nb_frames; if ( st -> codec_info_nb_frames > 1 )  int64_t t = 0 ; if ( st -> time_base . den > 0 )  t = av_rescale_q ( st -> info -> codec_info_duration , st -> time_base , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) ) if ( st -> avg_frame_rate . num > 0 )  t = ( t > av_rescale_q ( ( st -> codec_info_nb_frames ) , av_inv_q ( st -> avg_frame_rate ) , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) ) ? t : av_rescale_q ( ( st -> codec_info_nb_frames ) , av_inv_q ( st -> avg_frame_rate ) , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) ) ) if ( t >= ( ic -> max_analyze_duration ) )  if ( pkt -> duration )  st -> info -> codec_info_duration += ( pkt -> duration ); st -> info -> codec_info_duration_fields += ( ( st -> parser && st -> codec -> ticks_per_frame == 2 ? st -> parser -> repeat_pict + 1 : 2 ) ); int64_t last = st -> info -> last_dts ; if ( pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) && last != ( ( int64_t ) 0x8000000000000000UL ) && pkt -> dts > last && ( pkt -> dts ) - ( ( uint64_t ) last ) < 9223372036854775807L )  double dts = ( ( is_relative ( pkt -> dts ) ? ( pkt -> dts ) - ( 9223372036854775807L - ( 1L L << 48 ) ) : ( pkt -> dts ) ) ) * av_q2d ( st -> time_base ) int64_t duration = pkt -> dts - last ; if ( ! st -> info -> duration_error )  st -> info -> duration_error = ( av_mallocz ( sizeof ( st -> info -> duration_error [ 0 ] ) * 2 ) ); for (i = 0; i < 60 * 12 + 6; i++) int framerate = get_std_framerate ( i ) ; static int get_std_framerate(int i) if ( i < 60 * 12 )  return ( i + 1 ) * 1001 ; double sdts = dts * framerate / ( 1001 * 12 ) ; for (j = 0; j < 2; j++) int64_t ticks = ( llrint ( sdts + j * 0.5 ) ) ; double error = sdts - ticks + j * 0.5 ; st -> info -> duration_error [ j ] [ 0 ] [ i ] += error; st -> info -> duration_error [ j ] [ 1 ] [ i ] += error * error; st -> info -> duration_count ++; if ( st -> info -> duration_count > 3 && is_relative ( pkt -> dts ) == is_relative ( last ) )  st -> info -> duration_gcd = av_gcd ( st -> info -> duration_gcd , duration ); if ( pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) )  st -> info -> last_dts = pkt -> dts; if ( st -> parser && st -> parser -> parser -> split && ! st -> codec -> extradata )  int i = ( st -> parser -> parser -> split ) ( st -> codec , ( pkt -> data ) , pkt -> size ) ; if ( i > 0 && i < ( 1 << 28 ) - 16 )  st -> codec -> extradata_size = i; st -> codec -> extradata = ( av_malloc ( ( st -> codec -> extradata_size + 16 ) ) ); if ( ! st -> codec -> extradata )  memcpy ( ( st -> codec -> extradata ) , ( pkt -> data ) , ( st -> codec -> extradata_size ) ); memset ( ( st -> codec -> extradata + i ) , 0 , 16 ); st -> codec_info_nb_frames ++; static int read_frame_internal(AVFormatContext *s,AVPacket *pkt) int got_packet = 0 ; while ( ! got_packet && ! s -> parse_queue )  AVStream * st ; AVPacket cur_pkt ; ret = ff_read_packet ( s , & cur_pkt ); int ff_read_packet(AVFormatContext *s,AVPacket *pkt) int ret ; AVStream * st ; AVPacketList * pktl = s -> raw_packet_buffer ; if ( pktl )  * pkt = pktl -> pkt; st = s -> streams [ pkt -> stream_index ]; if ( st -> request_probe <= 0 )  return 0 ; pkt -> data = ( ( void * ) 0 ); pkt -> size = 0; ret = ( ( s -> iformat -> read_packet ) ( s , pkt ) ); if ( ret < 0 )  if ( ! pktl || ret == - '\v' )  return ret ; if ( s -> flags & 0x0100 && pkt -> flags & 0x0002 )  if ( ( pkt -> stream_index ) >= ( ( unsigned int ) ( s -> nb_streams ) ) )  st = s -> streams [ pkt -> stream_index ]; pkt -> dts = wrap_timestamp ( st , pkt -> dts ); static int64_t wrap_timestamp(AVStream *st,int64_t timestamp) return timestamp ; pkt -> pts = wrap_timestamp ( st , pkt -> pts ); static int64_t wrap_timestamp(AVStream *st,int64_t timestamp) return timestamp ; if ( s -> use_wallclock_as_timestamps )  pkt -> dts = pkt -> pts = av_rescale_q ( av_gettime ( ) , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) , st -> time_base ) if ( ! pktl && st -> request_probe <= 0 )  return ret ; s -> raw_packet_buffer_remaining_size -= pkt -> size; if ( ret < 0 )  st = s -> streams [ cur_pkt . stream_index ]; if ( st -> need_parsing && ! st -> parser && ! ( s -> flags & 0x20 ) )  st -> parser = av_parser_init ( ( st -> codec -> codec_id ) ); if ( ! st -> parser )  st -> need_parsing = AVSTREAM_PARSE_NONE; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_HEADERS )  st -> parser -> flags |= 0x1; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_FULL_ONCE )  st -> parser -> flags |= 0x0002; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_FULL_RAW )  st -> parser -> flags |= 0x1000; if ( ! st -> need_parsing || ! st -> parser )  * pkt = cur_pkt; if ( s -> iformat -> flags & 0x0100 && pkt -> flags & 0x1 && pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) )  av_add_index_entry ( st , pkt -> pos , pkt -> dts , 0 , 0 , 0x1 ); got_packet = 1; if ( ( st -> discard ) < AVDISCARD_ALL )  if ( ( ret = parse_packet ( s , & cur_pkt , cur_pkt . stream_index ) ) < 0 )  static int parse_packet(AVFormatContext *s,AVPacket *pkt,int stream_index) AVPacket out_pkt = { ( 0 ) } ; AVStream * st = s -> streams [ stream_index ] ; uint8_t * data = pkt ? pkt -> data : ( ( void * ) 0 ) ; int size = pkt ? pkt -> size : 0 ; int ret = 0 ; int got_output = 0 ; if ( ! pkt )  pkt = & flush_pkt; got_output = 1; while ( size > 0 || pkt == & flush_pkt && got_output )  int len ; len = av_parser_parse2 ( st -> parser , st -> codec , & out_pkt . data , & out_pkt . size , data , size , pkt -> pts , pkt -> dts , pkt -> pos ); pkt -> pts = pkt -> dts = ( ( int64_t ) 0x8000000000000000UL ); pkt -> pos = ( - 1 ); data += len; size -= len; got_output = ! ( ! out_pkt . size ); if ( ! out_pkt . size )  out_pkt . duration = 0; if ( ( st -> codec -> codec_type ) == AVMEDIA_TYPE_AUDIO )  if ( st -> codec -> sample_rate > 0 )  out_pkt . duration = ( av_rescale_q_rnd ( ( st -> parser -> duration ) , ( ( AVRational ) ( 1 ) , st -> codec -> sample_rate ) , st -> time_base , AV_ROUND_DOWN ) ) if ( st -> codec -> time_base . num != 0 && st -> codec -> time_base . den != 0 )  out_pkt . duration = ( av_rescale_q_rnd ( ( st -> parser -> duration ) , st -> codec -> time_base , st -> time_base , AV_ROUND_DOWN ) ); out_pkt . stream_index = st -> index; out_pkt . pts = st -> parser -> pts; out_pkt . dts = st -> parser -> dts; out_pkt . pos = st -> parser -> pos; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_FULL_RAW )  out_pkt . pos = st -> parser -> frame_offset; if ( st -> parser -> key_frame == 1 || st -> parser -> key_frame == - 1 && st -> parser -> pict_type == AV_PICTURE_TYPE_I )  out_pkt . flags |= 0x1; if ( st -> parser -> key_frame == - 1 && st -> parser -> pict_type == AV_PICTURE_TYPE_NONE && pkt -> flags & 0x1 )  out_pkt . flags |= 0x1; if ( out_pkt . data == pkt -> data && out_pkt . size == pkt -> size )  out_pkt . destruct = pkt -> destruct; pkt -> destruct = ( ( void * ) 0 ); if ( ( ret = av_dup_packet ( & out_pkt ) ) < 0 )  if ( ! add_to_pktbuf ( & s -> parse_queue , & out_pkt , & s -> parse_queue_end ) )  static AVPacket *add_to_pktbuf(AVPacketList **packet_buffer,AVPacket *pkt,AVPacketList **plast_pktl) AVPacketList * pktl = ( av_mallocz ( sizeof ( AVPacketList ) ) ) ; if ( ! pktl )  return ( ( void * ) 0 ) ; pktl -> pkt = * pkt; return & pktl -> pkt ; ret = - 12; return ret ; if ( pkt -> flags & 0x1 )  st -> skip_to_keyframe = 0; if ( st -> skip_to_keyframe )  if ( got_packet )  * pkt = cur_pkt; got_packet = 0; int av_add_index_entry(AVStream *st,int64_t pos,int64_t timestamp,int size,int distance,int flags) timestamp = wrap_timestamp ( st , timestamp ); static int64_t wrap_timestamp(AVStream *st,int64_t timestamp) return timestamp ; return ff_add_index_entry ( & st -> index_entries , & st -> nb_index_entries , & st -> index_entries_allocated_size , pos , timestamp , size , distance , flags ) ; int ff_add_index_entry(AVIndexEntry **index_entries,int *nb_index_entries,unsigned int *index_entries_allocated_size,int64_t pos,int64_t timestamp,int size,int distance,int flags) AVIndexEntry * entries ; AVIndexEntry * ie ; int index ; if ( ( ( ( unsigned int ) ( * nb_index_entries ) ) + 1 ) >= ( 2147483647 * 2U + 1U ) / sizeof ( AVIndexEntry ) )  if ( timestamp == ( ( int64_t ) 0x8000000000000000UL ) )  entries = ( av_fast_realloc ( ( * index_entries ) , index_entries_allocated_size , ( * nb_index_entries + 1 ) * sizeof ( AVIndexEntry ) ) ); if ( ! entries )  * index_entries = entries; index = ff_index_search_timestamp ( ( * index_entries ) , * nb_index_entries , timestamp , 4 ); int ff_index_search_timestamp(const AVIndexEntry *entries,int nb_entries,int64_t wanted_timestamp,int flags) int a ; int b ; int m ; int64_t timestamp ; a = - 1; b = nb_entries; if ( b && entries [ b - 1 ] . timestamp < wanted_timestamp )  a = b - 1; while ( b - a > 1 )  m = a + b >> 1; timestamp = entries [ m ] . timestamp; if ( timestamp >= wanted_timestamp )  b = m; if ( timestamp <= wanted_timestamp )  a = m; m = ( flags & 1 ? a : b ); if ( ! ( flags & 4 ) )  while ( m >= 0 && m < nb_entries && ! ( entries [ m ] . flags & 0x1 ) )  m += ( flags & 1 ? - 1 : 1 ); if ( m == nb_entries )  return - 1 ; return m ; if ( index < 0 )  ie = & entries [ index ]; if ( ie -> timestamp != timestamp )  if ( ie -> timestamp <= timestamp )  memmove ( ( entries + index + 1 ) , ( entries + index ) , sizeof ( AVIndexEntry ) * ( * nb_index_entries - index ) ); 