 http_dissector_add(guint32 port, dissector_handle_t handle) dissector_add_uint ( "http.port" , port , handle );  dissector_add_uint(const char *name, const guint32 pattern, dissector_handle_t handle) dissector_table_t sub_dissectors ; sub_dissectors = find_dissector_table ( name ); if ( sub_dissectors == NULL )  dissector_add_handle ( name , handle );  dissector_add_handle(const char *name, dissector_handle_t handle) dissector_table_t sub_dissectors = find_dissector_table ( name ) ; if ( sub_dissectors == NULL )  fprintf ( stderr , "OOPS: dissector table \"%s\" doesn't exist\n" , name ); fprintf ( stderr , "Protocol being registered is \"%s\"\n" , proto_get_protocol_long_name ( handle -> protocol ) ); 