static void fw_cfg_init1(DeviceState *dev) FWCfgState * s = FW_CFG ( dev ) ; fw_cfg_add_i16 ( s , FW_CFG_BOOT_MENU , ( uint16_t ) boot_menu ); void fw_cfg_add_i16(FWCfgState *s, uint16_t key, uint16_t value) uint16_t * copy ; copy = g_malloc ( sizeof ( value ) ); * copy = cpu_to_le16 ( value ); fw_cfg_add_bytes ( s , key , copy , sizeof ( value ) ); void fw_cfg_add_bytes(FWCfgState *s, uint16_t key, void *data, size_t len) fw_cfg_add_bytes_read_callback ( s , key , NULL , NULL , data , len ); static void fw_cfg_add_bytes_read_callback(FWCfgState *s, uint16_t FWCfgReadCallback void void *data, size_t len) key &= FW_CFG_ENTRY_MASK; assert ( key < FW_CFG_MAX_ENTRY && len < UINT32_MAX ); 