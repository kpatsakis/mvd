static void CVE_2006_6106_PATCHED_cmtp_recv_interopmsg(struct cmtp_session *session, struct sk_buff *skb) struct capi_ctr * ctrl = & session -> ctrl ; __u16 appl , msgnum , func , info ; switch ( CAPIMSG_SUBCOMMAND ( skb -> data ) )  if ( skb -> len < CAPI_MSG_BASELEN + 10 )  func = CAPIMSG_U16 ( skb -> data , CAPI_MSG_BASELEN + 5 ); info = CAPIMSG_U16 ( skb -> data , CAPI_MSG_BASELEN + 8 ); switch ( func )  msgnum = CAPIMSG_MSGID ( skb -> data ); if ( skb -> len < CAPI_MSG_BASELEN + 11 + sizeof ( capi_profile ) )  msgnum = CAPIMSG_MSGID ( skb -> data ); if ( ! info && ( msgnum == CMTP_INITIAL_MSGNUM ) )  if ( ! info && ctrl )  memcpy ( & ctrl -> profile , skb -> data + CAPI_MSG_BASELEN + 11 , sizeof ( capi_profile ) ); if ( skb -> len < CAPI_MSG_BASELEN + 15 )  if ( ! info && ctrl )  int len = min_t ( uint , CAPI_MANUFACTURER_LEN , skb -> data [ CAPI_MSG_BASELEN + 14 ] ) ; memset ( ctrl -> manu , 0 , CAPI_MANUFACTURER_LEN ); strncpy ( ctrl -> manu , skb -> data + CAPI_MSG_BASELEN + 15 , len ); if ( ! info && ctrl )  ctrl -> version . majorversion = CAPIMSG_U32 ( skb -> data , CAPI_MSG_BASELEN + 16 ); ctrl -> version . minorversion = CAPIMSG_U32 ( skb -> data , CAPI_MSG_BASELEN + 20 ); ctrl -> version . majormanuversion = CAPIMSG_U32 ( skb -> data , CAPI_MSG_BASELEN + 24 ); ctrl -> version . minormanuversion = CAPIMSG_U32 ( skb -> data , CAPI_MSG_BASELEN + 28 ); if ( ! info && ctrl )  memset ( ctrl -> serial , 0 , CAPI_SERIAL_LEN ); strncpy ( ctrl -> serial , skb -> data + CAPI_MSG_BASELEN + 17 , len ); 