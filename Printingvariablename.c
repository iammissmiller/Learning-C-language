#include <stdio.h> 
#define getName(var) #var 

int main() 
{ 
	int myVar; 
	printf("%s", getName(myVar)); 
	return 0; 
} 
