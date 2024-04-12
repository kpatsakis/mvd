static int reap_filters() AVFilterBufferRef * picref ; int i ; int64_t frame_pts ; for (i = 0; i < nb_output_streams; i++) OutputStream * ost = output_streams [ i ] ; OutputFile * of = output_files [ ost -> file_index ] ; if ( ! ost -> filter )  if ( ! ost -> filtered_frame && ! ( ost -> filtered_frame = avcodec_alloc_frame ( ) ) )  filtered_frame = ost -> filtered_frame; while ( 1 )  ret = av_buffersink_get_buffer_ref ( ost -> filter -> filter , & picref , 2 ); if ( ret < 0 )  frame_pts = ( ( int64_t ) 0x8000000000000000UL ); if ( picref -> pts != ( ( int64_t ) 0x8000000000000000UL ) )  filtered_frame -> pts = frame_pts = av_rescale_q ( picref -> pts , ost -> filter -> filter -> inputs [ 0 ] -> time_base , ost -> st -> codec -> time_base ) - av_rescale_q ( of -> start_time , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) , ost -> st -> codec -> time_base ) if ( of -> start_time && filtered_frame -> pts < 0 )  switch ( ost -> filter -> filter -> inputs [ 0 ] -> type )  filtered_frame -> pts = frame_pts; if ( ! ost -> frame_aspect_ratio )  ost -> st -> codec -> sample_aspect_ratio = picref -> video -> sample_aspect_ratio; filtered_frame -> pts = frame_pts; if ( ! ( ost -> st -> codec -> codec -> capabilities & 0x4000 ) && ost -> st -> codec -> channels != av_frame_get_channels ( filtered_frame ) )  do_audio_out ( of -> ctx , ost , filtered_frame ); static void do_audio_out(AVFormatContext *s,OutputStream *ost,AVFrame *frame) if ( ! check_recording_time ( ost ) )  if ( frame -> pts == ( ( int64_t ) 0x8000000000000000UL ) || audio_sync_method < 0 )  frame -> pts = ost -> sync_opts; ost -> sync_opts = frame -> pts + ( frame -> nb_samples ); update_benchmark ( "encode_audio %d.%d" , ost -> file_index , ost -> index ); static void update_benchmark(const char *fmt,... ) if ( do_benchmark_all )  va_list va ; char buf [ 1024 ] ; if ( fmt )  vsnprintf ( buf , sizeof ( buf ) , fmt , va ); printf ( "bench: %8lu %s \n" , t - current_time , buf ); 