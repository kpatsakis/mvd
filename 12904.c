static int process_input(int file_index) InputFile * ifile = input_files [ file_index ] ; InputStream * ist ; int ret ; int i ; ret = get_input_packet ( ifile , & pkt ); if ( ret == - 11 )  if ( ret < 0 )  ifile -> eof_reached = 1; for (i = 0; i < ifile -> nb_streams; i++) ist = input_streams [ ifile -> ist_index + i ]; if ( ist -> decoding_needed )  output_packet ( ist , ( ( void * ) 0 ) ); static int output_packet(InputStream *ist,const AVPacket *pkt) int got_output ; AVPacket avpkt ; if ( ! ist -> saw_first_ts )  ist -> dts = ( ( ist -> st -> avg_frame_rate . num ? ( - ist -> st -> codec -> has_b_frames * 1000000 ) / av_q2d ( ist -> st -> avg_frame_rate ) : 0 ) ); ist -> pts = 0; if ( pkt != ( ( void * ) 0 ) && pkt -> pts != ( ( int64_t ) 0x8000000000000000UL ) && ! ist -> decoding_needed )  ist -> pts = ist -> dts; ist -> saw_first_ts = 1; if ( ist -> next_dts == ( ( int64_t ) 0x8000000000000000UL ) )  ist -> next_dts = ist -> dts; if ( ist -> next_pts == ( ( int64_t ) 0x8000000000000000UL ) )  ist -> next_pts = ist -> pts; if ( pkt == ( ( void * ) 0 ) )  avpkt . data = ( ( void * ) 0 ); avpkt . size = 0; avpkt = * pkt; if ( pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) )  ist -> next_dts = ist -> dts = av_rescale_q ( pkt -> dts , ist -> st -> time_base , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) ) if ( ( ist -> st -> codec -> codec_type ) != AVMEDIA_TYPE_VIDEO || ! ist -> decoding_needed )  ist -> next_pts = ist -> pts = ist -> dts; while ( ist -> decoding_needed && ( avpkt . size > 0 || ! pkt && got_output ) )  int duration ; ist -> pts = ist -> next_pts; ist -> dts = ist -> next_dts; if ( avpkt . size && avpkt . size != pkt -> size )  ist -> showed_multi_packet_warning = 1; switch ( ist -> st -> codec -> codec_type )  ret = decode_audio ( ist , & avpkt , & got_output ); static int decode_audio(InputStream *ist,AVPacket *pkt,int *got_output) AVFrame * decoded_frame ; AVCodecContext * avctx = ist -> st -> codec ; int ret ; if ( ! ist -> decoded_frame && ! ( ist -> decoded_frame = avcodec_alloc_frame ( ) ) )  return - 12 ; decoded_frame = ist -> decoded_frame; ret = avcodec_decode_audio4 ( avctx , decoded_frame , got_output , pkt ); if ( ret >= 0 && avctx -> sample_rate <= 0 )  ret = - ( ( int ) ( ( 'I' | 'N' << 8 | 'D' << 16 ) | ( ( unsigned int ) 'A' ) << 24 ) ); if ( ! ( * got_output ) || ret < 0 )  return ret ; return ret ; ret = decode_video ( ist , & avpkt , & got_output ); static int decode_video(InputStream *ist,AVPacket *pkt,int *got_output) AVFrame * decoded_frame ; if ( ! ist -> decoded_frame && ! ( ist -> decoded_frame = avcodec_alloc_frame ( ) ) )  return - 12 ; decoded_frame = ist -> decoded_frame; pkt -> dts = av_rescale_q ( ist -> dts , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) , ist -> st -> time_base ) ret = avcodec_decode_video2 ( ist -> st -> codec , decoded_frame , got_output , pkt ); if ( ! ( * got_output ) || ret < 0 )  return ret ; return ret ; if ( avpkt . duration )  duration = ( av_rescale_q ( avpkt . duration , ist -> st -> time_base , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) ) ) if ( ist -> st -> codec -> time_base . num != 0 && ist -> st -> codec -> time_base . den != 0 )  int ticks = ist -> st -> parser ? ist -> st -> parser -> repeat_pict + 1 : ist -> st -> codec -> ticks_per_frame ; duration = ( ( ( int64_t ) 1000000 ) * ist -> st -> codec -> time_base . num * ticks / ist -> st -> codec -> time_base . den ); duration = 0; if ( ist -> dts != ( ( int64_t ) 0x8000000000000000UL ) && duration )  ist -> next_dts += duration; ist -> next_dts = ( ( int64_t ) 0x8000000000000000UL ); if ( got_output )  ist -> next_pts += duration; ret = transcode_subtitles ( ist , & avpkt , & got_output ); if ( ret < 0 )  avpkt . dts = avpkt . pts = ( ( int64_t ) 0x8000000000000000UL ); if ( pkt )  if ( ( ist -> st -> codec -> codec_type ) != AVMEDIA_TYPE_AUDIO )  ret = avpkt . size; avpkt . data += ret; avpkt . size -= ret; static int transcode_subtitles(InputStream *ist,AVPacket *pkt,int *got_output) AVSubtitle subtitle ; int ret = avcodec_decode_subtitle2 ( ist -> st -> codec , & subtitle , got_output , pkt ) ; if ( ret < 0 || ! ( * got_output ) )  if ( ist -> fix_sub_duration )  if ( ist -> prev_sub . got_output )  int end = ( av_rescale ( subtitle . pts - ist -> prev_sub . subtitle . pts , 1000 , 1000000 ) ) ; if ( end < ist -> prev_sub . subtitle . end_display_time )  ist -> prev_sub . subtitle . end_display_time = end; int SWAP_tmp = ist -> prev_sub . got_output ; ist -> prev_sub . got_output = * got_output; * got_output = SWAP_tmp; while ( 0 )  int SWAP_tmp = ist -> prev_sub . ret ; ist -> prev_sub . ret = ret; ret = SWAP_tmp; while ( 0 )  AVSubtitle SWAP_tmp = ist -> prev_sub . subtitle ; ist -> prev_sub . subtitle = subtitle; subtitle = SWAP_tmp; while ( 0 )  sub2video_update ( ist , & subtitle ); static void sub2video_update(InputStream *ist,AVSubtitle *sub) int h = ist -> sub2video . h ; AVFilterBufferRef * ref = ist -> sub2video . ref ; int8_t * dst ; int dst_linesize ; if ( ! ref )  dst = ref -> data [ 0 ]; dst_linesize = ref -> linesize [ 0 ]; memset ( dst , 0 , ( h * dst_linesize ) ); sub2video_copy_rect ( dst , dst_linesize , w , h , sub -> rects [ i ] ); 