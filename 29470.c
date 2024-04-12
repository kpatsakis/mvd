int avcodec_decode_audio3(AVCodecContext *avctx,int16_t *samples,int *frame_size_ptr,AVPacket *avpkt) AVFrame frame = { { ( 0 ) } } ; int ret ; int got_frame = 0 ; if ( avctx -> get_buffer != avcodec_default_get_buffer )  avctx -> get_buffer = avcodec_default_get_buffer; avctx -> release_buffer = avcodec_default_release_buffer; ret = avcodec_decode_audio4 ( avctx , & frame , & got_frame , avpkt ); int avcodec_decode_audio4(AVCodecContext *avctx,AVFrame *frame,int *got_frame_ptr,const AVPacket *avpkt) int ret = 0 ; * got_frame_ptr = 0; if ( ! avpkt -> data && avpkt -> size )  return - 22 ; if ( ( avctx -> codec -> type ) != AVMEDIA_TYPE_AUDIO )  return - 22 ; if ( avctx -> codec -> capabilities & 0x20 || avpkt -> size )  AVPacket tmp = * avpkt ; int did_split = av_packet_split_side_data ( & tmp ) ; avctx -> pkt = & tmp; ret = ( ( avctx -> codec -> decode ) ( avctx , frame , got_frame_ptr , & tmp ) ); if ( did_split )  if ( ret == tmp . size )  ret = avpkt -> size; return ret ; if ( ret >= 0 && got_frame )  int ch ; int plane_size ; int planar = av_sample_fmt_is_planar ( avctx -> sample_fmt ) ; int data_size = av_samples_get_buffer_size ( & plane_size , avctx -> channels , frame . nb_samples , avctx -> sample_fmt , 1 ) ; if ( * frame_size_ptr < data_size )  memcpy ( samples , frame . extended_data [ 0 ] , plane_size ); if ( planar && avctx -> channels > 1 )  uint8_t * out = ( ( uint8_t * ) samples ) + plane_size ; for (ch = 1; ch < avctx -> channels; ch++) memcpy ( out , frame . extended_data [ ch ] , plane_size ); out += plane_size; 