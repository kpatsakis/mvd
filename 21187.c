static TRBCCode xhci_configure_slot(XHCIState *xhci, unsigned int uint64_t pictx, bool dc) dma_addr_t ictx , octx ; uint32_t ictl_ctx [ 2 ] ; uint32_t slot_ctx [ 4 ] ; uint32_t ep_ctx [ 5 ] ; int i ; TRBCCode res ; octx = xhci -> slots [ slotid - 1 ] . ctx; if ( dc )  if ( ( ictl_ctx [ 0 ] & 0x3 ) != 0x0 || ( ictl_ctx [ 1 ] & 0x3 ) != 0x1 )  if ( SLOT_STATE ( slot_ctx [ 3 ] ) < SLOT_ADDRESSED )  for (i = 2; i <= 31; i++) if ( ictl_ctx [ 0 ] & ( 1 << i ) )  xhci_disable_ep ( xhci , slotid , i ); if ( ictl_ctx [ 1 ] & ( 1 << i ) )  res = xhci_enable_ep ( xhci , slotid , i , octx + ( 32 * i ) , ep_ctx ); static TRBCCode xhci_enable_ep(XHCIState *xhci, unsigned int unsigned int epid, dma_addr_t uint32_t *ctx) return CC_SUCCESS ; if ( res != CC_SUCCESS )  static TRBCCode xhci_disable_ep(XHCIState *xhci, unsigned int unsigned int epid) XHCISlot * slot ; XHCIEPContext * epctx ; slot = & xhci -> slots [ slotid - 1 ]; if ( ! slot -> eps [ epid - 1 ] )  epctx = slot -> eps [ epid - 1 ]; xhci_set_ep_state ( xhci , epctx , NULL , EP_DISABLED ); static void xhci_set_ep_state(XHCIState *xhci, XHCIEPContext XHCIStreamContext *sctx, uint32_t state) XHCIRing * ring = NULL ; uint32_t ctx [ 5 ] ; ctx [ 0 ] &= ~EP_STATE_MASK; ctx [ 0 ] |= state; if ( epctx -> nr_pstreams )  if ( sctx != NULL )  ring = & sctx -> ring; ring = & epctx -> ring; if ( ring )  ctx [ 2 ] = ring -> dequeue | ring -> ccs; ctx [ 3 ] = ( ring -> dequeue >> 16 ) >> 16; xhci_dma_write_u32s ( xhci , epctx -> pctx , ctx , sizeof ( ctx ) ); static inline void xhci_dma_write_u32s(XHCIState *xhci, dma_addr_t uint32_t *buf, size_t len) assert ( ( len % sizeof ( uint32_t ) ) == 0 ); 