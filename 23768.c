 CVE_2014_8643_VULN_XRE_InitChildProcess(int char* aArgv[]) if ( aArgc < 1 )  const int kTimeoutMs = 1000 ; MachSendMessage child_message ( 0 ) ; if ( ! child_message . AddDescriptor ( MachMsgPortDescriptor ( mach_task_self ( ) ) ) )  ReceivePort child_recv_port ; mach_port_t raw_child_recv_port = child_recv_port . GetPort ( ) ; if ( ! child_message . AddDescriptor ( MachMsgPortDescriptor ( raw_child_recv_port ) ) )  MachPortSender child_sender ( mach_port_name ) ; kern_return_t err = child_sender . SendMessage ( child_message , kTimeoutMs ) ; if ( err != KERN_SUCCESS )  MachReceiveMessage parent_message ; err = child_recv_port . WaitForMessage ( & parent_message , kTimeoutMs ); if ( err != KERN_SUCCESS )  if ( parent_message . GetTranslatedPort ( 0 ) == MACH_PORT_NULL )  err = task_set_bootstrap_port ( mach_task_self ( ) , parent_message . GetTranslatedPort ( 0 ) ); if ( err != KERN_SUCCESS )  if ( aArgc < 1 )  const char * const crashReporterArg = aArgv [ -- aArgc ] if ( 0 != strcmp ( "false" , crashReporterArg ) && ! XRE_SetRemoteExceptionHandler ( nullptr ) )  