CommandResult NetworkUtils::setUSBTethering(NetworkParams& aOptions) IFProperties interfaceProperties ; getIFProperties ( GET_CHAR ( mExternalIfname ) , interfaceProperties ); static void getIFProperties(const char* ifname, IFProperties& prop) char key [ PROPERTY_KEY_MAX ] ; snprintf ( key , PROPERTY_KEY_MAX - 1 , "net.%s.gw" , ifname ); snprintf ( key , PROPERTY_KEY_MAX - 1 , "net.%s.dns1" , ifname ); property_get ( key , prop . dns1 , "" ); snprintf ( key , PROPERTY_KEY_MAX - 1 , "net.%s.dns2" , ifname ); property_get ( key , prop . dns2 , "" ); 