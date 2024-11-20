const char *home_dir ; 

home_dir = getenv("HOME"); 
if (likely(home_dir)) 
	printf("home directory: %s\n", home_dir); 
else
	perror("getenv"); 
