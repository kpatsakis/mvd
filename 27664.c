static dissect_catapult_dct2000(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree) gint offset = 0 ; gint context_length ; gint protocol_length ; gint timestamp_length ; gint variant_length ; gint outhdr_length ; int encap ; dissector_handle_t protocol_handle = 0 ; const char * protocol_name ; offset += context_length; offset ++; offset += timestamp_length; protocol_name = tvb_get_const_stringz ( tvb , offset , & protocol_length ); offset += protocol_length; offset += variant_length; offset += outhdr_length; offset ++; encap = tvb_get_guint8 ( tvb , offset ); offset ++; if ( ( strcmp ( protocol_name , "fp" ) == 0 ) || ( strncmp ( protocol_name , "fp_r" , 4 ) == 0 ) || ( strcmp ( protocol_name , "fpiur_r5" ) == 0 ) )  if ( ( strcmp ( protocol_name , "rlc" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r4" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r5" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r6" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r7" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r8" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r9" ) == 0 ) )  if ( ( strcmp ( protocol_name , "mac_r8_lte" ) == 0 ) || ( strcmp ( protocol_name , "mac_r9_lte" ) == 0 ) || ( strcmp ( protocol_name , "mac_r10_lte" ) == 0 ) )  if ( ( strcmp ( protocol_name , "rlc_r8_lte" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r9_lte" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r10_lte" ) == 0 ) )  if ( ( strcmp ( protocol_name , "pdcp_r8_lte" ) == 0 ) || ( strcmp ( protocol_name , "pdcp_r9_lte" ) == 0 ) || ( strcmp ( protocol_name , "pdcp_r10_lte" ) == 0 ) )  if ( ( strcmp ( protocol_name , "nas_rrc_r8_lte" ) == 0 ) || ( strcmp ( protocol_name , "nas_rrc_r9_lte" ) == 0 ) || ( strcmp ( protocol_name , "nas_rrc_r10_lte" ) == 0 ) )  gboolean nas_body_found = TRUE ; guint8 opcode = tvb_get_guint8 ( tvb , offset ) ; switch ( opcode )  nas_body_found = FALSE; if ( nas_body_found )  protocol_handle = find_dissector ( "nas-eps" ); switch ( encap )  protocol_handle = find_dissector ( "ip" ); protocol_handle = find_dissector ( "eth_withoutfcs" ); protocol_handle = find_dissector ( "lapd" ); protocol_handle = find_dissector ( "atm_untruncated" ); protocol_handle = find_dissector ( "ppp_hdlc" ); protocol_handle = find_dissector ( "sscop" ); protocol_handle = find_dissector ( "fr" ); protocol_handle = find_dissector ( "mtp2" ); protocol_handle = find_dissector ( "nbap" ); if ( ( strcmp ( protocol_name , "rlc" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r4" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r5" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r6" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r7" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r8" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r9" ) == 0 ) )  if ( ( strcmp ( protocol_name , "mac_r8_lte" ) == 0 ) || ( strcmp ( protocol_name , "mac_r9_lte" ) == 0 ) || ( strcmp ( protocol_name , "mac_r10_lte" ) == 0 ) )  protocol_handle = mac_lte_handle; if ( ( strcmp ( protocol_name , "rlc_r8_lte" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r9_lte" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r10_lte" ) == 0 ) )  protocol_handle = rlc_lte_handle; if ( ( strcmp ( protocol_name , "pdcp_r8_lte" ) == 0 ) || ( strcmp ( protocol_name , "pdcp_r9_lte" ) == 0 ) || ( strcmp ( protocol_name , "pdcp_r10_lte" ) == 0 ) )  if ( strcmp ( protocol_name , "xml" ) == 0 )  protocol_handle = find_dissector ( "xml" ); if ( strcmp ( protocol_name , "tty" ) == 0 )  if ( strcmp ( protocol_name , "sipprim" ) == 0 )  protocol_handle = find_dissector ( "sipprim" ); if ( strcmp ( protocol_name , "comment" ) == 0 )  if ( strcmp ( protocol_name , "sprint" ) == 0 )  if ( catapult_dct2000_dissect_lte_rrc && ( ( strcmp ( protocol_name , "rrc_r8_lte" ) == 0 ) || ( strcmp ( protocol_name , "rrcpdcpprim_r8_lte" ) == 0 ) || ( strcmp ( protocol_name , "rrc_r9_lte" ) == 0 ) || ( strcmp ( protocol_name , "rrcpdcpprim_r9_lte" ) == 0 ) || ( strcmp ( protocol_name , "rrc_r10_lte" ) == 0 ) ) )  if ( ( strcmp ( protocol_name , "ccpri_r8_lte" ) == 0 ) || ( strcmp ( protocol_name , "ccpri_r9_lte" ) == 0 ) )  if ( ! protocol_handle && catapult_dct2000_try_ipprim_heuristic )  heur_protocol_handle = look_for_dissector ( protocol_name ); static dissector_handle_t look_for_dissector(const char *protocol_name) if ( strcmp ( protocol_name , "tbcp" ) == 0 )  if ( strncmp ( protocol_name , "diameter" , strlen ( "diameter" ) ) == 0 )  if ( ( strcmp ( protocol_name , "xcap_caps" ) == 0 ) || ( strcmp ( protocol_name , "soap" ) == 0 ) || ( strcmp ( protocol_name , "mm1" ) == 0 ) || ( strcmp ( protocol_name , "mm3" ) == 0 ) || ( strcmp ( protocol_name , "mm7" ) == 0 ) )  if ( ( strcmp ( protocol_name , "fp" ) == 0 ) || ( strncmp ( protocol_name , "fp_r" , 4 ) == 0 ) || ( strcmp ( protocol_name , "fpiur_r5" ) == 0 ) )  if ( ( strcmp ( protocol_name , "iuup_rtp_r5" ) == 0 ) || ( strcmp ( protocol_name , "iuup_rtp_r6" ) == 0 ) )  if ( strcmp ( protocol_name , "sipt" ) == 0 )  if ( strncmp ( protocol_name , "nbap_sctp" , strlen ( "nbap_sctp" ) ) == 0 )  if ( strncmp ( protocol_name , "gtp" , strlen ( "gtp" ) ) == 0 )  