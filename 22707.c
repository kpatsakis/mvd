struct stonesoup_queue *get_instance (char* file2) static struct stonesoup_queue * ssQ = NULL ; if ( ssQ == NULL )  ssQ = ( struct stonesoup_queue * ) calloc ( 1 , sizeof ( struct stonesoup_queue ) ); pthread_mutex_init ( & ( ssQ -> lock ) , NULL ); pthread_cond_init ( & ( ssQ -> is_empty ) , NULL ); pthread_cond_init ( & ( ssQ -> is_full ) , NULL ); ssQ -> size = 0; ssQ -> capacity = 30; ssQ -> head = NULL; ssQ -> tail = NULL; tracepoint ( stonesoup_trace , variable_address , "ssQ" , ssQ , "CROSSOVER-STATE" ); return ssQ ; 