int sock_getsockopt(struct socket *sock, int level, int char __user *optval, int __user *optlen) struct sock * sk = sock -> sk ; int len ; if ( get_user ( len , optlen ) )  if ( len < 0 )  switch ( optname )  if ( len > sizeof ( peercred ) )  len = sizeof ( peercred ); return sock_getbindtodevice ( sk , optval , optlen , len ) ; static int sock_getbindtodevice(struct sock *sk, char __user int __user *optlen, int len) struct net * net = sock_net ( sk ) ; char devname [ IFNAMSIZ ] ; if ( sk -> sk_bound_dev_if == 0 )  if ( len < IFNAMSIZ )  ret = netdev_get_name ( net , devname , sk -> sk_bound_dev_if ); if ( ret )  len = strlen ( devname ) + 1; if ( copy_to_user ( optval , devname , len ) )  if ( put_user ( len , optlen ) )  