static int planarRgbToplanarRgbWrapper(SwsContext const uint8_t *src[], int int srcSliceY, int uint8_t *dst[], int dstStride[]) copyPlane ( src [ 2 ] , srcStride [ 2 ] , srcSliceY , srcSliceH , c -> srcW , dst [ 2 ] , dstStride [ 2 ] ); static void copyPlane(const uint8_t *src, int int srcSliceY, int srcSliceH, int uint8_t *dst, int dstStride) dst += dstStride * srcSliceY; if ( dstStride == srcStride && srcStride > 0 )  int i ; for (i = 0; i < srcSliceH; i++) memcpy ( dst , src , width ); src += srcStride; dst += dstStride; 