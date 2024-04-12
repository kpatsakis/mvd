int CVE_2005_2617_VULN_syscall32_setup_pages(struct linux_binprm *bprm, int exstack) int npages = ( VSYSCALL32_END - VSYSCALL32_BASE ) >> PAGE_SHIFT ; struct vm_area_struct * vma ; vma = kmem_cache_alloc ( vm_area_cachep , SLAB_KERNEL ); if ( ! vma )  if ( security_vm_enough_memory ( npages ) )  memset ( vma , 0 , sizeof ( struct vm_area_struct ) ); vma -> vm_start = VSYSCALL32_BASE; vma -> vm_end = VSYSCALL32_END; vma -> vm_flags = VM_READ | VM_EXEC | VM_MAYREAD | VM_MAYEXEC | VM_MAYEXEC | VM_MAYWRITE; vma -> vm_flags |= mm -> def_flags; vma -> vm_page_prot = protection_map [ vma -> vm_flags & 7 ]; vma -> vm_ops = & syscall32_vm_ops; vma -> vm_mm = mm; insert_vm_struct ( mm , vma ); 