static enum XML_Error entityValueInitProcessor(XML_Parser const char const char const char **nextPtr) int tok ; const char * start = s ; const char * next = start ; tok = XmlPrologTok ( encoding , start , end , & next ); if ( tok <= 0 )  if ( tok == XML_TOK_XML_DECL )  enum XML_Error result ; result = processXmlDecl ( parser , 0 , start , next ); if ( tok == XML_TOK_BOM && next == end && ! ps_finalBuffer )  start = next; static enum processXmlDecl(XML_Parser parser, int const char *s, const char *next) const char * encodingName = NULL ; const XML_Char * storedEncName = NULL ; const ENCODING * newEncoding = NULL ; const char * version = NULL ; const char * versionend ; if ( ! ( ns ? XmlParseXmlDeclNS : XmlParseXmlDecl ) ( isGeneralTextEntity , encoding , s , next , & eventPtr , & version , & versionend , & encodingName , & newEncoding , & standalone ) )  if ( xmlDeclHandler )  if ( encodingName != NULL )  storedEncName = poolStoreString ( & temp2Pool , encoding , encodingName , encodingName + XmlNameLength ( encoding , encodingName ) ); if ( ! storedEncName )  if ( version )  storedversion = poolStoreString ( & temp2Pool , encoding , version , versionend - encoding -> minBytesPerChar ); if ( ! storedversion )  if ( protocolEncodingName == NULL )  if ( newEncoding )  if ( encodingName )  if ( ! storedEncName )  storedEncName = poolStoreString ( & temp2Pool , encoding , encodingName , encodingName + XmlNameLength ( encoding , encodingName ) ); static XML_Char poolStoreString(STRING_POOL *pool, const ENCODING const char *ptr, const char *end) if ( ! poolAppend ( pool , enc , ptr , end ) )  if ( pool -> ptr == pool -> end && ! poolGrow ( pool ) )  static XML_Bool poolGrow(STRING_POOL *pool) if ( pool -> freeBlocks )  if ( pool -> start == 0 )  if ( pool -> end - pool -> start < pool -> freeBlocks -> size )  BLOCK * tem = pool -> freeBlocks -> next ; pool -> freeBlocks -> next = pool -> blocks; pool -> blocks = pool -> freeBlocks; pool -> freeBlocks = tem; memcpy ( pool -> blocks -> s , pool -> start , ( pool -> end - pool -> start ) * sizeof ( XML_Char ) ); pool -> ptr = pool -> blocks -> s + ( pool -> ptr - pool -> start ); pool -> start = pool -> blocks -> s; pool -> end = pool -> start + pool -> blocks -> size; 