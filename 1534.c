static void goodG2B() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); goodG2BSink_b ( data ); void goodG2BSink_b(wchar_t * data) goodG2BSink_c ( data ); void goodG2BSink_c(wchar_t * data) goodG2BSink_d ( data ); void goodG2BSink_d(wchar_t * data) free ( data ); 