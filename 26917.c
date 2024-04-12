 StructType::ConstructData(JSContext* HandleObject const CallArgs& args) if ( ! CType :: IsCType ( obj ) || CType :: GetTypeCode ( obj ) != TYPE_struct )   CType::GetTypeCode(JSObject* typeObj) jsval result = JS_GetReservedSlot ( typeObj , SLOT_TYPECODE ) ; return TypeCode ( result . toInt32 ( ) ) ;  CType::IsCType(JSObject* obj) return JS_GetClass ( obj ) == & sCTypeClass ; if ( ! CType :: IsSizeDefined ( obj ) )   CType::IsSizeDefined(JSObject* obj) jsval size = JS_GetReservedSlot ( obj , SLOT_SIZE ) ; return ! size . isUndefined ( ) ; JSObject * result = CData :: Create ( cx , obj , NullPtr ( ) , nullptr , true ) ;  CData::Create(JSContext* HandleObject HandleObject void* bool ownResult) jsval slot = JS_GetReservedSlot ( typeObj , SLOT_PROTO ) ; RootedObject proto ( cx , & slot . toObject ( ) ) ; RootedObject parent ( cx , JS_GetParent ( typeObj ) ) ; RootedObject dataObj ( cx , JS_NewObjectWithGivenProto ( cx , & sCDataClass , proto , parent ) ) ; if ( ! dataObj )  return nullptr ; char * * buffer = cx -> new_ < char * > ( ) if ( ! buffer )  return nullptr ; char * data ; if ( ! ownResult )  data = static_cast < char * > source size_t size = CType :: GetSize ( typeObj ) ;  CType::GetSize(JSObject* obj) jsval size = JS_GetReservedSlot ( obj , SLOT_SIZE ) ; if ( size . isInt32 ( ) )  return size . toInt32 ( ) ; return Convert < size_t > ( size . toDouble ( ) ) ; data = dataObj -> zone ( ) -> pod_malloc < char > ( size ); if ( ! data )  return nullptr ; return dataObj ; if ( ! result )  if ( args . length ( ) == 0 )  char * buffer = static_cast < char * > CData :: GetData ( result )  CData::GetData(JSObject* dataObj) void * * buffer = static_cast < void * * > slot . toPrivate ( ) return * buffer ; const FieldInfoHash * fields = GetFieldInfo ( obj ) ; if ( args . length ( ) == 1 )  if ( ExplicitConvert ( cx , args [ 0 ] , obj , buffer ) )  if ( fields -> count ( ) != 1 )  if ( ! JS_IsExceptionPending ( cx ) )  if ( args . length ( ) == fields -> count ( ) )  for (FieldInfoHash::Range r = fields->all(); !r.empty(); r.popFront()) const FieldInfo & field = r . front ( ) . value ( ) ; if ( ! ImplicitConvert ( cx , args [ field . mIndex ] , field . mType , buffer + field . mOffset , false , nullptr ) )  static ImplicitConvert(JSContext* HandleValue JSObject* void* bool bool* freePointer) RootedObject targetType ( cx , targetType_ ) ; JSObject * sourceData = nullptr ; JSObject * sourceType = nullptr ; RootedObject valObj ( cx , nullptr ) ; if ( val . isObject ( ) )  valObj = & val . toObject ( ); if ( CData :: IsCData ( valObj ) )  sourceData = valObj; sourceType = CData :: GetCType ( sourceData ); if ( CType :: TypesEqual ( sourceType , targetType ) )  if ( CDataFinalizer :: IsCDataFinalizer ( valObj ) )  sourceData = valObj; sourceType = CDataFinalizer :: GetCType ( cx , sourceData ); CDataFinalizer :: Private * p = ( CDataFinalizer :: Private * ) JS_GetPrivate ( sourceData ) ; if ( ! p )  if ( CType :: TypesEqual ( sourceType , targetType ) )  TypeCode targetCode = CType :: GetTypeCode ( targetType ) ; switch ( targetCode )  bool result ; if ( ! jsvalToBool ( cx , val , & result ) )  * static_cast < bool * > ( buffer ) = result type result ; type result ; type result ; if ( ! jsvalToFloat ( cx , val , & result ) )  * static_cast < type * > ( buffer ) = result if ( val . isNull ( ) )  * static_cast < void * * > ( buffer ) = nullptr JS :: Rooted < JSObject * > baseType ( cx , PointerType :: GetBaseType ( targetType ) ) ; if ( sourceData )  TypeCode sourceCode = CType :: GetTypeCode ( sourceType ) ; bool voidptrTarget = CType :: GetTypeCode ( baseType ) == TYPE_void_t ; if ( sourceCode == TYPE_pointer && voidptrTarget )  if ( sourceCode == TYPE_array )  JSObject * elementType = ArrayType :: GetBaseType ( sourceType ) ; if ( voidptrTarget || CType :: TypesEqual ( baseType , elementType ) )  * static_cast < void * * > ( buffer ) = sourceBuffer if ( isArgument && val . isString ( ) )  if ( val . isObject ( ) && JS_IsArrayBufferObject ( valObj ) )  if ( val . isObject ( ) && JS_IsArrayBufferViewObject ( valObj ) )  if ( ! CanConvertTypedArrayItemTo ( baseType , valObj , cx ) )  if ( ! isArgument )  void * ptr ; JS :: AutoCheckCannotGC nogc ; ptr = JS_GetArrayBufferViewData ( valObj , nogc ); if ( ! ptr )  * static_cast < void * * > ( buffer ) = ptr RootedObject baseType ( cx , ArrayType :: GetBaseType ( targetType ) ) ; size_t targetLength = ArrayType :: GetLength ( targetType ) ; if ( val . isString ( ) )  JSString * sourceString = val . toString ( ) ; JSLinearString * sourceLinear = sourceString -> ensureLinear ( cx ) ; if ( ! sourceLinear )  switch ( CType :: GetTypeCode ( baseType ) )  size_t nbytes = GetDeflatedUTF8StringLength ( cx , sourceLinear ) ; if ( nbytes == ( size_t ) - 1 )  if ( targetLength < nbytes )  char * charBuffer = static_cast < char * > buffer if ( val . isObject ( ) && ! sourceData )  AutoIdArray props ( cx , JS_Enumerate ( cx , valObj ) ) ; if ( ! props )  size_t structSize = CType :: GetSize ( targetType ) ; auto intermediate = cx -> make_pod_array < char > ( structSize ) if ( ! intermediate )  const FieldInfoHash * fields = StructType :: GetFieldInfo ( targetType ) ; if ( props . length ( ) != fields -> count ( ) )  RootedId id ( cx ) ; for (size_t i = 0; i < props.length(); ++i) id = props [ i ]; if ( ! JSID_IS_STRING ( id ) )  JSFlatString * name = JSID_TO_FLAT_STRING ( id ) ; const FieldInfo * field = StructType :: LookupField ( cx , targetType , name ) ; if ( ! field )  RootedValue prop ( cx ) ; if ( ! JS_GetPropertyById ( cx , valObj , id , & prop ) )  char * fieldData = intermediate . get ( ) + field -> mOffset ; if ( ! ImplicitConvert ( cx , prop , field -> mType , fieldData , false , nullptr ) )  memcpy ( buffer , intermediate . get ( ) , structSize ); 