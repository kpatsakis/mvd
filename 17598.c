static ATTRIBUTE_ID getAttributeId(XML_Parser parser, const ENCODING const char *start, const char *end) DTD * const dtd = _dtd const XML_Char * name ; if ( ! poolAppendChar ( & dtd -> pool , XML_T ( '\0' ) ) )  name = poolStoreString ( & dtd -> pool , enc , start , end ); static XML_Char poolStoreString(STRING_POOL *pool, const ENCODING const char *ptr, const char *end) if ( ! poolAppend ( pool , enc , ptr , end ) )  static XML_Char poolAppend(STRING_POOL *pool, const ENCODING const char *ptr, const char *end) if ( ! pool -> ptr && ! poolGrow ( pool ) )  static XML_Bool poolGrow(STRING_POOL *pool) if ( pool -> freeBlocks )  if ( pool -> start == 0 )  if ( pool -> end - pool -> start < pool -> freeBlocks -> size )  BLOCK * tem = pool -> freeBlocks -> next ; pool -> freeBlocks -> next = pool -> blocks; pool -> blocks = pool -> freeBlocks; pool -> freeBlocks = tem; memcpy ( pool -> blocks -> s , pool -> start , ( pool -> end - pool -> start ) * sizeof ( XML_Char ) ); pool -> ptr = pool -> blocks -> s + ( pool -> ptr - pool -> start ); pool -> start = pool -> blocks -> s; pool -> end = pool -> start + pool -> blocks -> size; 