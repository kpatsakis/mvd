void ostracite_knur(void *tentwards_kingsburg) int stonesoup_ssi = 0 ; FILE * stonesoup_file_list [ 1020 ] ; char stonesoup_filename [ 80 ] ; predriving_chalcis = ( ( char * ) ( ( char * ) tentwards_kingsburg ) ); stonesoup_files = fopen ( predriving_chalcis , "r" ); if ( stonesoup_files != 0 )  while ( fscanf ( stonesoup_files , "%79s" , stonesoup_filename ) == 1 && stonesoup_ssi < 1020 )  stonesoup_file = fopen ( stonesoup_filename , "w" ); if ( stonesoup_file == 0 && errno == 24 )  fputs ( "woohoo!" , stonesoup_file ); fflush ( stonesoup_file ); stonesoup_file_list [ stonesoup_ssi ] = stonesoup_file; stonesoup_ssi ++; 