static void good1() if ( staticFalse )  unsigned intUnsigned ; intUnsigned = rand ( ); intUnsigned = UINT_MAX - intUnsigned; if ( intUnsigned > INT_MAX )  intSigned = intUnsigned; printIntLine ( intSigned ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 