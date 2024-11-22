// C program to demonstrate how goto is used in Exception 
// Handling 
#include <stdio.h> 

// function to divide 10 by the number 
void check(int number) 
{ 
	printf("Before try \n"); 
	// try 
	if (number < 0) { 
		// throw 
		goto catching; 
		printf("After throw (Never executed) \n"); 
	} 
// catch 
catching : { 
	printf("Exception Caught \n"); 
} 

	printf("After catch (Will be executed) \n"); 

	return; 
} 

int main() 
{ 

	int x = -1; 

	check(x); 
	return 0; 
}
