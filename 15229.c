int avcodec_decode_video2(AVCodecContext *avctx,AVFrame *picture,int *got_picture_ptr,const AVPacket *avpkt) if ( ( avctx -> codec -> type ) != AVMEDIA_TYPE_VIDEO )  if ( ( avctx -> coded_width || avctx -> coded_height ) && av_image_check_size ( ( avctx -> coded_width ) , ( avctx -> coded_height ) , 0 , avctx ) )  if ( avctx -> codec -> capabilities & 0x20 || avpkt -> size || avctx -> active_thread_type & 1 )  avctx -> pkt = & tmp; if ( 1 && avctx -> active_thread_type & 1 )  picture -> pkt_dts = avpkt -> dts; if ( ! ( avctx -> codec -> capabilities & 0x02 ) )  if ( ! picture -> sample_aspect_ratio . num )  picture -> sample_aspect_ratio = avctx -> sample_aspect_ratio; if ( ! picture -> width )  picture -> width = avctx -> width; if ( ! picture -> height )  picture -> height = avctx -> height; if ( picture -> format == AV_PIX_FMT_NONE )  picture -> format = ( avctx -> pix_fmt ); add_metadata_from_side_data ( avctx , picture ); static int add_metadata_from_side_data(AVCodecContext *avctx,AVFrame *frame) int size ; const uint8_t * side_metadata ; const uint8_t * end ; side_metadata = ( av_packet_get_side_data ( avctx -> pkt , AV_PKT_DATA_STRINGS_METADATA , & size ) ); if ( ! side_metadata )  end = side_metadata + size; while ( side_metadata < end )  const uint8_t * key = side_metadata ; const uint8_t * val = side_metadata + strlen ( key ) + 1 ; int ret = av_dict_set ( ff_frame_get_metadatap ( frame ) , key , val , 0 ) ; AVDictionary **ff_frame_get_metadatap(AVFrame *frame) return & frame -> metadata ; if ( ret < 0 )  side_metadata = val + strlen ( val ) + 1; return ret ; 