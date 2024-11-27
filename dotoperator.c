// C program to illustrate the use of dot operator for 
// nested structure 
#include <stdio.h> 

struct base { 
	struct child { 
		int i; 
	} child; 
}; 

int main() 
{ 
	struct base s_name = { 12 }; 
	
	// accessing nested structure member using dot operator 
	printf("Nested Structure Variable: %d", s_name.child.i); 
	return 0; 
}
