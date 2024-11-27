// C program to demonstrate the use of dot operator 
#include <stdio.h> 

struct str { 
	int mem; 
}; 

union un { 
	int mem1; 
	char mem2; 
}; 

int main() 
{ 
	struct str str_name = { 12}; 
	union un un_name; 

	// accessing union member 
	un_name.mem1 = 9; 
	printf("Union Member 1: %d\n", un_name.mem1); 

	// accessing structure member 
	printf("Structure Member: %d", str_name.mem); 

	return 0; 
}
