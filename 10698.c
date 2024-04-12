static void mmio_ide_write (void *opaque, target_phys_addr_t uint32_t val) MMIOState * s = ( MMIOState * ) opaque ; IDEState * ide = ( IDEState * ) s -> dev ; addr >>= s -> shift; if ( addr & 7 )  ide_ioport_write ( ide , addr , val ); static void ide_ioport_write(void *opaque, uint32_t addr, uint32_t val) IDEState * ide_if = opaque ; IDEState * s ; int unit , n ; addr &= 7; if ( addr != 7 && ( ide_if -> cur_drive -> status & ( BUSY_STAT | DRQ_STAT ) ) )  switch ( addr )  ide_if [ 0 ] . hob_feature = ide_if [ 0 ] . feature; ide_if [ 1 ] . hob_feature = ide_if [ 1 ] . feature; ide_if [ 0 ] . feature = val; ide_if [ 1 ] . feature = val; ide_if [ 0 ] . hob_nsector = ide_if [ 0 ] . nsector; ide_if [ 1 ] . hob_nsector = ide_if [ 1 ] . nsector; ide_if [ 0 ] . nsector = val; ide_if [ 1 ] . nsector = val; ide_if [ 0 ] . hob_sector = ide_if [ 0 ] . sector; ide_if [ 1 ] . hob_sector = ide_if [ 1 ] . sector; ide_if [ 0 ] . sector = val; ide_if [ 1 ] . sector = val; ide_if [ 0 ] . hob_lcyl = ide_if [ 0 ] . lcyl; ide_if [ 1 ] . hob_lcyl = ide_if [ 1 ] . lcyl; ide_if [ 0 ] . lcyl = val; ide_if [ 1 ] . lcyl = val; ide_if [ 0 ] . hob_hcyl = ide_if [ 0 ] . hcyl; ide_if [ 1 ] . hob_hcyl = ide_if [ 1 ] . hcyl; ide_if [ 0 ] . hcyl = val; ide_if [ 1 ] . hcyl = val; ide_if [ 0 ] . select = ( val & ~0x10 ) | 0xa0; ide_if [ 1 ] . select = ( val | 0x10 ) | 0xa0; unit = ( val >> 4 ) & 1; s = ide_if + unit; ide_if -> cur_drive = s; s = ide_if -> cur_drive; if ( ! s -> bs )  if ( ( s -> status & ( BUSY_STAT | DRQ_STAT ) ) && val != WIN_DEVICE_RESET )  switch ( val )  if ( s -> bs && ! s -> is_cdrom )  if ( ! s -> is_cf )  ide_identify ( s ); static void ide_identify(IDEState *s) if ( s -> identify_set )  memcpy ( s -> io_buffer , s -> identify_data , sizeof ( s -> identify_data ) ); 