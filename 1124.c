void bad() size_t data ; data = 0; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); CWE789_Uncontrolled_Mem_Alloc__new_char_fgets_82_base * baseObject = new CWE789_Uncontrolled_Mem_Alloc__new_char_fgets_82_bad baseObject -> action ( data ); void CWE789_Uncontrolled_Mem_Alloc__new_char_fgets_82_bad::action(size_t data) char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = new char [ data ]; strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] myString 