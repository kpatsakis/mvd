static enum storeEntityValue(XML_Parser const ENCODING const char const char *entityTextEnd) DTD * const dtd = _dtd STRING_POOL * pool = & ( dtd -> entityValuePool ) ; if ( ! pool -> blocks )  if ( ! poolGrow ( pool ) )  const char * next ; int tok = XmlEntityValueTok ( enc , entityTextPtr , entityTextEnd , & next ) ; switch ( tok )  if ( isParamEntity || enc != encoding )  const XML_Char * name ; ENTITY * entity ; name = poolStoreString ( & tempPool , enc , entityTextPtr + enc -> minBytesPerChar , next - enc -> minBytesPerChar ); if ( ! name )  entity = ( ENTITY * ) lookup ( & dtd -> paramEntities , name , 0 ); if ( ! entity )  if ( entity -> open )  if ( entity -> systemId )  if ( externalEntityRefHandler )  entity -> open = XML_TRUE; if ( ! externalEntityRefHandler ( externalEntityRefHandlerArg , 0 , entity -> base , entity -> systemId , entity -> publicId ) )  entity -> open = XML_FALSE; entity -> open = XML_TRUE; result = storeEntityValue ( parser , internalEncoding , ( char * ) entity -> textPtr , ( char * ) ( entity -> textPtr + entity -> textLen ) ); entity -> open = XML_FALSE; if ( result )  if ( ! poolAppend ( pool , enc , entityTextPtr , next ) )  next = entityTextPtr + enc -> minBytesPerChar; if ( pool -> end == pool -> ptr && ! poolGrow ( pool ) )  * ( pool -> ptr ) ++ = 0xA; XML_Char buf [ XML_ENCODE_MAX ] ; int i ; int n = XmlCharRefNumber ( enc , entityTextPtr ) ; if ( n < 0 )  n = XmlEncode ( n , ( ICHAR * ) buf ); if ( ! n )  for (i = 0; i < n; i++) if ( pool -> end == pool -> ptr && ! poolGrow ( pool ) )  * ( pool -> ptr ) ++ = buf [ i ]; entityTextPtr = next; static enum storeEntityValue(XML_Parser const ENCODING const char const char *entityTextEnd) DTD * const dtd = _dtd STRING_POOL * pool = & ( dtd -> entityValuePool ) ; if ( ! pool -> blocks )  if ( ! poolGrow ( pool ) )  const char * next ; int tok = XmlEntityValueTok ( enc , entityTextPtr , entityTextEnd , & next ) ; switch ( tok )  if ( isParamEntity || enc != encoding )  const XML_Char * name ; ENTITY * entity ; name = poolStoreString ( & tempPool , enc , entityTextPtr + enc -> minBytesPerChar , next - enc -> minBytesPerChar ); if ( ! name )  entity = ( ENTITY * ) lookup ( & dtd -> paramEntities , name , 0 ); if ( ! entity )  if ( entity -> open )  if ( entity -> systemId )  if ( externalEntityRefHandler )  entity -> open = XML_TRUE; if ( ! externalEntityRefHandler ( externalEntityRefHandlerArg , 0 , entity -> base , entity -> systemId , entity -> publicId ) )  entity -> open = XML_FALSE; entity -> open = XML_TRUE; result = storeEntityValue ( parser , internalEncoding , ( char * ) entity -> textPtr , ( char * ) ( entity -> textPtr + entity -> textLen ) ); entity -> open = XML_FALSE; if ( result )  if ( ! poolAppend ( pool , enc , entityTextPtr , next ) )  next = entityTextPtr + enc -> minBytesPerChar; if ( pool -> end == pool -> ptr && ! poolGrow ( pool ) )  * ( pool -> ptr ) ++ = 0xA; XML_Char buf [ XML_ENCODE_MAX ] ; int i ; int n = XmlCharRefNumber ( enc , entityTextPtr ) ; if ( n < 0 )  n = XmlEncode ( n , ( ICHAR * ) buf ); if ( ! n )  if ( pool -> end == pool -> ptr && ! poolGrow ( pool ) )  * ( pool -> ptr ) ++ = buf [ i ]; entityTextPtr = next; static XML_Char poolAppend(STRING_POOL *pool, const ENCODING const char *ptr, const char *end) if ( ! pool -> ptr && ! poolGrow ( pool ) )  static XML_Bool poolGrow(STRING_POOL *pool) if ( pool -> freeBlocks )  if ( pool -> start == 0 )  if ( pool -> end - pool -> start < pool -> freeBlocks -> size )  if ( pool -> blocks && pool -> start == pool -> blocks -> s )  BLOCK * tem ; int blockSize = ( int ) ( pool -> end - pool -> start ) ; if ( blockSize < INIT_BLOCK_SIZE )  blockSize = INIT_BLOCK_SIZE; blockSize *= 2; tem = ( BLOCK * ) pool -> mem -> malloc_fcn ( offsetof ( BLOCK , s ) + blockSize * sizeof ( XML_Char ) ); if ( ! tem )  tem -> size = blockSize; tem -> next = pool -> blocks; pool -> blocks = tem; if ( pool -> ptr != pool -> start )  memcpy ( tem -> s , pool -> start , ( pool -> ptr - pool -> start ) * sizeof ( XML_Char ) ); pool -> ptr = tem -> s + ( pool -> ptr - pool -> start ); pool -> start = tem -> s; pool -> end = tem -> s + blockSize; 