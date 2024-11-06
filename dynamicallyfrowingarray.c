// C program to demonstrate the 
// dynamically growing array 
#include <stdio.h> 
#include <stdlib.h> 

#define INITIAL_SIZE 8 

// base structure 
typedef struct { 
	size_t size; 
	size_t capacity; 
	int* array; 
}dynamic_array; 

// function prototypes 
// array container functions 
void arrayInit(dynamic_array** arr_ptr); 
void freeArray(dynamic_array* container); 

// Basic Operation functions 
void insertItem(dynamic_array* container, int item); 
void updateItem(dynamic_array* container, int i, int item); 
int getItem(dynamic_array* container, int i); 
void deleteItem(dynamic_array* container, int item); 
void printArray(dynamic_array* container); 


// driver code 
int main() 
{ 
	dynamic_array* arr; 
	arrayInit(&arr); 
	
	for (int i = 0; i < 6; i++) { 
		insertItem(arr, i + 11); 
	} 
	printArray(arr); 
	printf("%d\n", getItem(arr, 3)); 
	deleteItem(arr, 3); 
	printArray(arr); 

	for (int i = 0; i < 5; i++) { 
		insertItem(arr, i + 17); 
	} 

	printArray(arr); 

	freeArray(arr); 
	int var; 
	return 0; 
} 

//------Function Definitions------ 
// Array initialization 
void arrayInit(dynamic_array** arr_ptr) 
{ 
	dynamic_array *container; 
	container = (dynamic_array*)malloc(sizeof(dynamic_array)); 
	if(!container) { 
		printf("Memory Allocation Failed\n"); 
		exit(0); 
	} 

	container->size = 0; 
	container->capacity = INITIAL_SIZE; 
	container->array = (int *)malloc(INITIAL_SIZE * sizeof(int)); 
	if (!container->array){ 
		printf("Memory Allocation Failed\n"); 
		exit(0); 
	} 

	*arr_ptr = container; 
} 

// Insertion Operation 
void insertItem(dynamic_array* container, int item) 
{ 
	if (container->size == container->capacity) { 
		int *temp = container->array; 
		container->capacity <<= 1; 
		container->array = realloc(container->array, container->capacity * sizeof(int)); 
		if(!container->array) { 
			printf("Out of Memory\n"); 
			container->array = temp; 
			return; 
		} 
	} 
	container->array[container->size++] = item; 
} 

// Retrieve Item at Particular Index 
int getItem(dynamic_array* container, int index) 
{ 
	if(index >= container->size) { 
		printf("Index Out of Bounds\n"); 
		return -1; 
	} 
	return container->array[index]; 
} 

// Update Operation 
void updateItem(dynamic_array* container, int index, int item) 
{ 
	if (index >= container->size) { 
		printf("Index Out of Bounds\n"); 
		return; 
	} 
	container->array[index] = item; 
} 

// Delete Item from Particular Index 
void deleteItem(dynamic_array* container, int index) 
{ 
	if(index >= container->size) { 
		printf("Index Out of Bounds\n"); 
		return; 
	} 

	for (int i = index; i < container->size; i++) { 
		container->array[i] = container->array[i + 1]; 
	} 
	container->size--; 
} 

// Array Traversal 
void printArray(dynamic_array* container) 
{ 
	printf("Array elements: "); 
	for (int i = 0; i < container->size; i++) { 
		printf("%d ", container->array[i]); 
	} 
	printf("\nSize: "); 
	printf("%lu", container->size); 
	printf("\nCapacity: "); 
	printf("%lu\n", container->capacity); 
} 

// Freeing the memory allocated to the array 
void freeArray(dynamic_array* container) 
{ 
	free(container->array); 
	free(container); 
}
