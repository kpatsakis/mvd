static int skinny_call(struct ast_channel *ast, char *dest, int timeout) struct skinny_subchannel * sub = ast -> tech_pvt ; struct skinny_line * l = sub -> line ; struct skinny_device * d = l -> device ; struct ast_var_t * current ; if ( ! d -> registered )  if ( ( ast -> _state != AST_STATE_DOWN ) && ( ast -> _state != AST_STATE_RESERVED ) )  if ( l -> dnd )  if ( AST_LIST_NEXT ( sub , list ) && ! l -> callwaiting )  if ( ! ( strcasecmp ( ast_var_name ( current ) , "SKINNY_AUTOANSWER" ) ) )  if ( d -> hookstate == SKINNY_ONHOOK && ! sub -> aa_sched )  int aatime ; curstr = strsep ( & stringp , ":" ); aatime = atoi ( curstr ); while ( curstr = strsep ( & stringp , ":" ) )  if ( ! ( strcasecmp ( curstr , "BEEP" ) ) )  if ( ! ( strcasecmp ( curstr , "MUTE" ) ) )  sub -> aa_mute = 1; if ( aatime )  sub -> aa_sched = skinny_sched_add ( aatime , skinny_autoanswer_cb , sub ); setsubstate ( sub , SUBSTATE_RINGIN ); static void setsubstate(struct skinny_subchannel *sub, int state) struct skinny_line * l = sub -> line ; struct skinny_subline * subline = sub -> subline ; struct skinny_device * d = l -> device ; struct ast_channel * c = sub -> owner ; int actualstate = state ; if ( sub -> substate == SUBSTATE_ONHOOK )  if ( state != SUBSTATE_RINGIN && sub -> aa_sched )  sub -> aa_sched = 0; sub -> aa_beep = 0; sub -> aa_mute = 0; if ( ( state == SUBSTATE_RINGIN ) && ( ( d -> hookstate == SKINNY_OFFHOOK ) || ( AST_LIST_NEXT ( AST_LIST_FIRST ( & l -> sub ) , list ) ) ) )  actualstate = SUBSTATE_CALLWAIT; if ( ( state == SUBSTATE_CONNECTED ) && ( ! subline ) && ( AST_LIST_FIRST ( & l -> sublines ) ) )  const char * slastation ; struct skinny_subline * tmpsubline ; slastation = pbx_builtin_getvar_helper ( c , "SLASTATION" ); if ( slastation )  subline = tmpsubline; if ( subline )  subline -> sub = sub; sub -> subline = subline; subline -> callid = sub -> callid; if ( subline )  switch ( actualstate )  if ( sub -> substate != SUBSTATE_CONNECTED )  ast_log ( LOG_WARNING , "Cannot set substate to SUBSTATE_HOLD from %s (on call-%d)\n" , substate2str ( sub -> substate ) , sub -> callid ); static char *substate2str(int ind) char * tmp ; switch ( ind )  if ( ! ( tmp = ast_threadstorage_get ( & substate2str_threadbuf , SUBSTATE2STR_BUFSIZE ) ) )  snprintf ( tmp , SUBSTATE2STR_BUFSIZE , "UNKNOWN-%d" , ind ); return tmp ; 