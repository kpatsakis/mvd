void bad() list < char * > dataList ; badSink ( dataList ); void badSink(list<char *> dataList) char * data = dataList . back ( ) ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncat ( data , source , 100 ); free ( data ); 