static gboolean vwr_read(wtap *wth, int *err, gchar **err_info, gint64 *data_offset) vwr_t * vwr = ( vwr_t * ) wth -> priv ; guint8 rec [ B_SIZE ] ; int rec_size = 0 , IS_TX ; guint8 * data_ptr ; if ( ! vwr_read_rec_header ( vwr , wth -> fh , & rec_size , & IS_TX , err , err_info ) )  static gboolean vwr_read_rec_header(vwr_t *vwr, FILE_T fh, int *rec_size, int *IS_TX, int *err, gchar **err_info) int bytes_read , file_off ; int f_len , v_type ; guint8 header [ 16 ] ; while ( 1 )  if ( ( bytes_read = file_read ( header , 16 , fh ) ) != 16 )  return ( FALSE ) ; if ( ( f_len = decode_msg ( vwr , header , & v_type , IS_TX ) ) != 0 )  static int decode_msg(vwr_t *vwr, guint8 *rec, int *v_type, int *IS_TX) guint8 cmd ; guint32 wd2 , wd3 ; int v_size = 0 ; cmd = rec [ 0 ]; wd2 = pntohl ( & rec [ 8 ] ); wd3 = pntohl ( & rec [ 12 ] ); switch ( cmd )  v_size = ( int ) ( wd2 & 0xffff ); v_size = ( int ) ( wd2 & 0xffff ); v_size = ( int ) ( wd3 & 0xffff ); return ( v_size ) ; if ( f_len > B_SIZE )  return ( FALSE ) ; if ( v_type != VT_FRAME )  if ( file_seek ( fh , f_len , SEEK_CUR , err ) < 0 )  return ( FALSE ) ; return ( TRUE ) ; if ( file_read ( rec , rec_size , wth -> fh ) != rec_size )  data_ptr = buffer_start_ptr ( wth -> frame_buffer ); switch ( vwr -> FPGA_VERSION )  vwr_read_rec_data_vVW510021 ( wth , data_ptr , rec , rec_size , IS_TX ); static void vwr_read_rec_data_vVW510021(wtap *wth, guint8 *data_ptr, guint8 *rec, int rec_size, int IS_TX) vwr_t * vwr = ( vwr_t * ) wth -> priv ; int bytes_written = 0 ; int PLCP_OFF = 8 ; register int i register guint8 * s_start_ptr , * s_trail_ptr , * m_ptr , * plcp_ptr ; gint16 msdu_length , actual_octets ; guint8 l1p_1 , l1p_2 , flow_seq , plcp_type , mcs_index ; guint16 info , validityBits ; guint32 errors ; gint16 rssi ; int f_tx ; guint8 rate ; guint16 vc_id , ht_len = 0 ; ext_rtap_fields er_fields ; gint8 tx_power = 0 ; guint16 chanflags = 0 ; guint16 radioflags = 0 ; s_start_ptr = & ( rec [ 0 ] ); s_trail_ptr = & ( rec [ rec_size - vwr -> STATS_LEN ] ); l1p_1 = s_start_ptr [ vwr -> L1P_1_OFF ]; mcs_index = l1p_1 & ( guint8 ) vVW510021_W_MCS_MASK; l1p_2 = s_start_ptr [ vwr -> L1P_2_OFF ]; plcp_type = l1p_2 & ( guint8 ) vVW510021_W_PLCPC_MASK; msdu_length = ( 256 * ( s_start_ptr [ vwr -> OCTET_OFF + 1 ] & 0x1f ) ) + s_start_ptr [ vwr -> OCTET_OFF ]; actual_octets = msdu_length; f_tx = IS_TX; errors = pntohl ( & s_trail_ptr [ vwr -> ERRORS_OFF ] ); info = pntohs ( & s_trail_ptr [ vwr -> INFO_OFF ] ); if ( ( info & 0xFC00 ) != 0 )  ht_len = pletohs ( & s_start_ptr [ vwr -> PLCP_LENGTH_OFF ] ); rssi = s_start_ptr [ vwr -> RSSI_OFF ]; if ( f_tx )  if ( rssi & 0x80 )  tx_power = - 1 * ( rssi & 0x7f ); tx_power = rssi & 0x7f; if ( rssi > 128 )  rssi = rssi - 256; plcp_ptr = & ( rec [ PLCP_OFF ] ); if ( plcp_type == vVW510021_W_PLCP_LEGACY )  if ( mcs_index < 4 )  rate = get_cck_rate ( plcp_ptr ); static guint8 get_cck_rate(guint8 *plcp) switch ( plcp [ 0 ] )  return ( 1 * 2 ) ; return ( 2 * 2 ) ; return ( 11 ) ; return ( 11 * 2 ) ; return ( 0 ) ; chanflags |= CHAN_CCK; rate = get_ofdm_rate ( plcp_ptr ); static guint8 get_ofdm_rate(guint8 *plcp) switch ( plcp [ 0 ] & 0x0f )  return ( 6 * 2 ) ; return ( 9 * 2 ) ; return ( 12 * 2 ) ; return ( 18 * 2 ) ; return ( 24 * 2 ) ; return ( 36 * 2 ) ; return ( 48 * 2 ) ; return ( 54 * 2 ) ; return ( 0 ) ; chanflags |= CHAN_OFDM; if ( plcp_type == vVW510021_W_PLCP_MIXED )  rate = ( plcp_ptr [ 3 ] & 0x7f ) + ( plcp_ptr [ 6 ] & 0x80 ); radioflags |= RADIOTAP_F_CHAN_HT | ( ( plcp_ptr [ 3 ] & 0x80 ) ? RADIOTAP_F_CHAN_40MHZ : 0 ) | ( ( plcp_ptr [ 6 ] & 0x80 ) ? RADIOTAP_F_CHAN_SHORTGI : 0 ); chanflags |= CHAN_OFDM; if ( plcp_type == vVW510021_W_PLCP_GREENFIELD )  rate = ( plcp_ptr [ 0 ] & 0x7f ) + ( plcp_ptr [ 3 ] & 0x80 ); radioflags |= RADIOTAP_F_CHAN_HT | ( ( plcp_ptr [ 0 ] & 0x80 ) ? RADIOTAP_F_CHAN_40MHZ : 0 ) | ( ( plcp_ptr [ 3 ] & 0x80 ) ? RADIOTAP_F_CHAN_SHORTGI : 0 ); chanflags |= CHAN_OFDM; rate = 1; m_ptr = & ( rec [ 8 + 12 ] ); if ( msdu_length > ( rec_size - ( int ) vwr -> STATS_LEN ) )  msdu_length = ( rec_size - ( int ) vwr -> STATS_LEN ); er_fields . it_len = EXT_RTAP_FIELDS_LEN; er_fields . flags = radioflags; if ( info & vVW510021_W_IS_WEP )  er_fields . flags |= RADIOTAP_F_WEP; if ( ( l1p_1 & vVW510021_W_PREAMBLE_MASK ) != vVW510021_W_IS_LONGPREAMBLE )  er_fields . flags |= RADIOTAP_F_SHORTPRE; er_fields . rate = rate; er_fields . chanflags = chanflags; if ( f_tx )  er_fields . tx_power = ( gint8 ) tx_power; er_fields . signal = 100; er_fields . tx_power = 100; er_fields . signal = ( gint8 ) rssi; er_fields . vw_flags = 0; if ( f_tx )  er_fields . vw_flags |= RADIOTAP_VWF_TXF; if ( errors & vwr -> FCS_ERROR )  er_fields . vw_flags |= RADIOTAP_VWF_FCSERR; if ( ! f_tx && ( errors & vwr -> CRYPTO_ERR ) )  er_fields . vw_flags |= RADIOTAP_VWF_DCRERR; if ( ! f_tx && ( errors & vwr -> RETRY_ERR ) )  er_fields . vw_flags |= RADIOTAP_VWF_RETRERR; if ( info & vwr -> WEPTYPE )  er_fields . vw_flags |= RADIOTAP_VWF_IS_WEP; if ( info & vwr -> TKIPTYPE )  er_fields . vw_flags |= RADIOTAP_VWF_IS_TKIP; if ( info & vwr -> CCMPTYPE )  er_fields . vw_flags |= RADIOTAP_VWF_IS_CCMP; er_fields . vw_errors = ( guint32 ) errors; er_fields . vw_ht_length = ( guint16 ) ht_len; er_fields . vw_info = ( guint16 ) info; bytes_written += 2; bytes_written += 2; bytes_written += 2; memset ( & data_ptr [ bytes_written ] , 0 , 2 ); bytes_written += 2; bytes_written += 4; bytes_written += 2; bytes_written += 2; bytes_written += 4; bytes_written += 4; bytes_written += 8; bytes_written += 8; bytes_written += 4; memset ( & data_ptr [ bytes_written ] , 0 , 4 ); bytes_written += 4; bytes_written += 2; bytes_written += 2; bytes_written += 2; data_ptr [ bytes_written ] = er_fields . rate; bytes_written += 1; data_ptr [ bytes_written ] = er_fields . signal; bytes_written += 1; data_ptr [ bytes_written ] = er_fields . tx_power; bytes_written += 1; data_ptr [ bytes_written ] = 0; bytes_written += 1; bytes_written += 2; bytes_written += 2; bytes_written += 2; bytes_written += 4; if ( rec_size < ( ( int ) actual_octets + ( int ) vwr -> STATS_LEN ) )  memcpy ( & data_ptr [ bytes_written ] , m_ptr , msdu_length ); memcpy ( & data_ptr [ bytes_written ] , m_ptr , msdu_length - 4 ); 