static token parse_bracket_exp() struct mb_char_classes * work_mbc ; if ( __ctype_get_mb_cur_max ( ) > 1 )  if ( dfa -> mbcsets_alloc <= dfa -> nmbcsets + 1 )  size_t new_n_alloc = dfa -> nmbcsets + 1 + ( ! dfa -> mbcsets ) ; dfa -> mbcsets = ( x2nrealloc ( ( dfa -> mbcsets ) , & new_n_alloc , sizeof ( ( * dfa -> mbcsets ) ) ) ); dfa -> mbcsets_alloc = new_n_alloc; while ( 0 )  work_mbc = & dfa -> mbcsets [ dfa -> nmbcsets ++ ]; memset ( work_mbc , 0 , sizeof ( ( * work_mbc ) ) ); if ( ch_classes_al <= work_mbc -> nch_classes + 1 )  size_t new_n_alloc = work_mbc -> nch_classes + 1 + ( ! work_mbc -> ch_classes ) ; work_mbc -> ch_classes = ( x2nrealloc ( ( work_mbc -> ch_classes ) , & new_n_alloc , sizeof ( ( * work_mbc -> ch_classes ) ) ) ); ch_classes_al = new_n_alloc; work_mbc -> ch_classes [ work_mbc -> nch_classes ++ ] = wt; if ( equivs_al <= work_mbc -> nequivs + 1 )  size_t new_n_alloc = work_mbc -> nequivs + 1 + ( ! work_mbc -> equivs ) ; work_mbc -> equivs = ( x2nrealloc ( ( work_mbc -> equivs ) , & new_n_alloc , sizeof ( ( * work_mbc -> equivs ) ) ) ); equivs_al = new_n_alloc; work_mbc -> equivs [ work_mbc -> nequivs ++ ] = elem; if ( coll_elems_al <= work_mbc -> ncoll_elems + 1 )  size_t new_n_alloc = work_mbc -> ncoll_elems + 1 + ( ! work_mbc -> coll_elems ) ; work_mbc -> coll_elems = ( x2nrealloc ( ( work_mbc -> coll_elems ) , & new_n_alloc , sizeof ( ( * work_mbc -> coll_elems ) ) ) ); coll_elems_al = new_n_alloc; work_mbc -> coll_elems [ work_mbc -> ncoll_elems ++ ] = elem; if ( range_sts_al <= work_mbc -> nranges + 1 )  size_t new_n_alloc = work_mbc -> nranges + 1 + ( ! work_mbc -> range_sts ) ; work_mbc -> range_sts = ( x2nrealloc ( ( work_mbc -> range_sts ) , & new_n_alloc , sizeof ( ( * work_mbc -> range_sts ) ) ) ); range_sts_al = new_n_alloc; if ( range_ends_al <= work_mbc -> nranges + 1 )  size_t new_n_alloc = work_mbc -> nranges + 1 + ( ! work_mbc -> range_ends ) ; work_mbc -> range_ends = ( x2nrealloc ( ( work_mbc -> range_ends ) , & new_n_alloc , sizeof ( ( * work_mbc -> range_ends ) ) ) ); range_ends_al = new_n_alloc; work_mbc -> range_sts [ work_mbc -> nranges ] = ( ( case_fold ? towlower ( wc ) : ( ( wchar_t ) wc ) ) ); work_mbc -> range_ends [ work_mbc -> nranges ++ ] = ( ( case_fold ? towlower ( wc2 ) : ( ( wchar_t ) wc2 ) ) ); if ( chars_al <= work_mbc -> nchars + 1 )  size_t new_n_alloc = work_mbc -> nchars + 1 + ( ! work_mbc -> chars ) ; work_mbc -> chars = ( x2nrealloc ( ( work_mbc -> chars ) , & new_n_alloc , sizeof ( ( * work_mbc -> chars ) ) ) ); chars_al = new_n_alloc; work_mbc -> chars [ work_mbc -> nchars ++ ] = wc; if ( chars_al <= work_mbc -> nchars + 1 )  size_t new_n_alloc = work_mbc -> nchars + 1 + ( ! work_mbc -> chars ) ; work_mbc -> chars = ( x2nrealloc ( ( work_mbc -> chars ) , & new_n_alloc , sizeof ( ( * work_mbc -> chars ) ) ) ); chars_al = new_n_alloc; work_mbc -> chars [ work_mbc -> nchars ++ ] = wc; work_mbc -> invert = invert; work_mbc -> cset = ( ( equal ( ccl , zeroclass ) ? ( - 1 ) : charclass_index ( ccl ) ) ); static size_t charclass_index(const int s[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))]) if ( equal ( s , dfa -> charclasses [ i ] ) )  static int equal(const int s1[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))],const int s2[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))]) return memcmp ( s1 , s2 , sizeof ( charclass ) ) == 0 ; copyset ( s , dfa -> charclasses [ i ] ); static void copyset(const int src[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))],charclass dst) memcpy ( dst , src , sizeof ( charclass ) ); static int equal(const int s1[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))],const int s2[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))]) return memcmp ( s1 , s2 , sizeof ( charclass ) ) == 0 ; 