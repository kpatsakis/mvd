void bad() list < wchar_t * > dataList ; badSink ( dataList ); void badSink(list<wchar_t *> dataList) wchar_t * data = dataList . back ( ) ; wchar_t source [ 10 + 1 ] = SRC_STRING ; wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 