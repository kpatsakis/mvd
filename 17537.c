if ( s -> cycle )  s -> io = ide_data_readw ( s -> ide , 0 ); static uint32_t ide_data_readw(void *opaque, uint32_t addr) void * opaque uint32_t addr IDEState * s = ( ( IDEState * ) opaque ) -> cur_drive ; if ( ! ( s -> status & DRQ_STAT ) )  buffered_pio_read ( s , addr , 2 ); static inline buffered_pio_read(IDEState *s, uint32_t addr, int size) IDEState * s uint32_t addr int size struct pio_buffer * piobuf = piobuf_by_addr ( addr ) ; int data_end ; if ( ! piobuf )  s -> data_ptr += piobuf -> pointer; data_end = s -> data_end - s -> data_ptr - size; if ( data_end <= 0 )  uint8_t * buf = ( uint8_t * ) buffered_pio_page + piobuf -> page_offset ; if ( data_end > piobuf -> buf_size )  data_end = piobuf -> buf_size; memcpy ( buf , s -> data_ptr + size , data_end ); 