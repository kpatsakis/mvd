static token lex() unsigned int c ; int backslash = 0 ; charclass ccl ; int i ; for (i = 0; i < 2; ++i) if ( __ctype_get_mb_cur_max ( ) > 1 )  if ( ! lexleft )  if ( ( ( void * ) 0 ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  wctok = ( c = ( to_uchar ( * ( lexptr ++ ) ) ) ); inline static unsigned char to_uchar(char ch) return ch ; lexptr += cur_mb_len; lexleft -= cur_mb_len; wctok = _wc; c = ( wctob ( wctok ) ); while ( 0 )  if ( ( ( int ) c ) == - 1 )  wint_t wc ; if ( ! lexleft )  if ( ( ( void * ) 0 ) != 0 )  return lasttok = END ; wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  wc = c = ( to_uchar ( * ( lexptr ++ ) ) ); inline static unsigned char to_uchar(char ch) return ch ; lexptr += cur_mb_len; lexleft -= cur_mb_len; wc = _wc; c = ( wctob ( wc ) ); while ( 0 )  while ( 0 )  switch ( c )  if ( backslash )  backslash = 1; if ( backslash )  if ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 || lasttok == END || lasttok == LPAREN || lasttok == OR )  if ( backslash )  if ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 || lexleft == 0 || ( ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 ? lexleft > 0 && ( * lexptr ) == ')' : lexleft > 1 && lexptr [ 0 ] == '\\' && lexptr [ 1 ] == ')' ) ) || ( ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 ? lexleft > 0 && ( * lexptr ) == '|' : lexleft > 1 && lexptr [ 0 ] == '\\' && lexptr [ 1 ] == '|' ) ) || syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 && lexleft > 0 && ( * lexptr ) == 10 )  if ( backslash && ! ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 ) )  laststart = 0; if ( backslash && ! ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 ) )  if ( backslash && ! ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 ) )  if ( backslash && ! ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 ) )  if ( backslash && ! ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 ) )  if ( backslash && ! ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 ) )  if ( backslash && ! ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 ) )  if ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 )  if ( backslash != ( ( syntax_bits & ( ( unsigned long ) 1 ) << 1 ) != 0 ) )  if ( ! ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 ) && laststart )  if ( backslash )  if ( ! ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 ) && laststart )  if ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 )  if ( backslash != ( ( syntax_bits & ( ( unsigned long ) 1 ) << 1 ) != 0 ) )  if ( ! ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 ) && laststart )  if ( ! ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 ) )  if ( backslash != ( ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 ) == 0 ) )  if ( ! ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 ) && laststart )  const char * p = lexptr ; const char * lim = p + lexleft ; minrep = maxrep = - 1; for (; p != lim && ((unsigned int )( *p)) - 48 <= 9; p++) if ( minrep < 0 )  minrep = ( * p ) - 48; minrep = ( 0x7fff + 1 < minrep * 10 + ( * p ) - 48 ? 0x7fff + 1 : minrep * 10 + ( * p ) - 48 ); if ( p != lim )  if ( ( * p ) != ',' )  maxrep = minrep; if ( minrep < 0 )  minrep = 0; while ( ++ p != lim && ( ( unsigned int ) ( * p ) ) - 48 <= 9 )  if ( maxrep < 0 )  maxrep = ( * p ) - 48; maxrep = ( 0x7fff + 1 < maxrep * 10 + ( * p ) - 48 ? 0x7fff + 1 : maxrep * 10 + ( * p ) - 48 ); if ( ! ( ( ! backslash || p != lim && ( * ( p ++ ) ) == '\\' ) && p != lim && ( * ( p ++ ) ) == '}' && 0 <= minrep && ( maxrep < 0 || minrep <= maxrep ) ) )  if ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 )  if ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 )  if ( backslash != ( ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 ) == 0 ) )  if ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 || backslash || ! ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 ) )  if ( backslash != ( ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 ) == 0 ) )  if ( backslash != ( ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 ) == 0 ) )  if ( parens == 0 && syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 )  if ( backslash )  if ( ! backslash || syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 )  if ( ! backslash || syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 )  if ( backslash )  if ( __ctype_get_mb_cur_max ( ) > 1 )  if ( case_fold && ( * __ctype_b_loc ( ) ) [ ( int ) c ] & ( ( unsigned short ) _ISalpha ) )  return lasttok = ( CSET + charclass_index ( ccl ) ) ; static size_t charclass_index(const int s[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))]) size_t i ; for (i = 0; i < dfa -> cindex; ++i) if ( equal ( s , dfa -> charclasses [ i ] ) )  static int equal(const int s1[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))],const int s2[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))]) return memcmp ( s1 , s2 , sizeof ( charclass ) ) == 0 ; if ( dfa -> calloc <= dfa -> cindex + 1 )  size_t new_n_alloc = dfa -> cindex + 1 + ( ! dfa -> charclasses ) ; dfa -> charclasses = ( x2nrealloc ( ( dfa -> charclasses ) , & new_n_alloc , sizeof ( ( * dfa -> charclasses ) ) ) ); dfa -> calloc = new_n_alloc; while ( 0 )  copyset ( s , dfa -> charclasses [ i ] ); static void copyset(const int src[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))],charclass dst) memcpy ( dst , src , sizeof ( charclass ) ); 