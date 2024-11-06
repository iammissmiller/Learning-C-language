// C program to demonstrate the use of VLAs 
#include <stdio.h> 

int main() 
{ 

	int n; 
	printf("Enter the size of the array: "); 
	scanf("%d", &n); 
	
	int arr[n]; 

	printf("Enter elements: "); 

	for (int i = 0; i < n; ++i) { 

		scanf("%d", &arr[i]); 
	} 
	
	printf("Elements of VLA of Given Size: "); 
	for (int i = 0; i < n; ++i) { 

		printf("%d ", arr[i]); 
	} 

	return 0; 
}
