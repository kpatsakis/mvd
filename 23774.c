static void goodB2G() int * data ; data = NULL; CWE690_NULL_Deref_From_Return__int_malloc_84_goodB2G * goodB2GObject = new CWE690_NULL_Deref_From_Return__int_malloc_84_goodB2G ( data ) ; CWE690_NULL_Deref_From_Return__int_malloc_84_goodB2G::CWE690_NULL_Deref_From_Return__int_malloc_84_goodB2G(int * dataCopy) data = dataCopy; data = ( int * ) malloc ( 1 * sizeof ( int ) ); delete goodB2GObject CWE690_NULL_Deref_From_Return__int_malloc_84_goodB2G::~CWE690_NULL_Deref_From_Return__int_malloc_84_goodB2G() if ( data != NULL )  data [ 0 ] = 5; free ( data ); 