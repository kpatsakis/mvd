int show_help(void *optctx,const char *opt,const char *arg) char * topic ; char * par ; topic = av_strdup ( ( arg ? arg : "" ) ); par = strchr ( topic , '=' ); if ( par )  * ( par ++ ) = 0; if ( ! ( * topic ) )  if ( ! strcmp ( topic , "decoder" ) )  show_help_codec ( par , 0 ); static void show_help_codec(const char *name,int encoder) const AVCodecDescriptor * desc ; const AVCodec * codec ; if ( ! name )  codec = ( ( encoder ? avcodec_find_encoder_by_name ( name ) : avcodec_find_decoder_by_name ( name ) ) ); if ( codec )  if ( desc = avcodec_descriptor_get_by_name ( name ) )  while ( codec = next_codec_for_id ( desc -> id , codec , encoder ) )  print_codec ( codec ); static void print_codec(const AVCodec *c) if ( c -> pix_fmts )  const enum AVPixelFormat * p = c -> pix_fmts ; while ( ( * p ) != AV_PIX_FMT_NONE )  p ++; if ( c -> supported_samplerates )  const int * p = c -> supported_samplerates ; while ( * p != 0 )  char name [ 16 ] ; snprintf ( name , sizeof ( name ) , "%d" , * p ); printf ( " %s" , name ); p ++; printf ( " %s" , name ); av_get_channel_layout_string ( name , ( sizeof ( name ) ) , 0 , * p ); printf ( " %s" , name ); 