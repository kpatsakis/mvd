static void goodG2B1() char * data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; data = goodG2B1Source ( data ); static char * goodG2B1Source(char * data) if ( goodG2B1Static )  strcat ( data , "file.txt" ); return data ; pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 