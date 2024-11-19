# include <stdio.h> 
# define getName(var, str) sprintf(str, "%s", #var) 

int main() 
{ 
	int myVar; 
	char str[20]; 
	getName(myVar, str); 
	printf("%s", str); 
	return 0; 
} 
