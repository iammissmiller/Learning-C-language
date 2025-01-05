// C program to illustrate macro function. 
#include <stdio.h> 

// Defining the macro with generic code for 
//different argument types 
#define geeks(T) _Generic((T), \ 
		char* : "String", \ 
		int : "Integer", \ 
		long : "Long Integer", \ 
		default : "Others") 

int main(void) 
{ 

	// Here A is a string. 
	printf("%s\n", geeks("A")); 

	// floating point value 
	printf("%s\n", geeks(5)); 
	
	// float type which is not defined in the macro 
	printf("%s", geeks(5.12)); 

	return 0; 
}
