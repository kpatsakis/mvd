void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_connect_socket_54b_goodB2GSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_connect_socket_54c_goodB2GSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_connect_socket_54c_goodB2GSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_connect_socket_54d_goodB2GSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_connect_socket_54d_goodB2GSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_connect_socket_54e_goodB2GSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_connect_socket_54e_goodB2GSink(size_t data) wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 