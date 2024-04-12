static void eepro100_write(void *opaque, hwaddr uint64_t data, unsigned size) EEPRO100State * s = opaque ; switch ( size )  eepro100_write2 ( s , addr , data ); static void eepro100_write2(EEPRO100State * s, uint32_t addr, uint16_t val) switch ( addr )  s -> mem [ SCBAck ] = ( val >> 8 ); eepro100_write_mdi ( s ); static void eepro100_write_mdi(EEPRO100State *s) uint32_t val = e100_read_reg4 ( s , SCBCtrlMDI ) ; uint8_t raiseint = ( val & BIT ( 29 ) ) >> 29 ; uint8_t opcode = ( val & BITS ( 27 , 26 ) ) >> 26 ; uint8_t phy = ( val & BITS ( 25 , 21 ) ) >> 21 ; uint8_t reg = ( val & BITS ( 20 , 16 ) ) >> 16 ; uint16_t data = ( val & BITS ( 15 , 0 ) ) ; TRACE ( MDI , logout ( "val=0x%08x (int=%u, %s, phy=%u, %s, data=0x%04x\n" , val , raiseint , mdi_op_name [ opcode ] , phy , reg2name ( reg ) , data ) ); static const char *reg2name(uint8_t reg) static char buffer [ 10 ] ; if ( reg < ARRAY_SIZE ( mdi_reg_name ) )  snprintf ( buffer , sizeof ( buffer ) , "reg=0x%02x" , reg ); 