void CWE758_Undefined_Behavior__double_pointer_malloc_use_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; double * * pointer = ( double * * ) malloc ( sizeof ( double * ) ) ; double * data = * pointer ; free ( pointer ); printDoubleLine ( * data ); void printDoubleLine(double doubleNumber) printf ( "%g\n" , doubleNumber ); 