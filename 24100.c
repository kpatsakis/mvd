void avcodec_string(char *buf,int buf_size,AVCodecContext *enc,int encode) const char * codec_type ; const char * codec_name ; const char * profile = ( ( void * ) 0 ) ; const AVCodec * p ; AVRational display_aspect_ratio ; if ( ! buf || buf_size <= 0 )  codec_type = av_get_media_type_string ( enc -> codec_type ); codec_name = avcodec_get_name ( enc -> codec_id ); const char *avcodec_get_name(enum AVCodecID id) const AVCodecDescriptor * cd ; AVCodec * codec ; if ( id == AV_CODEC_ID_NONE )  return "none" ; cd = avcodec_descriptor_get ( id ); if ( cd )  return cd -> name ; codec = avcodec_find_decoder ( id ); AVCodec *avcodec_find_decoder(enum AVCodecID id) return find_encdec ( id , 0 ) ; static AVCodec *find_encdec(enum AVCodecID id,int encoder) AVCodec * p ; AVCodec * experimental = ( ( void * ) 0 ) ; p = first_avcodec; id = remap_deprecated_codec_id ( id ); static enum AVCodecID remap_deprecated_codec_id(enum AVCodecID id) switch ( id )  return AV_CODEC_ID_OPUS ; return AV_CODEC_ID_TAK ; return id ; while ( p )  if ( ( ( encoder ? av_codec_is_encoder ( p ) : av_codec_is_decoder ( p ) ) ) && ( p -> id ) == id )  int av_codec_is_decoder(const AVCodec *codec) return codec && codec -> decode ; int av_codec_is_encoder(const AVCodec *codec) return codec && ( codec -> encode_sub || codec -> encode2 ) ; if ( p -> capabilities & 0x0200 && ! experimental )  experimental = p; return p ; p = p -> next; return experimental ; if ( codec )  return codec -> name ; codec = avcodec_find_encoder ( id ); AVCodec *avcodec_find_encoder(enum AVCodecID id) return find_encdec ( id , 1 ) ; static AVCodec *find_encdec(enum AVCodecID id,int encoder) AVCodec * p ; AVCodec * experimental = ( ( void * ) 0 ) ; p = first_avcodec; id = remap_deprecated_codec_id ( id ); while ( p )  if ( ( ( encoder ? av_codec_is_encoder ( p ) : av_codec_is_decoder ( p ) ) ) && ( p -> id ) == id )  if ( p -> capabilities & 0x0200 && ! experimental )  experimental = p; return p ; p = p -> next; return experimental ; if ( codec )  return codec -> name ; return "unknown_codec" ; if ( enc -> profile != - 'c' )  if ( enc -> codec )  p = enc -> codec; p = ( ( encode ? avcodec_find_encoder ( enc -> codec_id ) : avcodec_find_decoder ( enc -> codec_id ) ) ); AVCodec *avcodec_find_decoder(enum AVCodecID id) return find_encdec ( id , 0 ) ; AVCodec *avcodec_find_encoder(enum AVCodecID id) return find_encdec ( id , 1 ) ; if ( p )  profile = av_get_profile_name ( p , enc -> profile ); const char *av_get_profile_name(const AVCodec *codec,int profile) const AVProfile * p ; if ( profile == - 'c' || ! codec -> profiles )  return ( ( void * ) 0 ) ; for (p = codec -> profiles; p -> profile != - 'c'; p++) if ( p -> profile == profile )  return p -> name ; return ( ( void * ) 0 ) ; snprintf ( buf , buf_size , "%s: %s%s" , ( codec_type ? codec_type : "unknown" ) , codec_name , ( enc -> mb_decision ? " (hq)" : "" ) ); buf [ 0 ] ^= 'a' ^ 'A'; if ( profile )  snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , " (%s)" , profile ); if ( enc -> codec_tag )  char tag_buf [ 32 ] ; snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , " (%s / 0x%04X)" , tag_buf , enc -> codec_tag ); switch ( enc -> codec_type )  if ( ( enc -> pix_fmt ) != AV_PIX_FMT_NONE )  snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", %s" , av_get_pix_fmt_name ( enc -> pix_fmt ) ); if ( enc -> bits_per_raw_sample && enc -> bits_per_raw_sample <= av_pix_fmt_desc_get ( enc -> pix_fmt ) -> comp [ 0 ] . depth_minus1 )  snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , " (%d bpc)" , enc -> bits_per_raw_sample ); if ( enc -> width )  snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", %dx%d" , enc -> width , enc -> height ); if ( enc -> sample_aspect_ratio . num )  snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , " [SAR %d:%d DAR %d:%d]" , enc -> sample_aspect_ratio . num , enc -> sample_aspect_ratio . den , display_aspect_ratio . num , display_aspect_ratio . den ); if ( av_log_get_level ( ) >= 48 )  int g = ( av_gcd ( enc -> time_base . num , enc -> time_base . den ) ) ; snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", %d/%d" , enc -> time_base . num / g , enc -> time_base . den / g ); snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", q=%d-%d" , enc -> qmin , enc -> qmax ); snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", %d Hz" , enc -> sample_rate ); av_strlcat ( buf , ", " , buf_size ); av_get_channel_layout_string ( buf + strlen ( buf ) , ( buf_size - strlen ( buf ) ) , enc -> channels , enc -> channel_layout ); snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", %s" , av_get_sample_fmt_name ( enc -> sample_fmt ) ); snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", %d/%d" , enc -> time_base . num / g , enc -> time_base . den / g ); snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", pass 1" ); snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", pass 2" ); snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", %d kb/s" , bitrate / 1000 ); 