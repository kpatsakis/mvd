static token lex() unsigned int c ; int backslash = 0 ; charclass ccl ; int i ; for (i = 0; i < 2; ++i) if ( __ctype_get_mb_cur_max ( ) > 1 )  if ( ! lexleft )  if ( ( ( void * ) 0 ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  wctok = ( c = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wctok = _wc; c = ( wctob ( wctok ) ); while ( 0 )  if ( ( ( int ) c ) == - 1 )  wint_t wc ; if ( ! lexleft )  if ( ( ( void * ) 0 ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  wc = c = ( to_uchar ( * ( lexptr ++ ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc = _wc; c = ( wctob ( wc ) ); while ( 0 )  while ( 0 )  switch ( c )  if ( backslash )  backslash = 1; if ( backslash )  if ( __ctype_get_mb_cur_max ( ) > 1 )  return lasttok = ( CSET + charclass_index ( ccl ) ) ; static size_t charclass_index(const int s[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))]) size_t i ; for (i = 0; i < dfa -> cindex; ++i) if ( equal ( s , dfa -> charclasses [ i ] ) )  static int equal(const int s1[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))],const int s2[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))]) return memcmp ( s1 , s2 , sizeof ( charclass ) ) == 0 ; 