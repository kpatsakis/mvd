static int CVE_2009_0746_VULN_make_indexed_dir(handle_t *handle, struct dentry struct inode *inode, struct buffer_head *bh) struct inode * dir = dentry -> d_parent -> d_inode ; struct buffer_head * bh2 ; struct dx_root * root ; int retval ; retval = ext4_journal_get_write_access ( handle , bh ); if ( retval )  root = ( struct dx_root * ) bh -> b_data; bh2 = ext4_append ( handle , dir , & block , & retval ); if ( ! ( bh2 ) )  memset ( & root -> info , 0 , sizeof ( root -> info ) ); root -> info . info_length = sizeof ( root -> info ); root -> info . hash_version = EXT4_SB ( dir -> i_sb ) -> s_def_hash_version; entries = root -> entries; dx_set_block ( entries , 1 ); dx_set_count ( entries , 1 ); dx_set_limit ( entries , dx_root_limit ( dir , sizeof ( root -> info ) ) ); hinfo . hash_version = root -> info . hash_version; hinfo . seed = EXT4_SB ( dir -> i_sb ) -> s_hash_seed; ext4fs_dirhash ( name , namelen , & hinfo ); frame -> entries = entries; frame -> at = entries; frame -> bh = bh; de = do_split ( handle , dir , & bh , frame , & hinfo , & retval ); if ( ! ( de ) )  return add_dirent_to_buf ( handle , dentry , inode , de , bh ) ; 