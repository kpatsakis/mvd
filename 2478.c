qcms_profile* qcms_profile_from_file(FILE *file) size_t length ; qcms_profile * profile ; void * data ; if ( ( data == NULL ) || ( length == 0 ) )  profile = qcms_profile_from_memory ( data , length ); qcms_profile* qcms_profile_from_memory(const void *mem, size_t size) uint32_t length ; struct mem_source source ; struct mem_source * src = & source ; struct tag_index index ; qcms_profile * profile ; source . buf = mem; source . size = size; source . valid = true; if ( size < 4 )  length = read_u32 ( src , 0 ); if ( length <= size )  source . size = length; if ( source . size <= 64 || source . size >= MAX_PROFILE_SIZE )  profile = qcms_profile_create ( ); if ( ! profile )  if ( ! src -> valid )  index = read_tag_table ( profile , src ); if ( find_tag ( index , TAG_CHAD ) )  profile -> chromaticAdaption = read_tag_s15Fixed16ArrayType ( src , index , TAG_CHAD ); profile -> chromaticAdaption . invalid = true; if ( profile -> color_space == RGB_SIGNATURE )  if ( find_tag ( index , TAG_A2B0 ) )  if ( read_u32 ( src , find_tag ( index , TAG_A2B0 ) -> offset ) == LUT8_TYPE || read_u32 ( src , find_tag ( index , TAG_A2B0 ) -> offset ) == LUT16_TYPE )  if ( read_u32 ( src , find_tag ( index , TAG_A2B0 ) -> offset ) == LUT_MAB_TYPE )  profile -> mAB = read_tag_lutmABType ( src , index , TAG_A2B0 ); if ( find_tag ( index , TAG_B2A0 ) )  if ( read_u32 ( src , find_tag ( index , TAG_B2A0 ) -> offset ) == LUT8_TYPE || read_u32 ( src , find_tag ( index , TAG_B2A0 ) -> offset ) == LUT16_TYPE )  profile -> B2A0 = read_tag_lutType ( src , index , TAG_B2A0 ); static struct lutType *read_tag_lutType(struct mem_source *src, struct tag_index index, uint32_t tag_id) struct tag * tag = find_tag ( index , tag_id ) ; static struct tag *find_tag(struct tag_index index, uint32_t tag_id) unsigned int i ; struct tag * tag = NULL ; for (i = 0; i < index.count; i++) if ( index . tags [ i ] . signature == tag_id )  return & index . tags [ i ] ; return tag ; uint32_t offset = tag -> offset ; uint32_t type = read_u32 ( src , offset ) ; static uint32_t read_u32(struct mem_source *mem, size_t offset) if ( offset > mem -> size - 4 )  be32 k ; memcpy ( & k , mem -> buf + offset , sizeof ( k ) ); return be32_to_cpu ( k ) ; 