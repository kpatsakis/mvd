static void vmsvga_update_display(void *opaque) struct vmsvga_state_s * s = opaque ; if ( ! s -> enable )  vmsvga_fifo_run ( s ); static void vmsvga_fifo_run(struct vmsvga_state_s *s) uint32_t cmd , colour ; int args , len ; int x , y , dx , dy , width , height ; struct vmsvga_cursor_definition_s cursor ; len = vmsvga_fifo_length ( s ); static inline int vmsvga_fifo_length(struct vmsvga_state_s *s) int num ; if ( ! s -> config || ! s -> enable )  return 0 ; num = CMD ( next_cmd ) - CMD ( stop ); if ( num < 0 )  num += CMD ( max ) - CMD ( min ); return num >> 2 ; while ( len > 0 )  switch ( cmd = vmsvga_fifo_read ( s ) )  static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; static inline uint32_t vmsvga_fifo_read_raw(struct vmsvga_state_s *s) uint32_t cmd = s -> fifo [ CMD ( stop ) >> 2 ] ; return cmd ; len -= 5; len -= 6; if ( len < 0 )  colour = vmsvga_fifo_read ( s ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; x = vmsvga_fifo_read ( s ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; y = vmsvga_fifo_read ( s ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; width = vmsvga_fifo_read ( s ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; height = vmsvga_fifo_read ( s ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; if ( vmsvga_fill_rect ( s , colour , x , y , width , height ) == 0 )  args = 0; len -= 7; if ( len < 0 )  x = vmsvga_fifo_read ( s ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; y = vmsvga_fifo_read ( s ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; dx = vmsvga_fifo_read ( s ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; dy = vmsvga_fifo_read ( s ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; width = vmsvga_fifo_read ( s ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; height = vmsvga_fifo_read ( s ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; if ( vmsvga_copy_rect ( s , x , y , dx , dy , width , height ) == 0 )  args = 0; len -= 8; if ( len < 0 )  cursor . id = vmsvga_fifo_read ( s ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; cursor . hot_x = vmsvga_fifo_read ( s ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; cursor . hot_y = vmsvga_fifo_read ( s ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; cursor . width = x = vmsvga_fifo_read ( s ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; cursor . height = y = vmsvga_fifo_read ( s ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; cursor . bpp = vmsvga_fifo_read ( s ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; args = SVGA_BITMAP_SIZE ( x , y ) + SVGA_PIXMAP_SIZE ( x , y , cursor . bpp ); if ( SVGA_BITMAP_SIZE ( x , y ) > sizeof cursor . mask || SVGA_PIXMAP_SIZE ( x , y , cursor . bpp ) > sizeof cursor . image )  len -= args; if ( len < 0 )  for (args = 0; args < SVGA_BITMAP_SIZE(x, y); args++) cursor . mask [ args ] = vmsvga_fifo_read_raw ( s ); static inline uint32_t vmsvga_fifo_read_raw(struct vmsvga_state_s *s) uint32_t cmd = s -> fifo [ CMD ( stop ) >> 2 ] ; return cmd ; for (args = 0; args < SVGA_PIXMAP_SIZE(x, y, cursor.bpp); args++) cursor . image [ args ] = vmsvga_fifo_read_raw ( s ); static inline uint32_t vmsvga_fifo_read_raw(struct vmsvga_state_s *s) uint32_t cmd = s -> fifo [ CMD ( stop ) >> 2 ] ; return cmd ; len -= 6; if ( len < 0 )  x = vmsvga_fifo_read ( s ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; y = vmsvga_fifo_read ( s ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; args = x * y; args = 6; args = 7; len -= 4; if ( len < 0 )  args = 7 + ( vmsvga_fifo_read ( s ) >> 2 ); static inline uint32_t vmsvga_fifo_read(struct vmsvga_state_s *s) return le32_to_cpu ( vmsvga_fifo_read_raw ( s ) ) ; args = 12; args = 0; len -= args; if ( len < 0 )  while ( args -- )  static inline int vmsvga_copy_rect(struct vmsvga_state_s int x0, int y0, int x1, int y1, int w, int h) DisplaySurface * surface = qemu_console_surface ( s -> vga . con ) ; if ( ! vmsvga_verify_rect ( surface , "vmsvga_copy_rect/src" , x0 , y0 , w , h ) )  static inline bool vmsvga_verify_rect(DisplaySurface const char int x, int y, int w, int h) if ( x < 0 )  if ( x > SVGA_MAX_WIDTH )  if ( w < 0 )  if ( w > SVGA_MAX_WIDTH )  if ( x + w > surface_width ( surface ) )  fprintf ( stderr , "%s: width was > %d (x: %d, w: %d)\n" , name , surface_width ( surface ) , x , w ); 