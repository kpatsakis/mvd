static void activatesub(struct skinny_subchannel *sub, int state) struct skinny_line * l = sub -> line ; if ( sub == l -> activesub )  setsubstate ( sub , state ); static void setsubstate(struct skinny_subchannel *sub, int state) struct skinny_line * l = sub -> line ; struct skinny_subline * subline = sub -> subline ; struct ast_channel * c = sub -> owner ; if ( sub -> substate == SUBSTATE_ONHOOK )  if ( state != SUBSTATE_RINGIN && sub -> aa_sched )  sub -> aa_sched = 0; sub -> aa_beep = 0; sub -> aa_mute = 0; if ( ( state == SUBSTATE_CONNECTED ) && ( ! subline ) && ( AST_LIST_FIRST ( & l -> sublines ) ) )  const char * slastation ; struct skinny_subline * tmpsubline ; slastation = pbx_builtin_getvar_helper ( c , "SLASTATION" ); if ( slastation )  subline = tmpsubline; if ( subline )  subline -> sub = sub; sub -> subline = subline; subline -> callid = sub -> callid; if ( ! ( subline == tmpsubline ) )  if ( ! strcasecmp ( subline -> lnname , tmpsubline -> lnname ) )  tmpsubline -> callid = callnums ++; transmit_callstate ( tmpsubline -> line -> device , tmpsubline -> line -> instance , tmpsubline -> callid , SKINNY_OFFHOOK ); static void transmit_callstate(struct skinny_device *d, int buttonInstance, unsigned callid, int state) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct call_state_message ) , CALL_STATE_MESSAGE ) ) )  if ( skinnydebug )  ast_verb ( 3 , "Transmitting CALL_STATE_MESSAGE to %s - line %d, callid %d, state %s\n" , d -> name , buttonInstance , callid , callstate2str ( state ) ); static char *callstate2str(int ind) char * tmp ; switch ( ind )  if ( ! ( tmp = ast_threadstorage_get ( & callstate2str_threadbuf , CALLSTATE2STR_BUFSIZE ) ) )  snprintf ( tmp , CALLSTATE2STR_BUFSIZE , "UNKNOWN-%d" , ind ); return tmp ; 