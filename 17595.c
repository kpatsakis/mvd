static CVE_2013_4079_VULN_dissect_schedule_message(tvbuff_t *tvb, packet_info *pinfo, proto_tree *top_tree) guint8 len , sched_begin , sched_end , new_slots [ 48 ] ; guint8 offset = 0 ; gboolean valid_message = TRUE ; len = tvb_length ( tvb ); schedule_item = proto_tree_add_protocol_format ( top_tree , proto_cbch , tvb , 0 , len , "GSM CBCH Schedule Message" ); sched_tree = proto_item_add_subtree ( schedule_item , ett_schedule_msg ); octet1 = tvb_get_guint8 ( tvb , offset ); if ( 0 == ( octet1 & 0xC0 ) )  sched_begin = octet1 & 0x3F; proto_tree_add_item ( sched_tree , hf_gsm_cbch_sched_begin_slot , tvb , offset ++ , 1 , ENC_BIG_ENDIAN ); if ( 1 == sched_begin )  if ( ( 2 <= sched_begin ) && ( 48 >= sched_begin ) )  valid_message = FALSE; sched_end = tvb_get_guint8 ( tvb , offset ); if ( sched_end < sched_begin )  valid_message = FALSE; if ( valid_message )  memset ( & new_slots , 0xFF , sizeof ( new_slots ) ); new_slots [ k ++ ] = ( i << 3 ) + j + 1; item = proto_tree_add_text ( sched_tree , tvb , offset - 6 , 6 , "This schedule contains %d slots with new messages" , k ); sched_subtree = proto_item_add_subtree ( item , ett_schedule_new_msg ); for (i=0; i<k; i++) DISSECTOR_ASSERT ( new_slots [ i ] < 48 ); octet1 = tvb_get_guint8 ( tvb , offset ); if ( ( octet1 & 0x80 ) == 0x80 )  octet2 = tvb_get_guint8 ( tvb , offset + 1 ); msg_id = ( ( octet1 & 0x7F ) << 8 ) + octet2; proto_tree_add_text ( sched_subtree , tvb , offset , 2 , "Slot: %d, Message ID: %d, First transmission of an SMSCB within the Schedule Period" , new_slots [ i ] , msg_id ); offset += 2; other_slots [ new_slots [ i ] - 1 ] = msg_id; if ( ( octet1 & 0xC0 ) == 0 )  if ( octet1 < new_slots [ i ] )  proto_tree_add_text ( sched_subtree , tvb , offset ++ , 1 , "Slot: %d, Message ID: %d, Repeat of Slot %d" , new_slots [ i ] , other_slots [ octet1 - 1 ] , octet1 ); other_slots [ new_slots [ i ] - 1 ] = other_slots [ octet1 - 1 ]; proto_tree_add_text ( sched_subtree , tvb , offset ++ , 1 , "Slot: %d, Apparent forward reference to slot %d" , new_slots [ i ] , octet1 ); if ( octet1 == 0x40 )  proto_tree_add_text ( sched_subtree , tvb , offset ++ , 1 , "Slot: %d Free Message Slot, optional reading" , new_slots [ k ] ); other_slots [ new_slots [ i ] - 1 ] = 0xFFFE; if ( octet1 == 0x41 )  proto_tree_add_text ( sched_subtree , tvb , offset ++ , 1 , "Slot: %d Free Message Slot, reading advised" , new_slots [ k ] ); other_slots [ new_slots [ i ] - 1 ] = 0xFFFE; proto_tree_add_text ( sched_subtree , tvb , offset , 1 , "Slot: %d reserved MDT: %x" , new_slots [ k ] , octet1 ); other_slots [ new_slots [ i ] - 1 ] = 0xFFFE; proto_item_set_end ( item , tvb , offset ); item = proto_tree_add_text ( sched_tree , tvb , offset , 0 , "Other message slots in this schedule" ); sched_subtree = proto_item_add_subtree ( item , ett_schedule_new_msg ); for (k=0; offset<len; j++) while ( ( other_slots [ k ] != 0xFFFF ) && ( k < sched_end ) )  k ++; if ( k >= sched_end )  octet1 = tvb_get_guint8 ( tvb , offset ); if ( ( octet1 & 0x80 ) == 0x80 )  if ( ( offset + 1 ) < len )  octet2 = tvb_get_guint8 ( tvb , offset + 1 ); msg_id = ( ( octet1 & 0x7F ) << 8 ) + octet2; other_slots [ k ] = msg_id; proto_tree_add_text ( sched_subtree , tvb , offset , 2 , "Slot: %d, Message: %d, First transmission of an SMSCB within the Schedule Period" , ++ k , msg_id ); offset += 2; if ( ( octet1 & 0xC0 ) == 0 )  if ( octet1 < k )  other_slots [ k ] = other_slots [ octet1 - 1 ]; proto_tree_add_text ( sched_subtree , tvb , offset ++ , 1 , "Slot: %d, Message ID: %d, Repeat of Slot %d" , ++ k , other_slots [ octet1 - 1 ] , octet1 ); proto_tree_add_text ( sched_subtree , tvb , offset ++ , 1 , "Slot: %d, Apparent forward reference to slot %d" , ++ k , octet1 ); if ( octet1 == 0x40 )  proto_tree_add_text ( sched_subtree , tvb , offset ++ , 1 , "Slot: %d Free Message Slot, optional reading" , ++ k ); if ( octet1 == 0x41 )  proto_tree_add_text ( sched_subtree , tvb , offset ++ , 1 , "Slot: %d Free Message Slot, reading advised" , ++ k ); proto_tree_add_text ( sched_subtree , tvb , offset , 1 , "Slot: %d reserved MDT: %x" , ++ k , octet1 ); proto_item_set_end ( item , tvb , offset ); proto_tree_add_text ( sched_tree , tvb , offset , - 1 , "Padding" ); 