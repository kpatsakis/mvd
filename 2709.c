void CWE400_Resource_Exhaustion__fgets_fwrite_54b_goodB2GSink(int count) CWE400_Resource_Exhaustion__fgets_fwrite_54c_goodB2GSink ( count ); void CWE400_Resource_Exhaustion__fgets_fwrite_54c_goodB2GSink(int count) CWE400_Resource_Exhaustion__fgets_fwrite_54d_goodB2GSink ( count ); void CWE400_Resource_Exhaustion__fgets_fwrite_54d_goodB2GSink(int count) CWE400_Resource_Exhaustion__fgets_fwrite_54e_goodB2GSink ( count ); void CWE400_Resource_Exhaustion__fgets_fwrite_54e_goodB2GSink(int count) const char * filename = "output_good.txt" ; if ( count > 0 && count <= 20 )  pFile = fopen ( filename , "w+" ); if ( pFile )  fclose ( pFile ); 