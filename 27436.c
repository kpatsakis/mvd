void CWE427_Uncontrolled_Search_Path_Element__char_environment_66_bad() char * data ; char dataBuffer [ 250 ] = "PATH=" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 250 - dataLen - 1 ); dataArray [ 2 ] = data; CWE427_Uncontrolled_Search_Path_Element__char_environment_66b_badSink ( dataArray ); void CWE427_Uncontrolled_Search_Path_Element__char_environment_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; PUTENV ( data ); 