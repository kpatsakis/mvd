static void xhci_oper_write(void *ptr, hwaddr uint64_t val, unsigned size) DeviceState * d = DEVICE ( ptr ) ; switch ( reg )  if ( val & USBCMD_HCRST )  xhci_reset ( d ); static void xhci_reset(DeviceState *dev) XHCIState * xhci = XHCI ( dev ) ; int i ; xhci -> usbcmd = 0; xhci -> usbsts = USBSTS_HCH; xhci -> dnctrl = 0; xhci -> crcr_low = 0; xhci -> crcr_high = 0; xhci -> dcbaap_low = 0; xhci -> dcbaap_high = 0; xhci -> config = 0; for (i = 0; i < xhci->numslots; i++) xhci_disable_slot ( xhci , i + 1 ); static TRBCCode xhci_disable_slot(XHCIState *xhci, unsigned int slotid) int i ; for (i = 1; i <= 31; i++) if ( xhci -> slots [ slotid - 1 ] . eps [ i - 1 ] )  xhci_disable_ep ( xhci , slotid , i ); static TRBCCode xhci_disable_ep(XHCIState *xhci, unsigned int unsigned int epid) assert ( epid >= 1 && epid <= 31 ); 