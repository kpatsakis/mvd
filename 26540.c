static int process_input(int file_index) InputFile * ifile = input_files [ file_index ] ; AVFormatContext * is ; InputStream * ist ; AVPacket pkt ; int ret ; is = ifile -> ctx; ret = get_input_packet ( ifile , & pkt ); static int get_input_packet(InputFile *f,AVPacket *pkt) if ( nb_input_files > 1 )  return get_input_packet_mt ( f , pkt ) ; static int get_input_packet_mt(InputFile *f,AVPacket *pkt) int ret = 0 ; if ( av_fifo_size ( f -> fifo ) )  if ( f -> finished )  ret = - ( ( int ) ( ( 'E' | 'O' << 8 | 'F' << 16 ) | ( ( unsigned int ) 32 ) << 24 ) ); ret = - 11; return ret ; return av_read_frame ( f -> ctx , pkt ) ; if ( ret == - 11 )  if ( ret < 0 )  if ( pkt . stream_index >= ifile -> nb_streams )  ist = input_streams [ ifile -> ist_index + pkt . stream_index ]; if ( ist -> discard )  if ( ! ist -> wrap_correction_done && is -> start_time != ( ( int64_t ) 0x8000000000000000UL ) && ist -> st -> pts_wrap_bits < 64 )  ist -> wrap_correction_done = 1; ist -> wrap_correction_done = 0; ist -> wrap_correction_done = 0; if ( pkt . pts != ( ( int64_t ) 0x8000000000000000UL ) )  pkt . pts *= ist -> ts_scale; if ( pkt . dts != ( ( int64_t ) 0x8000000000000000UL ) )  pkt . dts *= ist -> ts_scale; if ( pkt . dts != ( ( int64_t ) 0x8000000000000000UL ) && ist -> next_dts != ( ( int64_t ) 0x8000000000000000UL ) && ! copy_ts )  if ( is -> iformat -> flags & 0x0200 )  pkt . dts = ( ( int64_t ) 0x8000000000000000UL ); if ( pkt . pts != ( ( int64_t ) 0x8000000000000000UL ) )  pkt . pts = ( ( int64_t ) 0x8000000000000000UL ); ret = output_packet ( ist , ( & pkt ) ); static int output_packet(InputStream *ist,const AVPacket *pkt) int i ; int got_output ; AVPacket avpkt ; if ( ! ist -> saw_first_ts )  ist -> dts = ( ( ist -> st -> avg_frame_rate . num ? ( - ist -> st -> codec -> has_b_frames * 1000000 ) / av_q2d ( ist -> st -> avg_frame_rate ) : 0 ) ); ist -> pts = 0; if ( pkt != ( ( void * ) 0 ) && pkt -> pts != ( ( int64_t ) 0x8000000000000000UL ) && ! ist -> decoding_needed )  ist -> pts = ist -> dts; ist -> saw_first_ts = 1; if ( ist -> next_dts == ( ( int64_t ) 0x8000000000000000UL ) )  ist -> next_dts = ist -> dts; if ( ist -> next_pts == ( ( int64_t ) 0x8000000000000000UL ) )  ist -> next_pts = ist -> pts; if ( pkt == ( ( void * ) 0 ) )  avpkt . data = ( ( void * ) 0 ); avpkt . size = 0; avpkt = * pkt; if ( pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) )  ist -> next_dts = ist -> dts = av_rescale_q ( pkt -> dts , ist -> st -> time_base , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) ) if ( ( ist -> st -> codec -> codec_type ) != AVMEDIA_TYPE_VIDEO || ! ist -> decoding_needed )  ist -> next_pts = ist -> pts = ist -> dts; while ( ist -> decoding_needed && ( avpkt . size > 0 || ! pkt && got_output ) )  int duration ; ist -> pts = ist -> next_pts; ist -> dts = ist -> next_dts; if ( avpkt . size && avpkt . size != pkt -> size )  ist -> showed_multi_packet_warning = 1; switch ( ist -> st -> codec -> codec_type )  ret = decode_audio ( ist , & avpkt , & got_output ); static int decode_audio(InputStream *ist,AVPacket *pkt,int *got_output) AVFrame * decoded_frame ; AVCodecContext * avctx = ist -> st -> codec ; int ret ; if ( ! ist -> decoded_frame && ! ( ist -> decoded_frame = avcodec_alloc_frame ( ) ) )  return - 12 ; decoded_frame = ist -> decoded_frame; ret = avcodec_decode_audio4 ( avctx , decoded_frame , got_output , pkt ); if ( ret >= 0 && avctx -> sample_rate <= 0 )  ret = - ( ( int ) ( ( 'I' | 'N' << 8 | 'D' << 16 ) | ( ( unsigned int ) 'A' ) << 24 ) ); if ( ! ( * got_output ) || ret < 0 )  return ret ; return ret ; ret = decode_video ( ist , & avpkt , & got_output ); static int decode_video(InputStream *ist,AVPacket *pkt,int *got_output) AVFrame * decoded_frame ; if ( ! ist -> decoded_frame && ! ( ist -> decoded_frame = avcodec_alloc_frame ( ) ) )  return - 12 ; decoded_frame = ist -> decoded_frame; pkt -> dts = av_rescale_q ( ist -> dts , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) , ist -> st -> time_base ) ret = avcodec_decode_video2 ( ist -> st -> codec , decoded_frame , got_output , pkt ); if ( ! ( * got_output ) || ret < 0 )  return ret ; return ret ; if ( avpkt . duration )  duration = ( av_rescale_q ( avpkt . duration , ist -> st -> time_base , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) ) ) if ( ist -> st -> codec -> time_base . num != 0 && ist -> st -> codec -> time_base . den != 0 )  int ticks = ist -> st -> parser ? ist -> st -> parser -> repeat_pict + 1 : ist -> st -> codec -> ticks_per_frame ; duration = ( ( ( int64_t ) 1000000 ) * ist -> st -> codec -> time_base . num * ticks / ist -> st -> codec -> time_base . den ); duration = 0; if ( ist -> dts != ( ( int64_t ) 0x8000000000000000UL ) && duration )  ist -> next_dts += duration; ist -> next_dts = ( ( int64_t ) 0x8000000000000000UL ); if ( got_output )  ist -> next_pts += duration; ret = transcode_subtitles ( ist , & avpkt , & got_output ); if ( ret < 0 )  avpkt . dts = avpkt . pts = ( ( int64_t ) 0x8000000000000000UL ); if ( pkt )  if ( ( ist -> st -> codec -> codec_type ) != AVMEDIA_TYPE_AUDIO )  ret = avpkt . size; avpkt . data += ret; avpkt . size -= ret; if ( ! ist -> decoding_needed )  ist -> dts = ist -> next_dts; switch ( ist -> st -> codec -> codec_type )  ist -> next_dts += ( ( int64_t ) 1000000 ) * ( ist -> st -> codec -> frame_size ) / ( ist -> st -> codec -> sample_rate ); if ( pkt -> duration )  if ( ist -> st -> codec -> time_base . num != 0 )  int ticks = ist -> st -> parser ? ist -> st -> parser -> repeat_pict + 1 : ist -> st -> codec -> ticks_per_frame ; ist -> next_dts += ( ( int64_t ) 1000000 ) * ist -> st -> codec -> time_base . num * ticks / ist -> st -> codec -> time_base . den; ist -> pts = ist -> dts; ist -> next_pts = ist -> next_dts; for (i = 0; pkt && i < nb_output_streams; i++) OutputStream * ost = output_streams [ i ] ; if ( ! check_output_constraints ( ist , ost ) || ost -> encoding_needed )  static int check_output_constraints(InputStream *ist,OutputStream *ost) OutputFile * of = output_files [ ost -> file_index ] ; int ist_index = input_files [ ist -> file_index ] -> ist_index + ist -> st -> index ; if ( ost -> source_index != ist_index )  return 0 ; if ( of -> start_time && ist -> pts < of -> start_time )  return 0 ; return 1 ; do_streamcopy ( ist , ost , pkt ); static void do_streamcopy(InputStream *ist,OutputStream *ost,const AVPacket *pkt) OutputFile * of = output_files [ ost -> file_index ] ; int64_t ost_tb_start_time = av_rescale_q ( of -> start_time , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) , ost -> st -> time_base ) AVPacket opkt ; if ( ! ost -> frame_number && ! ( pkt -> flags & 0000001 ) && ! ost -> copy_initial_nonkeyframes )  if ( ! ost -> frame_number && ist -> pts < of -> start_time && ! ost -> copy_prior_start )  if ( of -> recording_time != 9223372036854775807L && ist -> pts >= of -> recording_time + of -> start_time )  if ( ( ost -> st -> codec -> codec_type ) == AVMEDIA_TYPE_AUDIO )  if ( ( ost -> st -> codec -> codec_type ) == AVMEDIA_TYPE_VIDEO )  ost -> sync_opts ++; if ( pkt -> pts != ( ( int64_t ) 0x8000000000000000UL ) )  opkt . pts = av_rescale_q ( pkt -> pts , ist -> st -> time_base , ost -> st -> time_base ) - ost_tb_start_time; opkt . pts = ( ( int64_t ) 0x8000000000000000UL ); if ( pkt -> dts == ( ( int64_t ) 0x8000000000000000UL ) )  opkt . dts = av_rescale_q ( ist -> dts , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) , ost -> st -> time_base ) opkt . dts = av_rescale_q ( pkt -> dts , ist -> st -> time_base , ost -> st -> time_base ); opkt . dts -= ost_tb_start_time; if ( ( ost -> st -> codec -> codec_type ) == AVMEDIA_TYPE_AUDIO && pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) )  opkt . dts = opkt . pts = av_rescale_delta ( ist -> st -> time_base , pkt -> dts , ( ( AVRational ) ( 1 ) , ist -> st -> codec -> sample_rate ) , duration , & ist -> filter_in_rescale_delta_last , ost -> st -> time_base ) - ost_tb_start_time opkt . duration = ( av_rescale_q ( ( pkt -> duration ) , ist -> st -> time_base , ost -> st -> time_base ) ); opkt . flags = pkt -> flags; if ( ( ost -> st -> codec -> codec_id ) != AV_CODEC_ID_H264 && ( ost -> st -> codec -> codec_id ) != AV_CODEC_ID_MPEG1VIDEO && ( ost -> st -> codec -> codec_id ) != AV_CODEC_ID_MPEG2VIDEO && ( ost -> st -> codec -> codec_id ) != AV_CODEC_ID_VC1 )  if ( av_parser_change ( ist -> st -> parser , ost -> st -> codec , & opkt . data , & opkt . size , ( pkt -> data ) , pkt -> size , pkt -> flags & 0000001 ) )  opkt . destruct = av_destruct_packet; opkt . data = pkt -> data; opkt . size = pkt -> size; if ( ( ost -> st -> codec -> codec_type ) == AVMEDIA_TYPE_VIDEO && of -> ctx -> oformat -> flags & 0x20 )  opkt . data = ( ( uint8_t * ) ( & pict ) ); opkt . size = ( sizeof ( AVPicture ) ); opkt . flags |= 0000001; write_frame ( of -> ctx , & opkt , ost ); static void write_frame(AVFormatContext *s,AVPacket *pkt,OutputStream *ost) AVBitStreamFilterContext * bsfc = ost -> bitstream_filters ; AVCodecContext * avctx = ost -> st -> codec ; if ( ( avctx -> codec_type ) == AVMEDIA_TYPE_VIDEO && video_sync_method == 0xFF || ( avctx -> codec_type ) == AVMEDIA_TYPE_AUDIO && audio_sync_method < 0 )  pkt -> pts = pkt -> dts = ( ( int64_t ) 0x8000000000000000UL ); if ( ( ( avctx -> codec_type ) == AVMEDIA_TYPE_AUDIO || ( avctx -> codec_type ) == AVMEDIA_TYPE_VIDEO ) && pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) )  int64_t max = ost -> st -> cur_dts + ( ! ( s -> oformat -> flags & 0x8020000 ) ) ; if ( ost -> st -> cur_dts && ost -> st -> cur_dts != ( ( int64_t ) 0x8000000000000000UL ) && max > pkt -> dts )  if ( pkt -> pts >= pkt -> dts )  pkt -> pts = ( pkt -> pts > max ? pkt -> pts : max ); pkt -> dts = max; if ( ! ( ( avctx -> codec_type ) == AVMEDIA_TYPE_VIDEO && avctx -> codec ) )  if ( ( ost -> frame_number ) >= ost -> max_frames )  while ( bsfc )  AVPacket new_pkt = * pkt ; int a = av_bitstream_filter_filter ( bsfc , avctx , ( ( void * ) 0 ) , & new_pkt . data , & new_pkt . size , ( pkt -> data ) , pkt -> size , pkt -> flags & 0000001 ) ; if ( a == 0 && new_pkt . data != pkt -> data && new_pkt . destruct )  uint8_t * t = ( av_malloc ( ( new_pkt . size + 16 ) ) ) ; if ( t )  memcpy ( t , new_pkt . data , new_pkt . size ); memset ( ( t + new_pkt . size ) , 0 , 16 ); new_pkt . data = t; a = 1; a = - 12; if ( a > 0 )  new_pkt . destruct = av_destruct_packet; if ( a < 0 )  av_log ( ( ( void * ) 0 ) , 16 , "Failed to open bitstream filter %s for stream %d with codec %s" , bsfc -> filter -> name , pkt -> stream_index , ( avctx -> codec ? avctx -> codec -> name : "copy" ) ); print_error ( "" , a ); * pkt = new_pkt; bsfc = bsfc -> next; pkt -> stream_index = ost -> index; av_log ( ( ( void * ) 0 ) , 32 , "muxer <- type:%s pkt_pts:%s pkt_pts_time:%s pkt_dts:%s pkt_dts_time:%s size:%d\n" , av_get_media_type_string ( ost -> st -> codec -> codec_type ) , av_ts_make_string ( ( ( char [ 32 ] ) ( 0 ) ) , pkt -> pts ) , av_ts_make_time_string ( ( ( char [ 32 ] ) ( 0 ) ) , pkt -> pts , & ost -> st -> time_base ) , av_ts_make_string ( ( ( char [ 32 ] ) ( 0 ) ) , pkt -> dts ) , av_ts_make_time_string ( ( ( char [ 32 ] ) ( 0 ) ) , pkt -> dts , & ost -> st -> time_base ) , pkt -> size ) ret = av_interleaved_write_frame ( s , pkt ); if ( ret < 0 )  print_error ( "av_interleaved_write_frame()" , ret ); 