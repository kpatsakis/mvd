static tvbuff_t CVE_2011_1138_PATCHED_dissect_6lowpan_hc1(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, gint dgram_size, proto_item *length_item) gint offset = 0 ; gint bit_offset ; guint8 hc1_encoding ; guint8 next_header ; struct ip6_hdr ipv6 ; offset += sizeof ( guint8 ); hc1_encoding = tvb_get_guint8 ( tvb , offset ); next_header = ( ( hc1_encoding & LOWPAN_HC1_NEXT ) >> 1 ); offset += sizeof ( guint8 ); if ( hc1_encoding & LOWPAN_HC1_MORE )  if ( next_header == LOWPAN_HC1_NEXT_UDP )  offset += sizeof ( guint8 ); bit_offset = offset << 3; ipv6 . ip6_hops = tvb_get_bits8 ( tvb , bit_offset , LOWPAN_IPV6_HOP_LIMIT_BITS ); if ( ! ( hc1_encoding & LOWPAN_HC1_DEST_PREFIX ) )  memcpy ( ipv6 . ip6_dst . bytes , lowpan_llprefix , sizeof ( lowpan_llprefix ) ); ipv6 . ip6_dst . bytes [ i ] = tvb_get_bits8 ( tvb , bit_offset , 8 ); 