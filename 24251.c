int ff_reget_buffer(AVCodecContext *avctx, AVFrame *frame) int ret = reget_buffer_internal ( avctx , frame ) ; static int reget_buffer_internal(AVCodecContext *avctx, AVFrame *frame) if ( ! frame -> data [ 0 ] )  if ( av_frame_is_writable ( frame ) )  return ff_decode_frame_props ( avctx , frame ) ; int ff_decode_frame_props(AVCodecContext *avctx, AVFrame *frame) return ff_init_buffer_info ( avctx , frame ) ; int ff_init_buffer_info(AVCodecContext *avctx, AVFrame *frame) AVPacket * pkt = avctx -> internal -> pkt ; int i ; sd [ ] AV_PKT_DATA_REPLAYGAIN , AV_FRAME_DATA_REPLAYGAIN AV_PKT_DATA_DISPLAYMATRIX , AV_FRAME_DATA_DISPLAYMATRIX AV_PKT_DATA_STEREO3D , AV_FRAME_DATA_STEREO3D AV_PKT_DATA_AUDIO_SERVICE_TYPE , AV_FRAME_DATA_AUDIO_SERVICE_TYPE , if ( pkt )  frame -> pkt_pts = pkt -> pts; for (i = 0; i < FF_ARRAY_ELEMS(sd); i++) int size ; uint8_t * packet_sd = av_packet_get_side_data ( pkt , sd [ i ] . packet , & size ) ; if ( packet_sd )  AVFrameSideData * frame_sd = av_frame_new_side_data ( frame , sd [ i ] . frame , size ) ; if ( ! frame_sd )  memcpy ( frame_sd -> data , packet_sd , size ); 