static int CVE_2013_0851_PATCHED_decode_frame(AVCodecContext void *data, int AVPacket *avpkt) const uint8_t * buf = avpkt -> data ; int buf_size = avpkt -> size ; const uint8_t * buf_end = buf + buf_size ; MadContext * s = avctx -> priv_data ; int width , height ; if ( buf_size < 26 )  buf += 8; width = AV_RL16 ( & buf [ 8 ] ); height = AV_RL16 ( & buf [ 10 ] ); buf += 16; if ( avctx -> width != width || avctx -> height != height )  if ( ( width * height ) / 2048 * 7 > buf_end - buf )  if ( av_image_check_size ( width , height , 0 , avctx ) < 0 )  s -> frame . reference = 3; if ( ! s -> frame . data [ 0 ] )  if ( avctx -> get_buffer ( avctx , & s -> frame ) < 0 )  if ( ! s -> bitstream_buf )  memset ( ( uint8_t * ) s -> bitstream_buf + ( buf_end - buf ) , 0 , FF_INPUT_BUFFER_PADDING_SIZE ); 