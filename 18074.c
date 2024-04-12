proto_item proto_tree_add_split_bits_item_ret_val(proto_tree *tree, const int hfindex, tvbuff_t const guint bit_offset, const crumb_spec_t guint64 *return_value) proto_item * pi ; gint no_of_bits ; gint octet_offset ; guint mask_initial_bit_offset ; guint mask_greatest_bit_offset ; guint octet_length ; guint8 i ; char lbl_str [ ITEM_LABEL_LENGTH ] ; guint64 value ; header_field_info * hf_field ; mask_initial_bit_offset = bit_offset % 8; no_of_bits = 0; value = 0; i = 0; mask_greatest_bit_offset = 0; while ( crumb_spec [ i ] . crumb_bit_length != 0 )  guint64 crumb_mask , crumb_value ; guint8 crumb_end_bit_offset ; crumb_value = tvb_get_bits64 ( tvb , bit_offset + crumb_spec [ i ] . crumb_bit_offset , crumb_spec [ i ] . crumb_bit_length , ENC_BIG_ENDIAN ); value += crumb_value; no_of_bits += crumb_spec [ i ] . crumb_bit_length; if ( mask_greatest_bit_offset < 32 )  crumb_end_bit_offset = mask_initial_bit_offset + crumb_spec [ i ] . crumb_bit_offset + crumb_spec [ i ] . crumb_bit_length; if ( crumb_end_bit_offset > mask_greatest_bit_offset )  mask_greatest_bit_offset = crumb_end_bit_offset; value <<= crumb_spec [ ++ i ] . crumb_bit_length; switch ( hf_field -> type )  value = ws_sign_ext64 ( value , no_of_bits ); octet_offset = bit_offset >> 3; octet_length = ( ( mask_greatest_bit_offset + 7 ) >> 3 ); switch ( hf_field -> type )  pi = proto_tree_add_uint ( tree , hfindex , tvb , octet_offset , octet_length , ( guint32 ) value ); pi = proto_tree_add_int ( tree , hfindex , tvb , octet_offset , octet_length , ( gint32 ) value ); fill_label_number ( PITEM_FINFO ( pi ) , lbl_str , TRUE ); static fill_label_number(field_info *fi, gchar *label_str, gboolean is_signed) header_field_info * hfinfo = fi -> hfinfo ; if ( hfinfo -> display == BASE_CUSTOM )  gchar tmp [ ITEM_LABEL_LENGTH ] ; label_fill ( label_str , 0 , hfinfo , tmp ); static label_fill(char *label_str, gsize pos, const header_field_info *hfinfo, const char *text) gsize name_pos ; name_pos = pos = label_concat ( label_str , pos , hfinfo -> name ); pos = label_concat ( label_str , pos , ": " ); pos = label_concat ( label_str , pos , text ? text : "(null)" ); if ( pos >= ITEM_LABEL_LENGTH )  label_mark_truncated ( label_str , name_pos ); static label_mark_truncated(char *label_str, gsize name_pos) const size_t trunc_len = sizeof ( trunc_str ) - 1 ; if ( name_pos < ITEM_LABEL_LENGTH - trunc_len )  memmove ( label_str + name_pos + trunc_len , label_str + name_pos , ITEM_LABEL_LENGTH - name_pos - trunc_len ); memcpy ( label_str + name_pos , trunc_str , trunc_len ); last_char = g_utf8_prev_char ( & label_str [ ITEM_LABEL_LENGTH ] ); * last_char = '\0'; g_strlcpy ( label_str + name_pos , trunc_str , ITEM_LABEL_LENGTH - name_pos ); 