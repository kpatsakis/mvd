static void goodB2G() int count ; int countArray [ 5 ] ; count = - 1; countArray [ 2 ] = count; CWE400_Resource_Exhaustion__fscanf_fwrite_66b_goodB2GSink ( countArray ); void CWE400_Resource_Exhaustion__fscanf_fwrite_66b_goodB2GSink(int countArray[]) int count = countArray [ 2 ] ; const char * filename = "output_good.txt" ; if ( count > 0 && count <= 20 )  pFile = fopen ( filename , "w+" ); for (i = 0; i < (size_t)count; i++) if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  