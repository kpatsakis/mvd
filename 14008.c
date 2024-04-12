static void v9fs_lcreate(void *opaque) int32_t dfid , flags , mode ; gid_t gid ; ssize_t offset = 7 ; V9fsFidState * fidp ; struct stat stbuf ; V9fsQID qid ; V9fsPDU * pdu = opaque ; err = pdu_unmarshal ( pdu , offset , "dsddd" , & dfid , & name , & flags , & mode , & gid ); if ( err < 0 )  fidp = get_fid ( pdu , dfid ); static V9fsFidState *get_fid(V9fsPDU *pdu, int32_t fid) int err ; V9fsFidState * f ; V9fsState * s = pdu -> s ; for (f = s->fid_list; f; f = f->next) if ( f -> fid == fid )  f -> ref ++; err = v9fs_reopen_fid ( pdu , f ); if ( err < 0 )  return NULL ; return f ; return NULL ; if ( fidp == NULL )  flags = get_dotl_openflags ( pdu -> s , flags ); static int get_dotl_openflags(V9fsState *s, int oflags) int flags ; flags = dotl_to_open_flags ( oflags ); static int dotl_to_open_flags(int flags) int i ; int oflags = flags & O_ACCMODE ; struct dotl_openflag_map dotl_oflag_map [ ] P9_DOTL_CREATE , O_CREAT P9_DOTL_EXCL , O_EXCL P9_DOTL_NOCTTY , O_NOCTTY P9_DOTL_TRUNC , O_TRUNC P9_DOTL_APPEND , O_APPEND P9_DOTL_NONBLOCK , O_NONBLOCK P9_DOTL_DSYNC , O_DSYNC P9_DOTL_FASYNC , FASYNC P9_DOTL_DIRECT , O_DIRECT P9_DOTL_LARGEFILE , O_LARGEFILE P9_DOTL_DIRECTORY , O_DIRECTORY P9_DOTL_NOFOLLOW , O_NOFOLLOW P9_DOTL_NOATIME , O_NOATIME P9_DOTL_SYNC , O_SYNC , for (i = 0; i < ARRAY_SIZE(dotl_oflag_map); i++) if ( flags & dotl_oflag_map [ i ] . dotl_flag )  oflags |= dotl_oflag_map [ i ] . open_flag; return oflags ; flags &= ~ ( O_NOCTTY | O_ASYNC | O_CREAT ); flags &= ~O_DIRECT; return flags ; err = v9fs_co_open2 ( pdu , fidp , & name , gid , flags | O_CREAT , mode , & stbuf ); if ( err < 0 )  stat_to_qid ( & stbuf , & qid ); static void stat_to_qid(const struct stat *stbuf, V9fsQID *qidp) size_t size ; memset ( & qidp -> path , 0 , sizeof ( qidp -> path ) ); size = MIN ( sizeof ( stbuf -> st_ino ) , sizeof ( qidp -> path ) ); memcpy ( & qidp -> path , & stbuf -> st_ino , size ); qidp -> version = stbuf -> st_mtime ^ ( stbuf -> st_size << 8 ); qidp -> type = 0; qidp -> type |= P9_QID_TYPE_DIR; qidp -> type |= P9_QID_TYPE_SYMLINK; 