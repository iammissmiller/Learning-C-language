// C program to demonstrate the use of Flexible Array Member 
#include <stdio.h> 
#include <stdlib.h> 

// defining struct 
typedef struct { 
	int len; 
	int arr[]; 
} fam; 

int main() 
{ 
	// creating an array member of size 5 
	fam* fam1 
		= (fam*)malloc(sizeof(fam*) + 5 * sizeof(int)); 

	// creating an array mebmer of size 10 
	fam* fam2 
		= (fam*)malloc(sizeof(fam*) + 10 * sizeof(int)); 
	
	// inserting elements 
	for (int i = 0; i < 5; i++) { 
		fam1->arr[i] = i + 1; 
	} 
	for (int i = 0; i < 10; i++) { 
		fam2->arr[i] = i + 10; 
	} 

	// printing elements 
	printf("Array of Size 5:\n"); 
	for (int i = 0; i < 5; i++) { 
		printf("%d, ", fam1->arr[i]); 
	} 
	printf("\n"); 

	printf("Array of size 10:\n"); 
	for (int i = 0; i < 10; i++) { 
		printf("%d, ", fam2->arr[i]); 
	} 
	return 0; 
}
