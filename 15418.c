static brcmf_cfg80211_connect(struct wiphy *wiphy, struct net_device struct cfg80211_connect_params *sme) struct brcmf_cfg80211_info * cfg = wiphy_to_cfg ( wiphy ) ; struct brcmf_if * ifp = netdev_priv ( ndev ) ; struct ieee80211_channel * chan = sme -> channel ; size_t join_params_size ; struct brcmf_ext_join_params_le * ext_join_params ; u32 ssid_len ; if ( ! check_vif_up ( ifp -> vif ) )  static bool check_vif_up(struct brcmf_cfg80211_vif *vif) if ( ! test_bit ( BRCMF_VIF_STATUS_READY , & vif -> sme_state ) )  return false ; return true ; if ( ! sme -> ssid )  err = brcmf_vif_set_mgmt_ie ( ifp -> vif , BRCMF_VNDR_IE_ASSOCREQ_FLAG , sme -> ie , sme -> ie_len ); s32 brcmf_vif_set_mgmt_ie(struct brcmf_cfg80211_vif *vif, s32 const u8 *vndr_ie_buf, u32 vndr_ie_len) struct brcmf_if * ifp ; struct vif_saved_ie * saved_ie ; s32 err = 0 ; u8 * iovar_ie_buf ; u8 * curr_ie_buf ; int mgmt_ie_buf_len ; u32 * mgmt_ie_len ; u32 total_ie_buf_len = 0 ; u32 parsed_ie_buf_len = 0 ; struct parsed_vndr_ies old_vndr_ies ; struct parsed_vndr_ies new_vndr_ies ; struct parsed_vndr_ie_info * vndrie_info ; s32 i ; int remained_buf_len ; if ( ! vif )  return - ENODEV ; ifp = vif -> ifp; saved_ie = & vif -> saved_ie; iovar_ie_buf = kzalloc ( WL_EXTRA_BUF_MAX , GFP_KERNEL ); if ( ! iovar_ie_buf )  return - ENOMEM ; curr_ie_buf = iovar_ie_buf; switch ( pktflag )  mgmt_ie_buf = saved_ie -> probe_req_ie; mgmt_ie_len = & saved_ie -> probe_req_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> probe_req_ie ); mgmt_ie_buf = saved_ie -> probe_res_ie; mgmt_ie_len = & saved_ie -> probe_res_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> probe_res_ie ); mgmt_ie_buf = saved_ie -> beacon_ie; mgmt_ie_len = & saved_ie -> beacon_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> beacon_ie ); mgmt_ie_buf = saved_ie -> assoc_req_ie; mgmt_ie_len = & saved_ie -> assoc_req_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> assoc_req_ie ); err = - EPERM; if ( vndr_ie_len > mgmt_ie_buf_len )  err = - ENOMEM; if ( vndr_ie_buf && vndr_ie_len && curr_ie_buf )  for (i = 0; i < new_vndr_ies.count; i++) vndrie_info = & new_vndr_ies . ie_info [ i ]; parsed_ie_buf_len += vndrie_info -> ie_len; if ( mgmt_ie_buf && * mgmt_ie_len )  if ( parsed_ie_buf_len && ( parsed_ie_buf_len == * mgmt_ie_len ) && ( memcmp ( mgmt_ie_buf , curr_ie_buf , parsed_ie_buf_len ) == 0 ) )  for (i = 0; i < old_vndr_ies.count; i++) vndrie_info = & old_vndr_ies . ie_info [ i ]; del_add_ie_buf_len = brcmf_vndr_ie ( curr_ie_buf , pktflag , vndrie_info -> ie_ptr , vndrie_info -> ie_len , "del" ); static brcmf_vndr_ie(u8 *iebuf, s32 pktflag, u8 *ie_ptr, u32 ie_len, s8 *add_del_cmd) return ie_len + VNDR_IE_HDR_SIZE ; curr_ie_buf += del_add_ie_buf_len; total_ie_buf_len += del_add_ie_buf_len; if ( mgmt_ie_buf && parsed_ie_buf_len )  remained_buf_len = mgmt_ie_buf_len; for (i = 0; i < new_vndr_ies.count; i++) vndrie_info = & new_vndr_ies . ie_info [ i ]; if ( remained_buf_len < ( vndrie_info -> vndrie . len + VNDR_IE_VSIE_OFFSET ) )  remained_buf_len -= ( vndrie_info -> ie_len + VNDR_IE_VSIE_OFFSET ); del_add_ie_buf_len = brcmf_vndr_ie ( curr_ie_buf , pktflag , vndrie_info -> ie_ptr , vndrie_info -> ie_len , "add" ); static brcmf_vndr_ie(u8 *iebuf, s32 pktflag, u8 *ie_ptr, u32 ie_len, s8 *add_del_cmd) return ie_len + VNDR_IE_HDR_SIZE ; curr_ie_buf += del_add_ie_buf_len; total_ie_buf_len += del_add_ie_buf_len; if ( total_ie_buf_len )  err = brcmf_fil_bsscfg_data_set ( ifp , "vndr_ie" , iovar_ie_buf , total_ie_buf_len ); return err ; if ( chan )  cfg -> channel = ieee80211_frequency_to_channel ( chan -> center_freq ); cfg -> channel = 0; err = brcmf_set_wpa_version ( ndev , sme ); static s32 brcmf_set_wpa_version(struct net_device struct cfg80211_connect_params *sme) if ( sme -> crypto . wpa_versions & NL80211_WPA_VERSION_1 )  val = WPA_AUTH_PSK | WPA_AUTH_UNSPECIFIED; if ( sme -> crypto . wpa_versions & NL80211_WPA_VERSION_2 )  val = WPA2_AUTH_PSK | WPA2_AUTH_UNSPECIFIED; val = WPA_AUTH_DISABLED; err = brcmf_fil_bsscfg_int_set ( netdev_priv ( ndev ) , "wpa_auth" , val ); if ( err )  return err ; return err ; if ( err )  sme -> auth_type = brcmf_war_auth_type ( ifp , sme -> auth_type );  enum nl80211_auth_type brcmf_war_auth_type(struct brcmf_if enum nl80211_auth_type type) if ( type == NL80211_AUTHTYPE_AUTOMATIC && brcmf_feat_is_quirk_enabled ( ifp , BRCMF_FEAT_QUIRK_AUTO_AUTH ) )  type = NL80211_AUTHTYPE_OPEN_SYSTEM; return type ; err = brcmf_set_auth_type ( ndev , sme ); static s32 brcmf_set_auth_type(struct net_device struct cfg80211_connect_params *sme) switch ( sme -> auth_type )  val = 0; val = 1; val = 2; val = 2; err = brcmf_fil_bsscfg_int_set ( netdev_priv ( ndev ) , "auth" , val ); if ( err )  return err ; return err ; if ( err )  err = brcmf_set_wsec_mode ( ndev , sme ); static brcmf_set_wsec_mode(struct net_device struct cfg80211_connect_params *sme) s32 pval = 0 ; s32 gval = 0 ; s32 wsec ; if ( sme -> crypto . n_ciphers_pairwise )  switch ( sme -> crypto . ciphers_pairwise [ 0 ] )  pval = WEP_ENABLED; pval = TKIP_ENABLED; pval = AES_ENABLED; pval = AES_ENABLED; return - EINVAL ; if ( sme -> crypto . cipher_group )  switch ( sme -> crypto . cipher_group )  gval = WEP_ENABLED; gval = TKIP_ENABLED; gval = AES_ENABLED; gval = AES_ENABLED; return - EINVAL ; if ( brcmf_find_wpsie ( sme -> ie , sme -> ie_len ) && ! pval && ! gval && sme -> privacy )  static struct brcmf_vs_tlv brcmf_find_wpsie(const u8 *parse, u32 len) const struct brcmf_tlv * ie ; while ( ie = brcmf_parse_tlvs ( parse , len , WLAN_EID_VENDOR_SPECIFIC ) )  const struct brcmf_tlv brcmf_parse_tlvs(const void *buf, int buflen, uint key) const struct brcmf_tlv * elt = buf ; int totlen = buflen ; while ( totlen >= TLV_HDR_LEN )  int len = elt -> len ; if ( ( elt -> id == key ) && ( totlen >= ( len + TLV_HDR_LEN ) ) )  return elt ; elt = ( struct brcmf_tlv * ) ( ( u8 * ) elt + ( len + TLV_HDR_LEN ) ); totlen -= ( len + TLV_HDR_LEN ); return NULL ; if ( brcmf_tlv_has_ie ( ( u8 * ) ie , & parse , & len , WPA_OUI , TLV_OUI_LEN , WPS_OUI_TYPE ) )  static brcmf_tlv_has_ie(const u8 *ie, const u8 **tlvs, u32 const u8 *oui, u32 oui_len, u8 type) if ( ie [ TLV_LEN_OFF ] >= oui_len + 1 && ! memcmp ( & ie [ TLV_BODY_OFF ] , oui , oui_len ) && type == ie [ TLV_BODY_OFF + oui_len ] )  return true ; if ( tlvs == NULL )  return false ; return false ; return ( struct brcmf_vs_tlv * ) ie ; return NULL ; pval = AES_ENABLED; wsec = pval | gval; err = brcmf_fil_bsscfg_int_set ( netdev_priv ( ndev ) , "wsec" , wsec ); if ( err )  return err ; return err ; if ( err )  err = brcmf_set_key_mgmt ( ndev , sme ); static brcmf_set_key_mgmt(struct net_device *ndev, struct cfg80211_connect_params *sme) s32 val ; s32 err ; if ( ! sme -> crypto . n_akm_suites )  return 0 ; err = brcmf_fil_bsscfg_int_get ( netdev_priv ( ndev ) , "wpa_auth" , & val ); if ( err )  return err ; if ( val & ( WPA_AUTH_PSK | WPA_AUTH_UNSPECIFIED ) )  switch ( sme -> crypto . akm_suites [ 0 ] )  val = WPA_AUTH_UNSPECIFIED; val = WPA_AUTH_PSK; return - EINVAL ; if ( val & ( WPA2_AUTH_PSK | WPA2_AUTH_UNSPECIFIED ) )  switch ( sme -> crypto . akm_suites [ 0 ] )  val = WPA2_AUTH_UNSPECIFIED; val = WPA2_AUTH_1X_SHA256; val = WPA2_AUTH_PSK_SHA256; val = WPA2_AUTH_PSK; return - EINVAL ; err = brcmf_fil_bsscfg_int_set ( netdev_priv ( ndev ) , "wpa_auth" , val ); if ( err )  return err ; return err ; if ( err )  err = brcmf_set_sharedkey ( ndev , sme ); static brcmf_set_sharedkey(struct net_device struct cfg80211_connect_params *sme) struct brcmf_cfg80211_profile * profile = ndev_to_prof ( ndev ) ; struct brcmf_cfg80211_security * sec ; struct brcmf_wsec_key key ; s32 val ; if ( sme -> key_len == 0 )  return 0 ; sec = & profile -> sec; if ( sec -> wpa_versions & ( NL80211_WPA_VERSION_1 | NL80211_WPA_VERSION_2 ) )  return 0 ; if ( ! ( sec -> cipher_pairwise & ( WLAN_CIPHER_SUITE_WEP40 | WLAN_CIPHER_SUITE_WEP104 ) ) )  return 0 ; memset ( & key , 0 , sizeof ( key ) ); key . len = ( u32 ) sme -> key_len; key . index = ( u32 ) sme -> key_idx; if ( key . len > sizeof ( key . data ) )  return - EINVAL ; memcpy ( key . data , sme -> key , key . len ); key . flags = BRCMF_PRIMARY_KEY; switch ( sec -> cipher_pairwise )  key . algo = CRYPTO_ALGO_WEP1; key . algo = CRYPTO_ALGO_WEP128; return - EINVAL ; err = send_key_to_dongle ( netdev_priv ( ndev ) , & key ); static send_key_to_dongle(struct brcmf_if *ifp, struct brcmf_wsec_key *key) int err ; err = brcmf_fil_bsscfg_data_set ( ifp , "wsec_key" , & key_le , sizeof ( key_le ) ); return err ; if ( err )  return err ; if ( sec -> auth_type == NL80211_AUTHTYPE_SHARED_KEY )  val = WL_AUTH_SHARED_KEY; err = brcmf_fil_bsscfg_int_set ( netdev_priv ( ndev ) , "auth" , val ); return err ; if ( err )  join_params_size = offsetof ( struct brcmf_ext_join_params_le , assoc_le ) offsetof ( struct brcmf_assoc_params_le , chanspec_list ) if ( cfg -> channel )  join_params_size += sizeof ( u16 ); ext_join_params = kzalloc ( join_params_size , GFP_KERNEL ); if ( ext_join_params == NULL )  ssid_len = min_t ( u32 , sme -> ssid_len , IEEE80211_MAX_SSID_LEN ); ext_join_params -> ssid_le . SSID_len = cpu_to_le32 ( ssid_len ); memcpy ( & ext_join_params -> ssid_le . SSID , sme -> ssid , ssid_len ); brcmf_dbg ( CONN , "SSID \"%s\", len (%d)\n" , ext_join_params -> ssid_le . SSID , ssid_len ); 