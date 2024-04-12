 CClosure::Create(JSContext* HandleObject HandleObject HandleObject jsval PRFuncPtr* fnptr) RootedValue errVal ( cx , errVal_ ) ; RootedObject result ( cx , JS_NewObject ( cx , & sCClosureClass ) ) ; if ( ! result )  FunctionInfo * fninfo = FunctionType :: GetFunctionInfo ( typeObj ) ; RootedObject proto ( cx ) ; if ( ! JS_GetPrototype ( cx , typeObj , & proto ) )  mozilla :: UniquePtr < uint8_t [ ] , JS :: FreePolicy > errResult ; if ( ! errVal . isUndefined ( ) )  if ( CType :: GetTypeCode ( fninfo -> mReturnType ) == TYPE_void_t )   CType::GetTypeCode(JSObject* typeObj) jsval result = JS_GetReservedSlot ( typeObj , SLOT_TYPECODE ) ; return TypeCode ( result . toInt32 ( ) ) ; size_t rvSize = CType :: GetSize ( fninfo -> mReturnType ) ;  CType::GetSize(JSObject* obj) jsval size = JS_GetReservedSlot ( obj , SLOT_SIZE ) ; if ( size . isInt32 ( ) )  return size . toInt32 ( ) ; return Convert < size_t > ( size . toDouble ( ) ) ; errResult = result -> zone ( ) -> make_pod_array < uint8_t > ( rvSize ); if ( ! errResult )  if ( ! ImplicitConvert ( cx , errVal , fninfo -> mReturnType , errResult . get ( ) , false , nullptr ) )  static ImplicitConvert(JSContext* HandleValue JSObject* void* bool bool* freePointer) RootedObject targetType ( cx , targetType_ ) ; RootedObject valObj ( cx , nullptr ) ; if ( val . isObject ( ) )  valObj = & val . toObject ( ); if ( CData :: IsCData ( valObj ) )   CData::IsCData(JSObject* obj) return JS_GetClass ( obj ) == & sCDataClass ; sourceData = valObj; sourceType = CData :: GetCType ( sourceData );  CData::GetCType(JSObject* dataObj) jsval slot = JS_GetReservedSlot ( dataObj , SLOT_CTYPE ) ; JSObject * typeObj = slot . toObjectOrNull ( ) ; return typeObj ; if ( CType :: TypesEqual ( sourceType , targetType ) )   CType::TypesEqual(JSObject* t1, JSObject* t2) if ( t1 == t2 )  return true ; TypeCode c1 = GetTypeCode ( t1 ) ; TypeCode c2 = GetTypeCode ( t2 ) ; if ( c1 != c2 )  return false ; switch ( c1 )  JSObject * b1 = PointerType :: GetBaseType ( t1 ) ;  PointerType::GetBaseType(JSObject* obj) jsval type = JS_GetReservedSlot ( obj , SLOT_TARGET_T ) ; return & type . toObject ( ) ; JSObject * b2 = PointerType :: GetBaseType ( t2 ) ;  PointerType::GetBaseType(JSObject* obj) jsval type = JS_GetReservedSlot ( obj , SLOT_TARGET_T ) ; return & type . toObject ( ) ; return TypesEqual ( b1 , b2 ) ; FunctionInfo * f1 = FunctionType :: GetFunctionInfo ( t1 ) ; FunctionInfo * f2 = FunctionType :: GetFunctionInfo ( t2 ) ; if ( f1 -> mABI != f2 -> mABI )  return false ; if ( ! TypesEqual ( f1 -> mReturnType , f2 -> mReturnType ) )  return false ; if ( f1 -> mArgTypes . length ( ) != f2 -> mArgTypes . length ( ) )  return false ; if ( f1 -> mIsVariadic != f2 -> mIsVariadic )  return false ; for (size_t i = 0; i < f1->mArgTypes.length(); ++i) if ( ! TypesEqual ( f1 -> mArgTypes [ i ] , f2 -> mArgTypes [ i ] ) )  return false ; return true ; size_t s1 = 0 , s2 = 0 ; bool d1 = ArrayType :: GetSafeLength ( t1 , & s1 ) ;  ArrayType::GetSafeLength(JSObject* obj, size_t* result) jsval length = JS_GetReservedSlot ( obj , SLOT_LENGTH ) ; if ( length . isInt32 ( ) )  return true ; if ( length . isDouble ( ) )  return true ; return false ; bool d2 = ArrayType :: GetSafeLength ( t2 , & s2 ) ;  ArrayType::GetSafeLength(JSObject* obj, size_t* result) jsval length = JS_GetReservedSlot ( obj , SLOT_LENGTH ) ; if ( length . isInt32 ( ) )  return true ; if ( length . isDouble ( ) )  return true ; return false ; if ( d1 != d2 || ( d1 && s1 != s2 ) )  return false ; JSObject * b1 = ArrayType :: GetBaseType ( t1 ) ;  ArrayType::GetBaseType(JSObject* obj) jsval type = JS_GetReservedSlot ( obj , SLOT_ELEMENT_T ) ; return & type . toObject ( ) ; JSObject * b2 = ArrayType :: GetBaseType ( t2 ) ;  ArrayType::GetBaseType(JSObject* obj) jsval type = JS_GetReservedSlot ( obj , SLOT_ELEMENT_T ) ; return & type . toObject ( ) ; return TypesEqual ( b1 , b2 ) ; return false ; return true ; if ( CDataFinalizer :: IsCDataFinalizer ( valObj ) )   CDataFinalizer::IsCDataFinalizer(JSObject* obj) return JS_GetClass ( obj ) == & sCDataFinalizerClass ; sourceData = valObj; sourceType = CDataFinalizer :: GetCType ( cx , sourceData );  CDataFinalizer::GetCType(JSContext* cx, JSObject* obj) jsval valData = JS_GetReservedSlot ( obj , SLOT_DATAFINALIZER_VALTYPE ) ; if ( valData . isUndefined ( ) )  return nullptr ; return valData . toObjectOrNull ( ) ; CDataFinalizer :: Private * p = ( CDataFinalizer :: Private * ) JS_GetPrivate ( sourceData ) ; if ( ! p )  if ( CType :: TypesEqual ( sourceType , targetType ) )   CType::TypesEqual(JSObject* t1, JSObject* t2) if ( t1 == t2 )  return true ; TypeCode c1 = GetTypeCode ( t1 ) ; TypeCode c2 = GetTypeCode ( t2 ) ; if ( c1 != c2 )  return false ; switch ( c1 )  JSObject * b1 = PointerType :: GetBaseType ( t1 ) ; JSObject * b2 = PointerType :: GetBaseType ( t2 ) ; return TypesEqual ( b1 , b2 ) ; FunctionInfo * f1 = FunctionType :: GetFunctionInfo ( t1 ) ; FunctionInfo * f2 = FunctionType :: GetFunctionInfo ( t2 ) ; if ( f1 -> mABI != f2 -> mABI )  return false ; if ( ! TypesEqual ( f1 -> mReturnType , f2 -> mReturnType ) )  return false ; if ( f1 -> mArgTypes . length ( ) != f2 -> mArgTypes . length ( ) )  return false ; if ( f1 -> mIsVariadic != f2 -> mIsVariadic )  return false ; if ( ! TypesEqual ( f1 -> mArgTypes [ i ] , f2 -> mArgTypes [ i ] ) )  return false ; return true ; size_t s1 = 0 , s2 = 0 ; bool d1 = ArrayType :: GetSafeLength ( t1 , & s1 ) ; bool d2 = ArrayType :: GetSafeLength ( t2 , & s2 ) ; if ( d1 != d2 || ( d1 && s1 != s2 ) )  return false ; JSObject * b1 = ArrayType :: GetBaseType ( t1 ) ; JSObject * b2 = ArrayType :: GetBaseType ( t2 ) ; return TypesEqual ( b1 , b2 ) ; return false ; return true ; TypeCode targetCode = CType :: GetTypeCode ( targetType ) ;  CType::GetTypeCode(JSObject* typeObj) jsval result = JS_GetReservedSlot ( typeObj , SLOT_TYPECODE ) ; return TypeCode ( result . toInt32 ( ) ) ; switch ( targetCode )  RootedObject baseType ( cx , ArrayType :: GetBaseType ( targetType ) ) ;  ArrayType::GetBaseType(JSObject* obj) jsval type = JS_GetReservedSlot ( obj , SLOT_ELEMENT_T ) ; return & type . toObject ( ) ; size_t targetLength = ArrayType :: GetLength ( targetType ) ;  ArrayType::GetLength(JSObject* obj) jsval length = JS_GetReservedSlot ( obj , SLOT_LENGTH ) ; if ( length . isInt32 ( ) )  return length . toInt32 ( ) ; return Convert < size_t > ( length . toDouble ( ) ) ; if ( val . isString ( ) )  if ( val . isObject ( ) && JS_IsArrayObject ( cx , valObj ) )  if ( val . isObject ( ) && JS_IsArrayBufferObject ( valObj ) )  uint32_t sourceLength = JS_GetArrayBufferByteLength ( valObj ) ; size_t elementSize = CType :: GetSize ( baseType ) ;  CType::GetSize(JSObject* obj) jsval size = JS_GetReservedSlot ( obj , SLOT_SIZE ) ; if ( size . isInt32 ( ) )  return size . toInt32 ( ) ; return Convert < size_t > ( size . toDouble ( ) ) ; size_t arraySize = elementSize * targetLength ; if ( arraySize != size_t ( sourceLength ) )  JS :: AutoCheckCannotGC nogc ; memcpy ( buffer , JS_GetArrayBufferData ( valObj , nogc ) , sourceLength ); 