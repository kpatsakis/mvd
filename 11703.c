static CVE_2011_1495_VULN__ctl_do_mpt_command(struct MPT2SAS_ADAPTER struct mpt2_ioctl_command karg, void __user *mf, enum block_state state) u32 ioc_state ; u16 smid ; u16 wait_state_count ; if ( state == NON_BLOCKING && ! mutex_trylock ( & ioc -> ctl_cmds . mutex ) )  if ( mutex_lock_interruptible ( & ioc -> ctl_cmds . mutex ) )  if ( ioc -> ctl_cmds . status != MPT2_CMD_NOT_USED )  wait_state_count = 0; ioc_state = mpt2sas_base_get_iocstate ( ioc , 1 ); while ( ioc_state != MPI2_IOC_STATE_OPERATIONAL )  if ( wait_state_count ++ == 10 )  ioc_state = mpt2sas_base_get_iocstate ( ioc , 1 ); mpi_request = kzalloc ( ioc -> request_sz , GFP_KERNEL ); if ( ! mpi_request )  if ( copy_from_user ( mpi_request , mf , karg . data_sge_offset * 4 ) )  if ( mpi_request -> Function == MPI2_FUNCTION_SCSI_TASK_MGMT )  smid = mpt2sas_base_get_smid_hpr ( ioc , ioc -> ctl_cb_idx ); if ( ! smid )  smid = mpt2sas_base_get_smid_scsiio ( ioc , ioc -> ctl_cb_idx , NULL ); if ( ! smid )  ioc -> ctl_cmds . status = MPT2_CMD_PENDING; request = mpt2sas_base_get_msg_frame ( ioc , smid ); memcpy ( request , mpi_request , karg . data_sge_offset * 4 ); psge = ( void * ) request + ( karg . data_sge_offset * 4 ); mpt2sas_base_build_zero_len_sge ( ioc , psge ); ioc -> base_add_sg_single ( psge , sgl_flags | data_out_sz , data_out_dma ); psge += ioc -> sge_size; ioc -> base_add_sg_single ( psge , sgl_flags | data_in_sz , data_in_dma ); ioc -> base_add_sg_single ( psge , sgl_flags | data_out_sz , data_out_dma ); ioc -> base_add_sg_single ( psge , sgl_flags | data_in_sz , data_in_dma ); Mpi2SCSIIORequest_t * scsiio_request = ( Mpi2SCSIIORequest_t * ) request ; scsiio_request -> SenseBufferLength = SCSI_SENSE_BUFFERSIZE; scsiio_request -> SenseBufferLowAddress = mpt2sas_base_get_sense_buffer_dma ( ioc , smid ); Mpi2SCSITaskManagementRequest_t * tm_request = ( Mpi2SCSITaskManagementRequest_t * ) request ; if ( tm_request -> TaskType == MPI2_SCSITASKMGMT_TASKTYPE_ABORT_TASK || tm_request -> TaskType == MPI2_SCSITASKMGMT_TASKTYPE_QUERY_TASK )  if ( _ctl_set_task_mid ( ioc , & karg , tm_request ) )  mpt2sas_scsih_set_tm_flag ( ioc , le16_to_cpu ( tm_request -> DevHandle ) ); 