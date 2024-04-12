qcms_profile* qcms_CIE_xyY qcms_CIE_xyYTRIPLE float gamma) qcms_profile * profile = qcms_profile_create ( ) ; qcms_profile *qcms_profile_create(void) return calloc ( sizeof ( qcms_profile ) , 1 ) ; if ( ! profile )  if ( ! set_rgb_colorants ( profile , white_point , primaries ) )  profile -> redTRC = curve_from_gamma ( gamma ); static struct curveType *curve_from_gamma(float gamma) struct curveType * curve ; int num_entries = 1 ; curve = malloc ( sizeof ( struct curveType ) + sizeof ( uInt16Number ) * num_entries ); if ( ! curve )  return NULL ; curve -> count = num_entries; curve -> data [ 0 ] = float_to_u8Fixed8Number ( gamma ); static uint16_t float_to_u8Fixed8Number(float a) if ( a > ( 255.f + 255.f / 256 ) )  return 0xffff ; if ( a < 0.f )  return 0 ; return floorf ( a * 256.f + .5f ) ; curve -> type = CURVE_TYPE; return curve ; profile -> blueTRC = curve_from_gamma ( gamma ); static struct curveType *curve_from_gamma(float gamma) struct curveType * curve ; int num_entries = 1 ; curve = malloc ( sizeof ( struct curveType ) + sizeof ( uInt16Number ) * num_entries ); if ( ! curve )  return NULL ; curve -> count = num_entries; curve -> data [ 0 ] = float_to_u8Fixed8Number ( gamma ); curve -> type = CURVE_TYPE; return curve ; profile -> greenTRC = curve_from_gamma ( gamma ); static struct curveType *curve_from_gamma(float gamma) struct curveType * curve ; int num_entries = 1 ; curve = malloc ( sizeof ( struct curveType ) + sizeof ( uInt16Number ) * num_entries ); if ( ! curve )  return NULL ; curve -> count = num_entries; curve -> data [ 0 ] = float_to_u8Fixed8Number ( gamma ); curve -> type = CURVE_TYPE; return curve ; if ( ! profile -> redTRC || ! profile -> blueTRC || ! profile -> greenTRC )  qcms_profile_release ( profile ); void qcms_profile_release(qcms_profile *profile) free ( profile -> blueTRC ); 