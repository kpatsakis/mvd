char *dfaexec(struct dfa *d,const char *begin,char *end,int allow_nl,size_t *count,int *backref) state_num s ; state_num s1 ; const unsigned char * p ; state_num * * trans ; state_num * t ; unsigned char eol = eolbyte ; s = s1 = 0; p = ( ( const unsigned char * ) begin ); trans = d -> trans; * end = eol; if ( d -> mb_cur_max > 1 )  while ( ( t = trans [ s ] ) != ( ( void * ) 0 ) )  if ( p > buf_end )  s1 = s; if ( s == 0 )  if ( ( ( char * ) p ) >= end )  if ( d -> states [ s ] . mbps . nelem == 0 )  s = t [ * ( p ++ ) ]; if ( backref )  s = transit_state ( d , s , & p ); static state_num transit_state(struct dfa *d,state_num s,const unsigned char **pp) state_num s1 ; int mbclen ; int maxlen = 0 ; size_t i ; size_t nelem = d -> states [ s ] . mbps . nelem ; const unsigned char * p1 = * pp ; wchar_t wc ; if ( nelem > 0 )  match_lens = check_matching_with_multibyte_ops ( d , s , ( * pp - buf_begin ) ); static int *check_matching_with_multibyte_ops(struct dfa *d,state_num s,size_t idx) size_t i ; int * rarray ; rarray = ( ( sizeof ( ( * rarray ) ) == 1 ? xmalloc ( d -> states [ s ] . mbps . nelem ) : xnmalloc ( d -> states [ s ] . mbps . nelem , sizeof ( ( * rarray ) ) ) ) ); while ( 0 )  for (i = 0; i < d -> states[s] . mbps . nelem; ++i) position pos = d -> states [ s ] . mbps . elems [ i ] ; switch ( d -> tokens [ pos . index ] )  rarray [ i ] = match_anychar ( d , s , pos , idx ); static int match_anychar(struct dfa *d,state_num s,position pos,size_t idx) int context ; wchar_t wc ; int mbclen ; wc = inputwcs [ idx ]; mbclen = ( mblen_buf [ idx ] == 0 ? 1 : mblen_buf [ idx ] ); if ( wc == ( ( wchar_t ) eolbyte ) )  if ( ! ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 ) )  return 0 ; if ( wc == ( ( wchar_t ) '\0' ) )  if ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 )  return 0 ; context = wchar_context ( wc ); static int wchar_context(wint_t wc) if ( wc == ( ( wchar_t ) eolbyte ) || wc == 0 )  return 4 ; if ( wc == '_' || iswalnum ( wc ) )  return 2 ; return 1 ; if ( ! ( ( ( ( context & 1 ? pos . constraint & 0xf : 0 ) ) | ( ( context & 2 ? pos . constraint >> 4 & 0xf : 0 ) ) | ( ( context & 4 ? pos . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context ) )  return 0 ; return mbclen ; rarray [ i ] = match_mb_charset ( d , s , pos , idx ); static int match_mb_charset(struct dfa *d,state_num s,position pos,size_t idx) size_t i ; int match ; int match_len ; int op_len ; char buffer [ 128 ] ; struct mb_char_classes * work_mbc ; int context ; wchar_t wc ; wc = inputwcs [ idx ]; if ( wc == ( ( wchar_t ) eolbyte ) )  if ( ! ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 ) )  return 0 ; if ( wc == ( ( wchar_t ) '\0' ) )  if ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 )  return 0 ; context = wchar_context ( wc ); static int wchar_context(wint_t wc) if ( wc == ( ( wchar_t ) eolbyte ) || wc == 0 )  return 4 ; if ( wc == '_' || iswalnum ( wc ) )  return 2 ; return 1 ; if ( ! ( ( ( ( context & 1 ? pos . constraint & 0xf : 0 ) ) | ( ( context & 2 ? pos . constraint >> 4 & 0xf : 0 ) ) | ( ( context & 4 ? pos . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context ) )  return 0 ; work_mbc = & d -> mbcsets [ d -> multibyte_prop [ pos . index ] >> 2 ]; match = ! work_mbc -> invert; match_len = ( mblen_buf [ idx ] == 0 ? 1 : mblen_buf [ idx ] ); if ( wc < 1 << 8 && work_mbc -> cset != ( - 1 ) && tstbit ( ( ( unsigned char ) wc ) , d -> charclasses [ work_mbc -> cset ] ) )  static int tstbit(unsigned int b,const int c[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))]) return c [ b / ( 8 * sizeof ( int ) ) ] & 1 << b % ( 8 * sizeof ( int ) ) ; for (i = 0; i < work_mbc -> nch_classes; i++) if ( iswctype ( ( ( wint_t ) wc ) , work_mbc -> ch_classes [ i ] ) )  strncpy ( buffer , ( ( const char * ) buf_begin ) + idx , match_len ); buffer [ match_len ] = '\0'; for (i = 0; i < work_mbc -> nequivs; i++) op_len = ( strlen ( work_mbc -> equivs [ i ] ) ); strncpy ( buffer , ( ( const char * ) buf_begin ) + idx , op_len ); buffer [ op_len ] = '\0'; if ( strcoll ( work_mbc -> equivs [ i ] , buffer ) == 0 )  match_len = op_len; for (i = 0; i < work_mbc -> ncoll_elems; i++) op_len = ( strlen ( work_mbc -> coll_elems [ i ] ) ); strncpy ( buffer , ( ( const char * ) buf_begin ) + idx , op_len ); buffer [ op_len ] = '\0'; if ( strcoll ( work_mbc -> coll_elems [ i ] , buffer ) == 0 )  match_len = op_len; for (i = 0; i < work_mbc -> nranges; i++) if ( work_mbc -> range_sts [ i ] <= wc && wc <= work_mbc -> range_ends [ i ] )  for (i = 0; i < work_mbc -> nchars; i++) if ( wc == work_mbc -> chars [ i ] )  match = ! match; return match ? match_len : 0 ; return rarray ; for (i = 0; i < nelem; i++) if ( match_lens [ i ] > maxlen )  maxlen = match_lens [ i ]; if ( nelem == 0 || maxlen == 0 )  return s1 ; wc = inputwcs [ * pp - mbclen - buf_begin ]; s1 = state_index ( d , ( & follows ) , wchar_context ( wc ) ); static int wchar_context(wint_t wc) if ( wc == ( ( wchar_t ) eolbyte ) || wc == 0 )  return 4 ; if ( wc == '_' || iswalnum ( wc ) )  return 2 ; return 1 ; static state_num state_index(struct dfa *d,const position_set *s,int context) size_t hash = 0 ; int constraint ; state_num i ; state_num j ; for (i = 0; i < s -> nelem; ++i) hash ^= s -> elems [ i ] . index + s -> elems [ i ] . constraint; for (i = 0; i < d -> sindex; ++i) if ( hash != d -> states [ i ] . hash || s -> nelem != d -> states [ i ] . elems . nelem || context != d -> states [ i ] . context )  if ( j == s -> nelem )  return i ; if ( d -> salloc <= d -> sindex + 1 )  size_t new_n_alloc = ( d -> sindex + 1 + ( ! d -> states ) ) ; d -> states = ( x2nrealloc ( ( d -> states ) , & new_n_alloc , sizeof ( ( * d -> states ) ) ) ); d -> salloc = new_n_alloc; while ( 0 )  d -> states [ i ] . hash = hash; d -> states [ i ] . context = context; d -> states [ i ] . backref = 0; d -> states [ i ] . constraint = 0; d -> states [ i ] . first_end = 0; if ( 1 )  d -> states [ i ] . mbps . nelem = 0; d -> states [ i ] . mbps . elems = ( ( void * ) 0 ); for (j = 0; j < s -> nelem; ++j) if ( d -> tokens [ s -> elems [ j ] . index ] < 0 )  constraint = s -> elems [ j ] . constraint; if ( ( ( ( 7 & 1 ? constraint & 0xf : 0 ) ) | ( ( 7 & 2 ? constraint >> 4 & 0xf : 0 ) ) | ( ( 7 & 4 ? constraint >> 8 & 0xf : 0 ) ) ) & context )  d -> states [ i ] . constraint |= constraint; if ( ! d -> states [ i ] . first_end )  d -> states [ i ] . first_end = d -> tokens [ s -> elems [ j ] . index ]; if ( d -> tokens [ s -> elems [ j ] . index ] == BACKREF )  d -> states [ i ] . constraint = 0x777; d -> states [ i ] . backref = 1; return i ; while ( * pp - p1 < maxlen )  wc = inputwcs [ * pp - mbclen - buf_begin ]; s1 = state_index ( d , ( & follows ) , wchar_context ( wc ) ); static int wchar_context(wint_t wc) if ( wc == ( ( wchar_t ) eolbyte ) || wc == 0 )  return 4 ; if ( wc == '_' || iswalnum ( wc ) )  return 2 ; return 1 ; static state_num state_index(struct dfa *d,const position_set *s,int context) size_t hash = 0 ; int constraint ; state_num i ; state_num j ; hash ^= s -> elems [ i ] . index + s -> elems [ i ] . constraint; if ( hash != d -> states [ i ] . hash || s -> nelem != d -> states [ i ] . elems . nelem || context != d -> states [ i ] . context )  if ( j == s -> nelem )  return i ; if ( d -> salloc <= d -> sindex + 1 )  size_t new_n_alloc = ( d -> sindex + 1 + ( ! d -> states ) ) ; d -> states = ( x2nrealloc ( ( d -> states ) , & new_n_alloc , sizeof ( ( * d -> states ) ) ) ); d -> salloc = new_n_alloc; while ( 0 )  d -> states [ i ] . hash = hash; d -> states [ i ] . context = context; d -> states [ i ] . backref = 0; d -> states [ i ] . constraint = 0; d -> states [ i ] . first_end = 0; if ( 1 )  d -> states [ i ] . mbps . nelem = 0; d -> states [ i ] . mbps . elems = ( ( void * ) 0 ); if ( d -> tokens [ s -> elems [ j ] . index ] < 0 )  constraint = s -> elems [ j ] . constraint; if ( ( ( ( 7 & 1 ? constraint & 0xf : 0 ) ) | ( ( 7 & 2 ? constraint >> 4 & 0xf : 0 ) ) | ( ( 7 & 4 ? constraint >> 8 & 0xf : 0 ) ) ) & context )  d -> states [ i ] . constraint |= constraint; if ( ! d -> states [ i ] . first_end )  d -> states [ i ] . first_end = d -> tokens [ s -> elems [ j ] . index ]; if ( d -> tokens [ s -> elems [ j ] . index ] == BACKREF )  d -> states [ i ] . constraint = 0x777; d -> states [ i ] . backref = 1; return i ; return s1 ; trans = d -> trans; while ( ( t = trans [ s ] ) != ( ( void * ) 0 ) )  s1 = t [ * ( p ++ ) ]; if ( ( t = trans [ s1 ] ) == ( ( void * ) 0 ) )  state_num tmp = s ; s = s1; s1 = tmp; s = t [ * ( p ++ ) ]; if ( s >= 0 && ( ( char * ) p ) <= end && d -> fails [ s ] )  if ( d -> success [ s ] & sbit [ * p ] )  s1 = s; if ( d -> mb_cur_max > 1 )  s = transit_state ( d , s , & p ); static state_num transit_state(struct dfa *d,state_num s,const unsigned char **pp) state_num s1 ; int mbclen ; int maxlen = 0 ; size_t i ; size_t nelem = d -> states [ s ] . mbps . nelem ; const unsigned char * p1 = * pp ; wchar_t wc ; if ( nelem > 0 )  match_lens = check_matching_with_multibyte_ops ( d , s , ( * pp - buf_begin ) ); if ( match_lens [ i ] > maxlen )  maxlen = match_lens [ i ]; if ( nelem == 0 || maxlen == 0 )  return s1 ; wc = inputwcs [ * pp - mbclen - buf_begin ]; s1 = state_index ( d , ( & follows ) , wchar_context ( wc ) ); while ( * pp - p1 < maxlen )  wc = inputwcs [ * pp - mbclen - buf_begin ]; s1 = state_index ( d , ( & follows ) , wchar_context ( wc ) ); return s1 ; trans = d -> trans; s = d -> fails [ s ] [ * ( p ++ ) ]; if ( ( ( char * ) p ) > end )  if ( s >= 0 )  build_state ( s , d ); trans = d -> trans; if ( p [ - 1 ] == eol && allow_nl )  s = d -> newlines [ s1 ]; s = 0; static void build_state(state_num s,struct dfa *d) state_num * trans ; state_num i ; if ( d -> trcount >= 1024 )  for (i = 0; i < d -> tralloc; ++i) d -> trans [ i ] = d -> fails [ i ] = ( ( void * ) 0 ); d -> trcount = 0; d -> success [ s ] = 0; if ( ( ( ( 4 & 1 ? ( * d ) . states [ s ] . constraint & 0xf : 0 ) ) | ( ( 4 & 2 ? ( * d ) . states [ s ] . constraint >> 4 & 0xf : 0 ) ) | ( ( 4 & 4 ? ( * d ) . states [ s ] . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context )  d -> success [ s ] |= 4; if ( ( ( ( 2 & 1 ? ( * d ) . states [ s ] . constraint & 0xf : 0 ) ) | ( ( 2 & 2 ? ( * d ) . states [ s ] . constraint >> 4 & 0xf : 0 ) ) | ( ( 2 & 4 ? ( * d ) . states [ s ] . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context )  d -> success [ s ] |= 2; if ( ( ( ( 1 & 1 ? ( * d ) . states [ s ] . constraint & 0xf : 0 ) ) | ( ( 1 & 2 ? ( * d ) . states [ s ] . constraint >> 4 & 0xf : 0 ) ) | ( ( 1 & 4 ? ( * d ) . states [ s ] . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context )  d -> success [ s ] |= 1; trans = ( ( sizeof ( ( * trans ) ) == 1 ? xmalloc ( ( 1 << 8 ) ) : xnmalloc ( ( 1 << 8 ) , sizeof ( ( * trans ) ) ) ) ); while ( 0 )  dfastate ( s , d , trans ); void dfastate(state_num s,struct dfa *d,token trans[]) leaf_set * grps ; charclass * labels ; size_t ngrps = 0 ; position pos ; charclass matches ; int matchesf ; charclass intersect ; int intersectf ; charclass leftovers ; int leftoversf ; size_t i ; size_t j ; size_t k ; grps = ( ( sizeof ( ( * grps ) ) == 1 ? xmalloc ( ( 1 << 8 ) ) : xnmalloc ( ( 1 << 8 ) , sizeof ( ( * grps ) ) ) ) ); while ( 0 )  labels = ( ( sizeof ( ( * labels ) ) == 1 ? xmalloc ( ( 1 << 8 ) ) : xnmalloc ( ( 1 << 8 ) , sizeof ( ( * labels ) ) ) ) ); while ( 0 )  for (i = 0; i < d -> states[s] . elems . nelem; ++i) pos = d -> states [ s ] . elems . elems [ i ]; if ( d -> tokens [ pos . index ] >= 0 && d -> tokens [ pos . index ] < ( 1 << 8 ) )  if ( d -> tokens [ pos . index ] >= CSET )  if ( pos . constraint != 0x777 )  if ( ! ( ( ( ( 4 & 1 ? pos . constraint & 0xf : 0 ) ) | ( ( 4 & 2 ? pos . constraint >> 4 & 0xf : 0 ) ) | ( ( 4 & 4 ? pos . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context ) )  for (j = 0; j < ((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int )); ++j) matches [ j ] &= ~newline [ j ]; if ( ! ( ( ( ( 2 & 1 ? pos . constraint & 0xf : 0 ) ) | ( ( 2 & 2 ? pos . constraint >> 4 & 0xf : 0 ) ) | ( ( 2 & 4 ? pos . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context ) )  for (j = 0; j < ((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int )); ++j) matches [ j ] &= ~letters [ j ]; if ( ! ( ( ( ( 1 & 1 ? pos . constraint & 0xf : 0 ) ) | ( ( 1 & 2 ? pos . constraint >> 4 & 0xf : 0 ) ) | ( ( 1 & 4 ? pos . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context ) )  for (j = 0; j < ((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int )); ++j) matches [ j ] &= letters [ j ] | newline [ j ]; if ( j == ( ( 1 << 8 ) + 8 * sizeof ( int ) - 1 ) / ( 8 * sizeof ( int ) ) )  for (j = 0; j < ngrps; ++j) if ( d -> tokens [ pos . index ] >= 0 && d -> tokens [ pos . index ] < ( 1 << 8 ) && ! tstbit ( d -> tokens [ pos . index ] , labels [ j ] ) )  static int tstbit(unsigned int b,const int c[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))]) return c [ b / ( 8 * sizeof ( int ) ) ] & 1 << b % ( 8 * sizeof ( int ) ) ; intersectf = 0; for (k = 0; k < ((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int )); ++k) ( intersect [ k ] = matches [ k ] & labels [ j ] [ k ] ) ? ( intersectf = 1 ) : 0; if ( ! intersectf )  leftoversf = matchesf = 0; for (k = 0; k < ((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int )); ++k) int match = matches [ k ] ; int label = labels [ j ] [ k ] ; ( leftovers [ k ] = ~match & label ) ? ( leftoversf = 1 ) : 0; ( matches [ k ] = match & ~label ) ? ( matchesf = 1 ) : 0; if ( leftoversf )  grps [ ngrps ] . elems = ( ( sizeof ( ( * grps [ ngrps ] . elems ) ) == 1 ? xmalloc ( d -> nleaves ) : xnmalloc ( d -> nleaves , sizeof ( ( * grps [ ngrps ] . elems ) ) ) ) ); while ( 0 )  memcpy ( grps [ ngrps ] . elems , grps [ j ] . elems , sizeof ( grps [ j ] . elems [ 0 ] ) * grps [ j ] . nelem ); grps [ ngrps ] . nelem = grps [ j ] . nelem; grps [ j ] . elems [ grps [ j ] . nelem ++ ] = pos . index; if ( ! matchesf )  if ( j == ngrps )  copyset ( matches , labels [ ngrps ] ); grps [ ngrps ] . elems = ( ( sizeof ( ( * grps [ ngrps ] . elems ) ) == 1 ? xmalloc ( d -> nleaves ) : xnmalloc ( d -> nleaves , sizeof ( ( * grps [ ngrps ] . elems ) ) ) ) ); while ( 0 )  grps [ ngrps ] . nelem = 1; grps [ ngrps ] . elems [ 0 ] = pos . index; static void copyset(const int src[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))],charclass dst) memcpy ( dst , src , sizeof ( charclass ) ); 