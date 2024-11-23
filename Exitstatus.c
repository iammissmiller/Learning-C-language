// C implementation which shows the 
// use of EXIT_SUCCESS and EXIT_FAILURE. 
#include <errno.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main() 
{ 
	FILE* fp; 
	fp = fopen("filedoesnotexist.txt", "rb"); 

	if (fp == NULL) { 
		printf("Value of errno: %d\n", errno); 
		printf("Error opening the file: %s\n", 
			strerror(errno)); 
		perror("Error printed by perror"); 

		exit(EXIT_FAILURE); 
		printf("I will not be printed\n"); 
	} 

	else { 
		fclose(fp); 
		exit(EXIT_SUCCESS); 
		printf("I will not be printed\n"); 
	} 
	return 0; 
}
