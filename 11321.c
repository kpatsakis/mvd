static int CVE_2008_4302_PATCHED_pipe_to_file(struct pipe_inode_info *pipe, struct pipe_buffer struct splice_desc *sd) struct file * file = sd -> file ; struct address_space * mapping = file -> f_mapping ; unsigned int offset , this_len ; struct page * page ; pgoff_t index ; int ret ; ret = buf -> ops -> pin ( pipe , buf ); if ( unlikely ( ret ) )  index = sd -> pos >> PAGE_CACHE_SHIFT; offset = sd -> pos & ~PAGE_CACHE_MASK; this_len = sd -> len; if ( this_len + offset > PAGE_CACHE_SIZE )  this_len = PAGE_CACHE_SIZE - offset; page = find_lock_page ( mapping , index ); if ( ! page )  ret = - ENOMEM; page = page_cache_alloc_cold ( mapping ); if ( unlikely ( ! page ) )  ret = add_to_page_cache_lru ( page , mapping , index , GFP_KERNEL ); if ( unlikely ( ret ) )  ret = mapping -> a_ops -> prepare_write ( file , page , offset , offset + this_len ); if ( unlikely ( ret ) )  if ( ret == AOP_TRUNCATED_PAGE )  if ( buf -> page != page )  char * src = buf -> ops -> map ( pipe , buf , 1 ) ; char * dst = kmap_atomic ( page , KM_USER1 ) ; memcpy ( dst + offset , src + buf -> offset , this_len ); kunmap_atomic ( dst , KM_USER1 ); ret = mapping -> a_ops -> commit_write ( file , page , offset , offset + this_len ); if ( ret )  if ( ret == AOP_TRUNCATED_PAGE )  