static brcmf_cfg80211_del_pmksa(struct wiphy *wiphy, struct net_device struct cfg80211_pmksa *pmksa) struct brcmf_cfg80211_info * cfg = wiphy_to_cfg ( wiphy ) ; struct brcmf_if * ifp = netdev_priv ( ndev ) ; struct brcmf_pmksa * pmk = & cfg -> pmk_list . pmk [ 0 ] ; u32 npmk , i ; if ( ! check_vif_up ( ifp -> vif ) )  static bool check_vif_up(struct brcmf_cfg80211_vif *vif) if ( ! test_bit ( BRCMF_VIF_STATUS_READY , & vif -> sme_state ) )  return false ; return true ; npmk = le32_to_cpu ( cfg -> pmk_list . npmk ); for (i = 0; i < npmk; i++) if ( ! memcmp ( & pmksa -> bssid , & pmk [ i ] . bssid , ETH_ALEN ) )  if ( ( npmk > 0 ) && ( i < npmk ) )  for (; i < (npmk - 1); i++) memcpy ( & pmk [ i ] . bssid , & pmk [ i + 1 ] . bssid , ETH_ALEN ); memcpy ( & pmk [ i ] . pmkid , & pmk [ i + 1 ] . pmkid , WLAN_PMKID_LEN ); memset ( & pmk [ i ] , 0 , sizeof ( * pmk ) ); 