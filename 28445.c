status_t MPEG4Extractor::parseChunk(off64_t *offset, int depth) uint32_t hdr [ 2 ] ; if ( mDataSource -> readAt ( * offset , hdr , 8 ) < 8 )  uint64_t chunk_size = ntohl ( hdr [ 0 ] ) ; off64_t data_offset = * offset + 8 ; if ( chunk_size == 1 )  if ( mDataSource -> readAt ( * offset + 8 , & chunk_size , 8 ) < 8 )  chunk_size = ntoh64 ( chunk_size ); data_offset += 8; if ( chunk_type == FOURCC ( 's' , 't' , 'b' , 'l' ) )  if ( mDataSource -> flags ( ) & ( DataSource :: kWantsPrefetching | DataSource :: kIsCachingDataSource ) )  sp < MPEG4DataSource > cachedSource = new MPEG4DataSource ( mDataSource ) ; MPEG4DataSource::MPEG4DataSource(const sp<DataSource> &source) if ( cachedSource -> setCachedRange ( * offset , chunk_size ) == OK )  mDataSource = cachedSource; if ( chunk_size < 32 )  char buf [ 4 ] ; memset ( buf , 0 , 4 ); if ( mDataSource -> readAt ( data_offset + 4 , buf + 1 , 3 ) < 3 )  uint32_t defaultAlgorithmId = ntohl ( * ( ( int32_t * ) buf ) ) ; if ( defaultAlgorithmId > 1 )  memset ( buf , 0 , 4 ); if ( mDataSource -> readAt ( data_offset + 7 , buf + 3 , 1 ) < 1 )  uint32_t defaultIVSize = ntohl ( * ( ( int32_t * ) buf ) ) ; if ( ( defaultAlgorithmId == 0 && defaultIVSize != 0 ) || ( defaultAlgorithmId != 0 && defaultIVSize == 0 ) )  if ( defaultIVSize != 0 && defaultIVSize != 8 && defaultIVSize != 16 )  mLastTrack -> meta -> setInt32 ( kKeyCryptoDefaultIVSize , defaultIVSize ); 