void CWE127_Buffer_Underread__wchar_t_alloca_memcpy_66_bad() wchar_t * data ; wchar_t * dataArray [ 5 ] ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer - 8; dataArray [ 2 ] = data; CWE127_Buffer_Underread__wchar_t_alloca_memcpy_66b_badSink ( dataArray ); void CWE127_Buffer_Underread__wchar_t_alloca_memcpy_66b_badSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' memcpy ( dest , data , 100 * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 