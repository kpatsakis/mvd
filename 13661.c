void bad() size_t data ; data = 0; CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_84_bad * badObject = new CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_84_bad ( data ) ; CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_84_bad::CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_84_bad(size_t dataCopy) data = dataCopy; data = rand ( ); delete badObject CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_84_bad::~CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_84_bad() if ( data > strlen ( HELLO_STRING ) )  