void bad() char * data ; data = new char [ 100 ]; data = badSource ( data ); char * badSource(char * data) if ( badGlobal )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; return data ; char dest [ 50 ] = "" ; strcat ( dest , data ); 