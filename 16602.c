 CVE_2013_1726_PATCHED_mar_read_product_info_block(MarFile struct ProductInformationBlock *infoBlock) int i , hasAdditionalBlocks , offsetAdditionalBlocks , numAdditionalBlocks , additionalBlockSize , additionalBlockID ; char buf [ 97 ] = { '\0' } ; for (i = 0; i < numAdditionalBlocks; ++i) if ( fread ( & additionalBlockSize , sizeof ( additionalBlockSize ) , 1 , mar -> fp ) != 1 )  additionalBlockSize = ntohl ( additionalBlockSize ) - sizeof ( additionalBlockSize ) - sizeof ( additionalBlockID ); if ( fread ( & additionalBlockID , sizeof ( additionalBlockID ) , 1 , mar -> fp ) != 1 )  additionalBlockID = ntohl ( additionalBlockID ); if ( PRODUCT_INFO_BLOCK_ID == additionalBlockID )  if ( additionalBlockSize > 96 )  if ( fread ( buf , additionalBlockSize , 1 , mar -> fp ) != 1 )  if ( fseek ( mar -> fp , additionalBlockSize , SEEK_CUR ) )  