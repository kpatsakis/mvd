static void goodB2G() FILE * data ; data = NULL; data = _wfopen ( L "file.txt" , L "w+" ) CWE690_NULL_Deref_From_Return__w32_wfopen_53b_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__w32_wfopen_53b_goodB2GSink(FILE * data) CWE690_NULL_Deref_From_Return__w32_wfopen_53c_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__w32_wfopen_53c_goodB2GSink(FILE * data) CWE690_NULL_Deref_From_Return__w32_wfopen_53d_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__w32_wfopen_53d_goodB2GSink(FILE * data) if ( data != NULL )  fclose ( data ); 