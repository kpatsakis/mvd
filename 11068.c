static int fuse_send_open(struct fuse_conn *fc, u64 nodeid, struct file int opcode, struct fuse_open_out *outargp) struct fuse_open_in inarg ; memset ( & inarg , 0 , sizeof ( inarg ) ); inarg . flags = file -> f_flags & ~ ( O_CREAT | O_EXCL | O_NOCTTY ); inarg . flags &= ~O_TRUNC; args . in . args [ 0 ] . value = & inarg; args . out . numargs = 1; args . out . args [ 0 ] . size = sizeof ( * outargp ); args . out . args [ 0 ] . value = outargp; return fuse_simple_request ( fc , & args ) ; 