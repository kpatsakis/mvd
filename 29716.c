static int xhci_complete_packet(XHCITransfer *xfer) if ( xfer -> packet . status == USB_RET_ASYNC )  if ( xfer -> packet . status == USB_RET_NAK )  xfer -> running_async = 0; xfer -> running_retry = 0; xfer -> complete = 1; if ( xfer -> packet . status == USB_RET_SUCCESS )  xfer -> status = CC_SUCCESS; switch ( xfer -> packet . status )  xfer -> status = CC_USB_TRANSACTION_ERROR; xhci_stall_ep ( xfer ); static void xhci_stall_ep(XHCITransfer *xfer) XHCIState * xhci = xfer -> xhci ; XHCISlot * slot = & xhci -> slots [ xfer -> slotid - 1 ] ; XHCIEPContext * epctx = slot -> eps [ xfer -> epid - 1 ] ; XHCIStreamContext * sctx ; if ( epctx -> nr_pstreams )  sctx = xhci_find_stream ( epctx , xfer -> streamid , & err ); static XHCIStreamContext *xhci_find_stream(XHCIEPContext unsigned int uint32_t *cc_error) XHCIStreamContext * sctx ; uint32_t ctx [ 2 ] , sct ; if ( epctx -> lsa )  if ( streamid >= epctx -> nr_pstreams )  sctx = epctx -> pstreams + streamid; if ( sctx -> sct == - 1 )  xhci_dma_read_u32s ( epctx -> xhci , sctx -> pctx , ctx , sizeof ( ctx ) ); static inline void xhci_dma_read_u32s(XHCIState *xhci, dma_addr_t uint32_t *buf, size_t len) assert ( ( len % sizeof ( uint32_t ) ) == 0 ); 