static void unregister_exten(struct skinny_line *l) char multi [ 256 ] ; char * stringp , * ext , * context ; if ( ast_strlen_zero ( regcontext ) )  stringp = multi; while ( ext = strsep ( & stringp , "&" ) )  if ( context = strchr ( ext , '@' ) )  * context ++ = '\0'; if ( ! ast_context_find ( context ) )  ast_log ( LOG_WARNING , "Context %s must exist in regcontext= in skinny.conf!\n" , context ); ast_context_remove_extension ( context , ext , 1 , NULL ); 