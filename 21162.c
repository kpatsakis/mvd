void dfacomp(const char *s,size_t len,struct dfa *d,int searchflag) dfamust ( d ); static void dfamust(struct dfa *d) must * musts ; must * mp ; size_t ri ; size_t i ; token t ; static must must0 ; musts = ( ( sizeof ( ( * musts ) ) == 1 ? xmalloc ( d -> tindex + 1 ) : xnmalloc ( d -> tindex + 1 , sizeof ( ( * musts ) ) ) ) ); while ( 0 )  mp = musts; for (i = 0; i <= d -> tindex; ++i) mp [ i ] = must0; for (i = 0; i <= d -> tindex; ++i) mp [ i ] . in = ( xmalloc ( sizeof ( ( * mp [ i ] . in ) ) ) ); mp [ i ] . left = ( xmalloc ( 2 ) ); mp [ i ] . right = ( xmalloc ( 2 ) ); mp [ i ] . is = ( xmalloc ( 2 ) ); mp [ i ] . left [ 0 ] = mp [ i ] . right [ 0 ] = mp [ i ] . is [ 0 ] = '\0'; mp [ i ] . in [ 0 ] = ( ( void * ) 0 ); for (ri = 0; ri < d -> tindex; ++ri) switch ( t = d -> tokens [ ri ] )  must * lmp ; must * rmp ; size_t j ; size_t ln ; size_t rn ; rmp = -- mp; lmp = -- mp; if ( ! ( strcmp ( ( lmp -> is ) , ( rmp -> is ) ) == 0 ) )  lmp -> is [ 0 ] = '\0'; i = 0; lmp -> left [ i ] = '\0'; ln = strlen ( ( lmp -> right ) ); rn = strlen ( ( rmp -> right ) ); if ( n > rn )  n = rn; for (i = 0; i < n; ++i) if ( lmp -> right [ ln - i - 1 ] != rmp -> right [ rn - i - 1 ] )  for (j = 0; j < i; ++j) lmp -> right [ j ] = lmp -> right [ ln - i + j ]; lmp -> right [ j ] = '\0'; mp -> is [ 0 ] = '\0'; must * lmp ; must * rmp ; rmp = -- mp; lmp = -- mp; lmp -> in = addlists ( lmp -> in , rmp -> in ); if ( lmp -> in == ( ( void * ) 0 ) )  if ( lmp -> right [ 0 ] != '\0' && rmp -> left [ 0 ] != '\0' )  char * tp ; tp = icpyalloc ( ( lmp -> right ) ); static char *icpyalloc(const char *string) return icatalloc ( ( ( void * ) 0 ) , string ) ; tp = icatalloc ( tp , ( rmp -> left ) ); lmp -> in = enlist ( lmp -> in , tp , strlen ( tp ) ); if ( lmp -> in == ( ( void * ) 0 ) )  if ( lmp -> is [ 0 ] != '\0' )  lmp -> left = icatalloc ( lmp -> left , ( rmp -> left ) ); if ( lmp -> left == ( ( void * ) 0 ) )  if ( rmp -> is [ 0 ] == '\0' )  lmp -> right [ 0 ] = '\0'; lmp -> right = icatalloc ( lmp -> right , ( rmp -> right ) ); if ( lmp -> right == ( ( void * ) 0 ) )  if ( lmp -> is [ 0 ] != '\0' && rmp -> is [ 0 ] != '\0' )  lmp -> is = icatalloc ( lmp -> is , ( rmp -> is ) ); if ( lmp -> is == ( ( void * ) 0 ) )  lmp -> is [ 0 ] = '\0'; if ( t < END )  if ( t == '\0' )  if ( t >= CSET || ! 1 || t == ANYCHAR || t == MBCSET )  mp -> is [ 0 ] = mp -> left [ 0 ] = mp -> right [ 0 ] = t; mp -> is [ 1 ] = mp -> left [ 1 ] = mp -> right [ 1 ] = '\0'; mp -> in = enlist ( mp -> in , mp -> is , ( ( size_t ) 1 ) ); if ( mp -> in == ( ( void * ) 0 ) )  