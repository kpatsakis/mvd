void bad() char * data ; data = NULL; CWE126_Buffer_Overread__new_char_loop_84_bad * badObject = new CWE126_Buffer_Overread__new_char_loop_84_bad ( data ) ; CWE126_Buffer_Overread__new_char_loop_84_bad::CWE126_Buffer_Overread__new_char_loop_84_bad(char * dataCopy) data = dataCopy; data = new char [ 50 ]; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; delete badObject CWE126_Buffer_Overread__new_char_loop_84_bad::~CWE126_Buffer_Overread__new_char_loop_84_bad() size_t i , destLen ; char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; destLen = strlen ( dest ); for (i = 0; i < destLen; i++) 