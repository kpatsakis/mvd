static enum XML_Error internalEntityProcessor(XML_Parser const char const char const char **nextPtr) ENTITY * entity ; const char * textStart , * textEnd ; enum XML_Error result ; OPEN_INTERNAL_ENTITY * openEntity = openInternalEntities ; if ( ! openEntity )  entity = openEntity -> entity; textStart = ( ( char * ) entity -> textPtr ) + entity -> processed; textEnd = ( char * ) ( entity -> textPtr + entity -> textLen ); if ( entity -> is_param )  result = doContent ( parser , openEntity -> startTagLevel , internalEncoding , textStart , textEnd , & next , XML_FALSE ); static enum doContent(XML_Parser int const ENCODING const char const char const char XML_Bool haveMore) DTD * const dtd = _dtd const char * * eventPP ; if ( enc == encoding )  eventPP = & eventPtr; eventPP = & ( openInternalEntities -> internalEventPtr ); const char * next = s ; int tok = XmlContentTok ( enc , s , end , & next ) ; switch ( tok )  const XML_Char * name ; ENTITY * entity ; XML_Char ch = ( XML_Char ) XmlPredefinedEntityName ( enc , s + enc -> minBytesPerChar , next - enc -> minBytesPerChar ) ; if ( ch )  name = poolStoreString ( & dtd -> pool , enc , s + enc -> minBytesPerChar , next - enc -> minBytesPerChar ); if ( ! name )  entity = ( ENTITY * ) lookup ( & dtd -> generalEntities , name , 0 ); if ( ! dtd -> hasParamEntityRefs || dtd -> standalone )  if ( ! entity )  if ( ! entity -> is_internal )  if ( ! entity )  if ( entity -> open )  if ( entity -> notation )  if ( entity -> textPtr )  enum XML_Error result ; if ( ! defaultExpandInternalEntities )  result = processInternalEntity ( parser , entity , XML_FALSE ); if ( result != XML_ERROR_NONE )  if ( externalEntityRefHandler )  const XML_Char * context ; entity -> open = XML_TRUE; context = getContext ( parser ); entity -> open = XML_FALSE; if ( ! context )  if ( ! externalEntityRefHandler ( externalEntityRefHandlerArg , context , entity -> base , entity -> systemId , entity -> publicId ) )  TAG * tag ; enum XML_Error result ; XML_Char * toPtr ; if ( freeTagList )  tag = freeTagList; freeTagList = freeTagList -> parent; tag = ( TAG * ) MALLOC ( sizeof ( TAG ) ); if ( ! tag )  tag -> buf = ( char * ) MALLOC ( INIT_TAG_BUF_SIZE ); if ( ! tag -> buf )  tag -> bufEnd = tag -> buf + INIT_TAG_BUF_SIZE; tag -> bindings = NULL; tag -> parent = tagStack; tagStack = tag; tag -> name . localPart = NULL; tag -> name . prefix = NULL; tag -> rawName = s + enc -> minBytesPerChar; tag -> rawNameLength = XmlNameLength ( enc , tag -> rawName ); const char * rawNameEnd = tag -> rawName + tag -> rawNameLength ; const char * fromPtr = tag -> rawName ; toPtr = ( XML_Char * ) tag -> buf; int bufSize ; int convLen ; convLen = ( int ) ( toPtr - ( XML_Char * ) tag -> buf ); if ( fromPtr == rawNameEnd )  tag -> name . strLen = convLen; bufSize = ( int ) ( tag -> bufEnd - tag -> buf ) << 1; char * temp = ( char * ) REALLOC ( tag -> buf , bufSize ) ; if ( temp == NULL )  tag -> buf = temp; tag -> bufEnd = temp + bufSize; toPtr = ( XML_Char * ) temp + convLen; tag -> name . str = ( XML_Char * ) tag -> buf; result = storeAtts ( parser , enc , s , & ( tag -> name ) , & ( tag -> bindings ) ); if ( result )  const char * rawName = s + enc -> minBytesPerChar ; enum XML_Error result ; TAG_NAME name ; name . str = poolStoreString ( & tempPool , enc , rawName , rawName + XmlNameLength ( enc , rawName ) ); if ( ! name . str )  result = storeAtts ( parser , enc , s , & name , & bindings ); if ( result )  if ( tagLevel == 0 )  if ( tagLevel == startTagLevel )  int len ; const char * rawName ; TAG * tag = tagStack ; tagStack = tag -> parent; tag -> parent = freeTagList; freeTagList = tag; rawName = s + enc -> minBytesPerChar * 2; len = XmlNameLength ( enc , rawName ); if ( len != tag -> rawNameLength || memcmp ( tag -> rawName , rawName , len ) != 0 )  while ( tag -> bindings )  tag -> bindings = tag -> bindings -> nextTagBinding; if ( tagLevel == 0 )  int n = XmlCharRefNumber ( enc , s ) ; if ( n < 0 )  enum XML_Error result ; result = doCdataSection ( parser , enc , & next , end , nextPtr , haveMore ); if ( result != XML_ERROR_NONE )  if ( ! next )  if ( characterDataHandler )  if ( MUST_CONVERT ( enc , s ) )  if ( s == next )  * eventPP = s; if ( ! reportProcessingInstruction ( parser , enc , s , next ) )  if ( ! reportComment ( parser , enc , s , next ) )  * eventPP = s = next; switch ( ps_parsing )  static enum storeAtts(XML_Parser parser, const ENCODING const char *attStr, TAG_NAME BINDING **bindingsPtr) DTD * const dtd = _dtd ELEMENT_TYPE * elementType ; int nDefaultAtts ; const XML_Char * * appAtts ; int attIndex = 0 ; int i ; int n ; int nPrefixes = 0 ; elementType = ( ELEMENT_TYPE * ) lookup ( & dtd -> elementTypes , tagNamePtr -> str , 0 ); if ( ! elementType )  const XML_Char * name = poolCopyString ( & dtd -> pool , tagNamePtr -> str ) ; if ( ! name )  elementType = ( ELEMENT_TYPE * ) lookup ( & dtd -> elementTypes , name , sizeof ( ELEMENT_TYPE ) ); if ( ! elementType )  if ( ns && ! setElementTypePrefix ( parser , elementType ) )  nDefaultAtts = elementType -> nDefaultAtts; n = XmlGetAttributes ( enc , attStr , attsSize , atts ); if ( n + nDefaultAtts > attsSize )  ATTRIBUTE * temp ; attsSize = n + nDefaultAtts + INIT_ATTS_SIZE; temp = ( ATTRIBUTE * ) REALLOC ( ( void * ) atts , attsSize * sizeof ( ATTRIBUTE ) ); if ( temp == NULL )  atts = temp; appAtts = ( const XML_Char * * ) atts; for (i = 0; i < n; i++) ATTRIBUTE_ID * attId = getAttributeId ( parser , enc , atts [ i ] . name , atts [ i ] . name + XmlNameLength ( enc , atts [ i ] . name ) ) ; if ( ! attId )  if ( ( attId -> name ) [ - 1 ] )  ( attId -> name ) [ - 1 ] = 1; appAtts [ attIndex ++ ] = attId -> name; if ( ! atts [ i ] . normalized )  enum XML_Error result ; XML_Bool isCdata = XML_TRUE ; if ( attId -> maybeTokenized )  int j ; for (j = 0; j < nDefaultAtts; j++) if ( attId == elementType -> defaultAtts [ j ] . id )  isCdata = elementType -> defaultAtts [ j ] . isCdata; result = storeAttributeValue ( parser , enc , isCdata , atts [ i ] . valuePtr , atts [ i ] . valueEnd , & tempPool ); if ( result )  appAtts [ attIndex ] = poolStart ( & tempPool ); appAtts [ attIndex ] = poolStoreString ( & tempPool , enc , atts [ i ] . valuePtr , atts [ i ] . valueEnd ); if ( appAtts [ attIndex ] == 0 )  if ( attId -> prefix )  if ( attId -> xmlns )  enum XML_Error result = addBinding ( parser , attId -> prefix , attId , appAtts [ attIndex ] , bindingsPtr ) ; if ( result )  attIndex ++; nPrefixes ++; ( attId -> name ) [ - 1 ] = 2; attIndex ++; if ( elementType -> idAtt && ( elementType -> idAtt -> name ) [ - 1 ] )  for (i = 0; i < attIndex; i += 2) if ( appAtts [ i ] == elementType -> idAtt -> name )  for (i = 0; i < nDefaultAtts; i++) const DEFAULT_ATTRIBUTE * da = elementType -> defaultAtts + i ; if ( ! ( da -> id -> name ) [ - 1 ] && da -> value )  if ( da -> id -> prefix )  if ( da -> id -> xmlns )  enum XML_Error result = addBinding ( parser , da -> id -> prefix , da -> id , da -> value , bindingsPtr ) ; if ( result )  ( da -> id -> name ) [ - 1 ] = 3; appAtts [ attIndex ++ ] = da -> id -> name; appAtts [ attIndex ++ ] = da -> value; ( da -> id -> name ) [ - 1 ] = 2; nPrefixes ++; appAtts [ attIndex ++ ] = da -> id -> name; appAtts [ attIndex ++ ] = da -> value; ( da -> id -> name ) [ - 1 ] = 1; appAtts [ attIndex ++ ] = da -> id -> name; appAtts [ attIndex ++ ] = da -> value; appAtts [ attIndex ] = 0; i = 0; if ( nPrefixes )  int j ; unsigned long version = nsAttsVersion ; int nsAttsSize = ( int ) 1 << nsAttsPower ; if ( nPrefixes )  if ( ( nPrefixes << 1 ) >> nsAttsPower )  NS_ATT * temp ; while ( nPrefixes >> nsAttsPower ++ )  if ( nsAttsPower < 3 )  nsAttsPower = 3; nsAttsSize = ( int ) 1 << nsAttsPower; temp = ( NS_ATT * ) REALLOC ( nsAtts , nsAttsSize * sizeof ( NS_ATT ) ); if ( ! temp )  nsAtts = temp; version = 0; if ( ! version )  version = INIT_ATTS_VERSION; for (j = nsAttsSize; j != 0; ) nsAtts [ -- j ] . version = version; for (; i < attIndex; i += 2) const XML_Char * s = appAtts [ i ] ; if ( s [ - 1 ] == 2 )  ATTRIBUTE_ID * id ; const BINDING * b ; unsigned long uriHash = 0 ; ( ( XML_Char * ) s ) [ - 1 ] = 0; id = ( ATTRIBUTE_ID * ) lookup ( & dtd -> attributeIds , s , 0 ); b = id -> prefix -> binding; if ( ! b )  for (j = 0; j < b->uriLen; j++) const XML_Char c = b -> uri [ j ] ; if ( ! poolAppendChar ( & tempPool , c ) )  uriHash = CHAR_HASH ( uriHash , c ); while ( * s ++ != XML_T ( ':' ) )  const XML_Char c = * s ; if ( ! poolAppendChar ( & tempPool , * s ) )  uriHash = CHAR_HASH ( uriHash , c ); while ( * s ++ )  unsigned char step = 0 ; unsigned long mask = nsAttsSize - 1 ; j = uriHash & mask; while ( nsAtts [ j ] . version == version )  if ( uriHash == nsAtts [ j ] . hash )  const XML_Char * s1 = poolStart ( & tempPool ) ; const XML_Char * s2 = nsAtts [ j ] . uriName ; for (; *s1 == *s2 && *s1 != 0; s1++, s2++); if ( * s1 == 0 )  if ( ! step )  step = PROBE_STEP ( uriHash , mask , nsAttsPower ); j < step ? ( j += nsAttsSize - step ) : ( j -= step ); if ( ns_triplets )  tempPool . ptr [ - 1 ] = namespaceSeparator; s = b -> prefix -> name; if ( ! poolAppendChar ( & tempPool , * s ) )  while ( * s ++ )  s = poolStart ( & tempPool ); appAtts [ i ] = s; if ( ! -- nPrefixes )  i += 2; if ( s [ - 1 ] == 3 )  static const XML_Char xmlnsNamespace [ ] = { 'h' , 't' , 't' , 'p' , ':' , '/' , '/' , 'w' , 'w' , 'w' , '.' , 'w' , '3' , '.' , 'o' , 'r' , 'g' , '/' , '2' , '0' , '0' , '0' , '/' , 'x' , 'm' , 'l' , 'n' , 's' , '/' , '\0' } ; static const XML_Char xmlnsPrefix [ ] = { 'x' , 'm' , 'l' , 'n' , 's' , '\0' } ; ( ( XML_Char * ) s ) [ - 1 ] = 0; if ( ! poolAppendString ( & tempPool , xmlnsNamespace ) || ! poolAppendChar ( & tempPool , namespaceSeparator ) )  s += sizeof ( xmlnsPrefix ) / sizeof ( xmlnsPrefix [ 0 ] ) - 1; if ( * s == XML_T ( ':' ) )  if ( ! poolAppendChar ( & tempPool , * s ) )  while ( * s ++ )  if ( ns_triplets )  tempPool . ptr [ - 1 ] = namespaceSeparator; if ( ! poolAppendString ( & tempPool , xmlnsPrefix ) || ! poolAppendChar ( & tempPool , '\0' ) )  if ( ! poolAppendString ( & tempPool , xmlnsPrefix ) || ! poolAppendChar ( & tempPool , '\0' ) )  s = poolStart ( & tempPool ); appAtts [ i ] = s; ( ( XML_Char * ) s ) [ - 1 ] = 0; static NAMED lookup(HASH_TABLE *table, KEY name, size_t createSize) size_t i ; if ( table -> size == 0 )  unsigned long h = hash ( name ) ; unsigned long mask = ( unsigned long ) table -> size - 1 ; unsigned char step = 0 ; i = h & mask; while ( table -> v [ i ] )  if ( keyeq ( name , table -> v [ i ] -> name ) )  if ( ! step )  step = PROBE_STEP ( h , mask , table -> power ); i < step ? ( i += table -> size - step ) : ( i -= step ); if ( ! createSize )  if ( table -> used >> ( table -> power - 1 ) )  unsigned char newPower = table -> power + 1 ; size_t newSize = ( size_t ) 1 << newPower ; size_t tsize = newSize * sizeof ( NAMED * ) ; NAMED * * newV = ( NAMED * * ) table -> mem -> malloc_fcn ( tsize ) ; if ( ! newV )  memset ( newV , 0 , tsize ); while ( newV [ j ] )  newV [ j ] = table -> v [ i ]; table -> v = newV; table -> power = newPower; table -> size = newSize; while ( table -> v [ i ] )  table -> v [ i ] = ( NAMED * ) table -> mem -> malloc_fcn ( createSize ); if ( ! table -> v [ i ] )  memset ( table -> v [ i ] , 0 , createSize ); table -> v [ i ] -> name = name; ( table -> used ) ++; return table -> v [ i ] ; 