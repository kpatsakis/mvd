static void goodB2G() int count ; count = - 1; count = RAND32 ( ); CWE400_Resource_Exhaustion__rand_fwrite_52b_goodB2GSink ( count ); void CWE400_Resource_Exhaustion__rand_fwrite_52b_goodB2GSink(int count) CWE400_Resource_Exhaustion__rand_fwrite_52c_goodB2GSink ( count ); void CWE400_Resource_Exhaustion__rand_fwrite_52c_goodB2GSink(int count) const char * filename = "output_good.txt" ; if ( count > 0 && count <= 20 )  pFile = fopen ( filename , "w+" ); for (i = 0; i < (size_t)count; i++) if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  