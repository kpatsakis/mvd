int					/* O - 1 on success, 0 on failure  cupsd_client_t *con)		/* I - Client connection */ ipp_tag_t group ; ipp_attribute_t * attr ; con -> response = ippNew ( ); con -> response -> request . status . version [ 0 ] = con -> request -> request . op . version [ 0 ]; con -> response -> request . status . version [ 1 ] = con -> request -> request . op . version [ 1 ]; con -> response -> request . status . request_id = con -> request -> request . op . request_id; if ( con -> request -> request . any . version [ 0 ] != 1 && con -> request -> request . any . version [ 0 ] != 2 )  if ( con -> request -> request . any . request_id < 1 )  if ( ! con -> request -> attrs )  for (attr = con->request->attrs, group =  attr = attr->next) if ( attr -> group_tag < group && attr -> group_tag != IPP_TAG_ZERO )  group = attr -> group_tag; if ( ! attr )  attr = con -> request -> attrs; if ( attr )  attr = attr -> next; if ( attr && attr -> name && ! strcmp ( attr -> name , "attributes-natural-language" ) && ( attr -> value_tag & IPP_TAG_MASK ) == IPP_TAG_LANGUAGE )  