 WebGLContext::InitAndValidateGL() if ( ! gl )  mFormatUsage = CreateFormatUsage ( gl ); if ( ! mFormatUsage )  GLenum error = gl -> fGetError ( ) ; if ( error != LOCAL_GL_NO_ERROR )  if ( MinCapabilityMode ( ) )  mGLMaxVertexAttribs = MINVALUE_GL_MAX_VERTEX_ATTRIBS; if ( mGLMaxVertexAttribs < 8 )  if ( MinCapabilityMode ( ) )  mGLMaxTextureUnits = MINVALUE_GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS; if ( mGLMaxTextureUnits < 8 )  if ( ! ShInitialize ( ) )  const char * versionStr = ( const char * ) ( gl -> fGetString ( LOCAL_GL_VERSION ) ) ; mIsMesa = strstr ( versionStr , "Mesa" ); 