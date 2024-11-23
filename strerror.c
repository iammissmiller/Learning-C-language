// C implementation to see how strerror() function is used 
// to print the error messages. 
#include <errno.h> 
#include <stdio.h> 
#include <string.h> 

int main() 
{ 
	FILE* fp; 

	// If a file is opened which does not exist, 
	// then it will be an error and corresponding 
	// errno value will be set 
	fp = fopen(" GeeksForGeeks.txt ", "r"); 

	// opening a file which does 
	// not exist. 
	printf("Value of errno: %d\n", errno); 
	printf("The error message is : %s\n", strerror(errno)); 

	return 0; 
}
