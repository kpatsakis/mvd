char *dfaexec(struct dfa *d,const char *begin,char *end,int allow_nl,size_t *count,int *backref) state_num s ; state_num s1 ; const unsigned char * p ; state_num * * trans ; state_num * t ; unsigned char eol = eolbyte ; unsigned char saved_end ; s = s1 = 0; p = ( ( const unsigned char * ) begin ); trans = d -> trans; saved_end = * ( ( unsigned char * ) end ); * end = eol; if ( d -> mb_cur_max > 1 )  while ( ( t = trans [ s ] ) != ( ( void * ) 0 ) )  if ( p > buf_end )  s1 = s; if ( s == 0 )  if ( ( ( char * ) p ) >= end )  * end = saved_end; if ( d -> states [ s ] . mbps . nelem == 0 )  s = t [ * ( p ++ ) ]; if ( backref )  * end = saved_end; s = transit_state ( d , s , & p ); trans = d -> trans; while ( ( t = trans [ s ] ) != ( ( void * ) 0 ) )  s1 = t [ * ( p ++ ) ]; if ( ( t = trans [ s1 ] ) == ( ( void * ) 0 ) )  state_num tmp = s ; s = s1; s1 = tmp; s = t [ * ( p ++ ) ]; if ( s >= 0 && ( ( char * ) p ) <= end && d -> fails [ s ] )  if ( d -> success [ s ] & sbit [ * p ] )  s1 = s; if ( d -> mb_cur_max > 1 )  s = transit_state ( d , s , & p ); trans = d -> trans; s = d -> fails [ s ] [ * ( p ++ ) ]; if ( ( ( char * ) p ) > end )  if ( s >= 0 )  trans = d -> trans; if ( p [ - 1 ] == eol && allow_nl )  s = d -> newlines [ s1 ]; s = 0; static state_num transit_state(struct dfa *d,state_num s,const unsigned char **pp) size_t nelem = d -> states [ s ] . mbps . nelem ; if ( nelem > 0 )  match_lens = check_matching_with_multibyte_ops ( d , s , ( * pp - buf_begin ) ); static int *check_matching_with_multibyte_ops(struct dfa *d,state_num s,size_t idx) size_t i ; int * rarray ; rarray = ( ( sizeof ( ( * rarray ) ) == 1 ? xmalloc ( d -> states [ s ] . mbps . nelem ) : xnmalloc ( d -> states [ s ] . mbps . nelem , sizeof ( ( * rarray ) ) ) ) ); while ( 0 )  for (i = 0; i < d -> states[s] . mbps . nelem; ++i) position pos = d -> states [ s ] . mbps . elems [ i ] ; switch ( d -> tokens [ pos . index ] )  rarray [ i ] = match_anychar ( d , s , pos , idx ); static int match_anychar(struct dfa *d,state_num s,position pos,size_t idx) int context ; wchar_t wc ; int mbclen ; wc = inputwcs [ idx ]; mbclen = ( mblen_buf [ idx ] == 0 ? 1 : mblen_buf [ idx ] ); if ( wc == ( ( wchar_t ) eolbyte ) )  if ( ! ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 ) )  return 0 ; if ( wc == ( ( wchar_t ) '\0' ) )  if ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 )  return 0 ; context = wchar_context ( wc ); static int wchar_context(wint_t wc) if ( wc == ( ( wchar_t ) eolbyte ) || wc == 0 )  return 4 ; if ( wc == '_' || iswalnum ( wc ) )  return 2 ; return 1 ; if ( ! ( ( ( ( context & 1 ? pos . constraint & 0xf : 0 ) ) | ( ( context & 2 ? pos . constraint >> 4 & 0xf : 0 ) ) | ( ( context & 4 ? pos . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context ) )  return 0 ; return mbclen ; rarray [ i ] = match_mb_charset ( d , s , pos , idx ); static int match_mb_charset(struct dfa *d,state_num s,position pos,size_t idx) size_t i ; int match_len ; int op_len ; char buffer [ 128 ] ; struct mb_char_classes * work_mbc ; int context ; wchar_t wc ; wc = inputwcs [ idx ]; if ( wc == ( ( wchar_t ) eolbyte ) )  if ( ! ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 ) )  if ( wc == ( ( wchar_t ) '\0' ) )  if ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 )  context = wchar_context ( wc ); static int wchar_context(wint_t wc) if ( wc == ( ( wchar_t ) eolbyte ) || wc == 0 )  return 4 ; if ( wc == '_' || iswalnum ( wc ) )  return 2 ; return 1 ; if ( ! ( ( ( ( context & 1 ? pos . constraint & 0xf : 0 ) ) | ( ( context & 2 ? pos . constraint >> 4 & 0xf : 0 ) ) | ( ( context & 4 ? pos . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context ) )  work_mbc = & d -> mbcsets [ d -> multibyte_prop [ pos . index ] >> 2 ]; match_len = ( mblen_buf [ idx ] == 0 ? 1 : mblen_buf [ idx ] ); if ( wc < 1 << 8 && work_mbc -> cset != ( - 1 ) && tstbit ( ( ( unsigned char ) wc ) , d -> charclasses [ work_mbc -> cset ] ) )  static int tstbit(unsigned int b,const int c[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))]) return c [ b / ( 8 * sizeof ( int ) ) ] & 1 << b % ( 8 * sizeof ( int ) ) ; for (i = 0; i < work_mbc -> nch_classes; i++) if ( iswctype ( ( ( wint_t ) wc ) , work_mbc -> ch_classes [ i ] ) )  strncpy ( buffer , ( ( const char * ) buf_begin ) + idx , match_len ); buffer [ match_len ] = '\0'; for (i = 0; i < work_mbc -> nequivs; i++) op_len = ( strlen ( work_mbc -> equivs [ i ] ) ); strncpy ( buffer , ( ( const char * ) buf_begin ) + idx , op_len ); buffer [ op_len ] = '\0'; if ( strcoll ( work_mbc -> equivs [ i ] , buffer ) == 0 )  match_len = op_len; strncpy ( buffer , ( ( const char * ) buf_begin ) + idx , op_len ); buffer [ op_len ] = '\0'; if ( strcoll ( work_mbc -> coll_elems [ i ] , buffer ) == 0 )  return match ? match_len : 0 ; 