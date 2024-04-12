static enum doContent(XML_Parser int const ENCODING const char const char const char XML_Bool haveMore) DTD * const dtd = _dtd const char * * eventPP ; if ( enc == encoding )  eventPP = & eventPtr; eventPP = & ( openInternalEntities -> internalEventPtr ); const char * next = s ; int tok = XmlContentTok ( enc , s , end , & next ) ; switch ( tok )  const XML_Char * name ; ENTITY * entity ; XML_Char ch = ( XML_Char ) XmlPredefinedEntityName ( enc , s + enc -> minBytesPerChar , next - enc -> minBytesPerChar ) ; if ( ch )  name = poolStoreString ( & dtd -> pool , enc , s + enc -> minBytesPerChar , next - enc -> minBytesPerChar ); if ( ! name )  entity = ( ENTITY * ) lookup ( & dtd -> generalEntities , name , 0 ); if ( ! dtd -> hasParamEntityRefs || dtd -> standalone )  if ( ! entity )  if ( ! entity -> is_internal )  if ( ! entity )  if ( entity -> open )  if ( entity -> notation )  if ( entity -> textPtr )  enum XML_Error result ; if ( ! defaultExpandInternalEntities )  result = processInternalEntity ( parser , entity , XML_FALSE ); if ( result != XML_ERROR_NONE )  if ( externalEntityRefHandler )  const XML_Char * context ; entity -> open = XML_TRUE; context = getContext ( parser ); entity -> open = XML_FALSE; if ( ! context )  if ( ! externalEntityRefHandler ( externalEntityRefHandlerArg , context , entity -> base , entity -> systemId , entity -> publicId ) )  TAG * tag ; enum XML_Error result ; XML_Char * toPtr ; if ( freeTagList )  tag = freeTagList; freeTagList = freeTagList -> parent; tag = ( TAG * ) MALLOC ( sizeof ( TAG ) ); if ( ! tag )  tag -> buf = ( char * ) MALLOC ( INIT_TAG_BUF_SIZE ); if ( ! tag -> buf )  tag -> bufEnd = tag -> buf + INIT_TAG_BUF_SIZE; tag -> bindings = NULL; tag -> parent = tagStack; tagStack = tag; tag -> name . localPart = NULL; tag -> name . prefix = NULL; tag -> rawName = s + enc -> minBytesPerChar; tag -> rawNameLength = XmlNameLength ( enc , tag -> rawName ); const char * rawNameEnd = tag -> rawName + tag -> rawNameLength ; const char * fromPtr = tag -> rawName ; toPtr = ( XML_Char * ) tag -> buf; int bufSize ; int convLen ; convLen = ( int ) ( toPtr - ( XML_Char * ) tag -> buf ); if ( fromPtr == rawNameEnd )  tag -> name . strLen = convLen; bufSize = ( int ) ( tag -> bufEnd - tag -> buf ) << 1; char * temp = ( char * ) REALLOC ( tag -> buf , bufSize ) ; if ( temp == NULL )  tag -> buf = temp; tag -> bufEnd = temp + bufSize; toPtr = ( XML_Char * ) temp + convLen; tag -> name . str = ( XML_Char * ) tag -> buf; result = storeAtts ( parser , enc , s , & ( tag -> name ) , & ( tag -> bindings ) ); if ( result )  const char * rawName = s + enc -> minBytesPerChar ; enum XML_Error result ; TAG_NAME name ; name . str = poolStoreString ( & tempPool , enc , rawName , rawName + XmlNameLength ( enc , rawName ) ); if ( ! name . str )  result = storeAtts ( parser , enc , s , & name , & bindings ); if ( result )  if ( tagLevel == 0 )  if ( tagLevel == startTagLevel )  int len ; const char * rawName ; TAG * tag = tagStack ; tagStack = tag -> parent; tag -> parent = freeTagList; freeTagList = tag; rawName = s + enc -> minBytesPerChar * 2; len = XmlNameLength ( enc , rawName ); if ( len != tag -> rawNameLength || memcmp ( tag -> rawName , rawName , len ) != 0 )  while ( tag -> bindings )  tag -> bindings = tag -> bindings -> nextTagBinding; if ( tagLevel == 0 )  int n = XmlCharRefNumber ( enc , s ) ; if ( n < 0 )  enum XML_Error result ; result = doCdataSection ( parser , enc , & next , end , nextPtr , haveMore ); if ( result != XML_ERROR_NONE )  if ( ! next )  if ( characterDataHandler )  if ( MUST_CONVERT ( enc , s ) )  if ( s == next )  * eventPP = s; if ( ! reportProcessingInstruction ( parser , enc , s , next ) )  if ( ! reportComment ( parser , enc , s , next ) )  * eventPP = s = next; switch ( ps_parsing )  static enum storeAtts(XML_Parser parser, const ENCODING const char *attStr, TAG_NAME BINDING **bindingsPtr) DTD * const dtd = _dtd ELEMENT_TYPE * elementType ; int nDefaultAtts ; const XML_Char * * appAtts ; int attIndex = 0 ; int i ; int n ; elementType = ( ELEMENT_TYPE * ) lookup ( & dtd -> elementTypes , tagNamePtr -> str , 0 ); if ( ! elementType )  const XML_Char * name = poolCopyString ( & dtd -> pool , tagNamePtr -> str ) ; static const XML_Char * poolCopyString(STRING_POOL *pool, const XML_Char *s) if ( ! poolAppendChar ( pool , * s ) )  return NULL ; while ( * s ++ )  s = pool -> start; return s ; if ( ! name )  elementType = ( ELEMENT_TYPE * ) lookup ( & dtd -> elementTypes , name , sizeof ( ELEMENT_TYPE ) ); if ( ! elementType )  if ( ns && ! setElementTypePrefix ( parser , elementType ) )  nDefaultAtts = elementType -> nDefaultAtts; n = XmlGetAttributes ( enc , attStr , attsSize , atts ); if ( n + nDefaultAtts > attsSize )  ATTRIBUTE * temp ; attsSize = n + nDefaultAtts + INIT_ATTS_SIZE; temp = ( ATTRIBUTE * ) REALLOC ( ( void * ) atts , attsSize * sizeof ( ATTRIBUTE ) ); if ( temp == NULL )  atts = temp; appAtts = ( const XML_Char * * ) atts; for (i = 0; i < n; i++) ATTRIBUTE_ID * attId = getAttributeId ( parser , enc , atts [ i ] . name , atts [ i ] . name + XmlNameLength ( enc , atts [ i ] . name ) ) ; if ( ! attId )  if ( ( attId -> name ) [ - 1 ] )  ( attId -> name ) [ - 1 ] = 1; appAtts [ attIndex ++ ] = attId -> name; if ( ! atts [ i ] . normalized )  enum XML_Error result ; XML_Bool isCdata = XML_TRUE ; if ( attId -> maybeTokenized )  int j ; for (j = 0; j < nDefaultAtts; j++) if ( attId == elementType -> defaultAtts [ j ] . id )  isCdata = elementType -> defaultAtts [ j ] . isCdata; result = storeAttributeValue ( parser , enc , isCdata , atts [ i ] . valuePtr , atts [ i ] . valueEnd , & tempPool ); if ( result )  appAtts [ attIndex ] = poolStart ( & tempPool ); appAtts [ attIndex ] = poolStoreString ( & tempPool , enc , atts [ i ] . valuePtr , atts [ i ] . valueEnd ); static XML_Char poolStoreString(STRING_POOL *pool, const ENCODING const char *ptr, const char *end) if ( ! poolAppend ( pool , enc , ptr , end ) )  return NULL ; if ( pool -> ptr == pool -> end && ! poolGrow ( pool ) )  return NULL ; * ( pool -> ptr ) ++ = 0; return pool -> start ; if ( appAtts [ attIndex ] == 0 )  if ( attId -> prefix )  if ( attId -> xmlns )  enum XML_Error result = addBinding ( parser , attId -> prefix , attId , appAtts [ attIndex ] , bindingsPtr ) ; static enum addBinding(XML_Parser parser, PREFIX *prefix, const ATTRIBUTE_ID const XML_Char *uri, BINDING **bindingsPtr) static const XML_Char xmlNamespace [ ] = { 'h' , 't' , 't' , 'p' , ':' , '/' , '/' , 'w' , 'w' , 'w' , '.' , 'w' , '3' , '.' , 'o' , 'r' , 'g' , '/' , 'X' , 'M' , 'L' , '/' , '1' , '9' , '9' , '8' , '/' , 'n' , 'a' , 'm' , 'e' , 's' , 'p' , 'a' , 'c' , 'e' , '\0' } ; static const int xmlLen = ( int ) sizeof ( xmlNamespace ) / sizeof ( XML_Char ) - 1 ; static const XML_Char xmlnsNamespace [ ] = { 'h' , 't' , 't' , 'p' , ':' , '/' , '/' , 'w' , 'w' , 'w' , '.' , 'w' , '3' , '.' , 'o' , 'r' , 'g' , '/' , '2' , '0' , '0' , '0' , '/' , 'x' , 'm' , 'l' , 'n' , 's' , '/' , '\0' } ; static const int xmlnsLen = ( int ) sizeof ( xmlnsNamespace ) / sizeof ( XML_Char ) - 1 ; XML_Bool mustBeXML = XML_FALSE ; XML_Bool isXML = XML_TRUE ; XML_Bool isXMLNS = XML_TRUE ; BINDING * b ; int len ; if ( * uri == XML_T ( '\0' ) && prefix -> name )  return XML_ERROR_UNDECLARING_PREFIX ; if ( prefix -> name && prefix -> name [ 0 ] == XML_T ( 'x' ) && prefix -> name [ 1 ] == XML_T ( 'm' ) && prefix -> name [ 2 ] == XML_T ( 'l' ) )  if ( prefix -> name [ 3 ] == XML_T ( 'n' ) && prefix -> name [ 4 ] == XML_T ( 's' ) && prefix -> name [ 5 ] == XML_T ( '\0' ) )  return XML_ERROR_RESERVED_PREFIX_XMLNS ; if ( prefix -> name [ 3 ] == XML_T ( '\0' ) )  mustBeXML = XML_TRUE; for (len = 0; uri[len]; len++) if ( isXML && ( len > xmlLen || uri [ len ] != xmlNamespace [ len ] ) )  isXML = XML_FALSE; if ( ! mustBeXML && isXMLNS && ( len > xmlnsLen || uri [ len ] != xmlnsNamespace [ len ] ) )  isXMLNS = XML_FALSE; isXML = isXML && len == xmlLen; isXMLNS = isXMLNS && len == xmlnsLen; if ( mustBeXML != isXML )  return mustBeXML ? XML_ERROR_RESERVED_PREFIX_XML : XML_ERROR_RESERVED_NAMESPACE_URI ; if ( isXMLNS )  return XML_ERROR_RESERVED_NAMESPACE_URI ; if ( namespaceSeparator )  len ++; if ( freeBindingList )  b = freeBindingList; if ( len > b -> uriAlloc )  XML_Char * temp = ( XML_Char * ) REALLOC ( b -> uri , sizeof ( XML_Char ) * ( len + EXPAND_SPARE ) ) ; if ( temp == NULL )  return XML_ERROR_NO_MEMORY ; b = ( BINDING * ) MALLOC ( sizeof ( BINDING ) ); if ( ! b )  return XML_ERROR_NO_MEMORY ; b -> uri = ( XML_Char * ) MALLOC ( sizeof ( XML_Char ) * ( len + EXPAND_SPARE ) ); if ( ! b -> uri )  return XML_ERROR_NO_MEMORY ; return XML_ERROR_NONE ; if ( result )  attIndex ++; ( attId -> name ) [ - 1 ] = 2; attIndex ++; static ATTRIBUTE_ID getAttributeId(XML_Parser parser, const ENCODING const char *start, const char *end) DTD * const dtd = _dtd ATTRIBUTE_ID * id ; const XML_Char * name ; if ( ! poolAppendChar ( & dtd -> pool , XML_T ( '\0' ) ) )  name = poolStoreString ( & dtd -> pool , enc , start , end ); static XML_Char poolStoreString(STRING_POOL *pool, const ENCODING const char *ptr, const char *end) if ( ! poolAppend ( pool , enc , ptr , end ) )  return NULL ; if ( pool -> ptr == pool -> end && ! poolGrow ( pool ) )  return NULL ; * ( pool -> ptr ) ++ = 0; return pool -> start ; if ( ! name )  id = ( ATTRIBUTE_ID * ) lookup ( & dtd -> attributeIds , name , sizeof ( ATTRIBUTE_ID ) ); static NAMED lookup(HASH_TABLE *table, KEY name, size_t createSize) size_t i ; if ( table -> size == 0 )  size_t tsize ; if ( ! createSize )  table -> power = INIT_POWER; table -> size = ( size_t ) 1 << INIT_POWER; tsize = table -> size * sizeof ( NAMED * ); table -> v = ( NAMED * * ) table -> mem -> malloc_fcn ( tsize ); if ( ! table -> v )  memset ( table -> v , 0 , tsize ); i = hash ( name ) & ( ( unsigned long ) table -> size - 1 ); unsigned long h = hash ( name ) ; unsigned long mask = ( unsigned long ) table -> size - 1 ; unsigned char step = 0 ; i = h & mask; while ( table -> v [ i ] )  if ( keyeq ( name , table -> v [ i ] -> name ) )  if ( ! step )  step = PROBE_STEP ( h , mask , table -> power ); i < step ? ( i += table -> size - step ) : ( i -= step ); if ( ! createSize )  if ( table -> used >> ( table -> power - 1 ) )  unsigned char newPower = table -> power + 1 ; size_t newSize = ( size_t ) 1 << newPower ; unsigned long newMask = ( unsigned long ) newSize - 1 ; size_t tsize = newSize * sizeof ( NAMED * ) ; NAMED * * newV = ( NAMED * * ) table -> mem -> malloc_fcn ( tsize ) ; if ( ! newV )  memset ( newV , 0 , tsize ); for (i = 0; i < table->size; i++) if ( table -> v [ i ] )  unsigned long newHash = hash ( table -> v [ i ] -> name ) ; size_t j = newHash & newMask ; step = 0; while ( newV [ j ] )  if ( ! step )  step = PROBE_STEP ( newHash , newMask , newPower ); j < step ? ( j += newSize - step ) : ( j -= step ); newV [ j ] = table -> v [ i ]; table -> v = newV; table -> power = newPower; table -> size = newSize; i = h & newMask; step = 0; while ( table -> v [ i ] )  if ( ! step )  step = PROBE_STEP ( h , newMask , newPower ); i < step ? ( i += newSize - step ) : ( i -= step ); table -> v [ i ] = ( NAMED * ) table -> mem -> malloc_fcn ( createSize ); if ( ! table -> v [ i ] )  memset ( table -> v [ i ] , 0 , createSize ); table -> v [ i ] -> name = name; ( table -> used ) ++; return table -> v [ i ] ; 