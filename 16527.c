static void goodG2B() double * data ; data = ( double * ) malloc ( sizeof ( double ) ); * data = 5.0; CWE457_Use_of_Uninitialized_Variable__double_pointer_64b_goodG2BSink ( & data ); void CWE457_Use_of_Uninitialized_Variable__double_pointer_64b_goodG2BSink(void * dataVoidPtr) double * * dataPtr = ( double * * ) dataVoidPtr ; double * data = ( * dataPtr ) ; printDoubleLine ( * data ); void printDoubleLine(double doubleNumber) printf ( "%g\n" , doubleNumber ); 