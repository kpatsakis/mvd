void bad() int64_t * data ; int64_t * & dataRef = data ; data = NULL; static int64_t dataBuffer [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5L L data = dataBuffer; int64_t * data = dataRef ; free ( data ); 