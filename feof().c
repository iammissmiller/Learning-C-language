// C program to demonstrate the feof() function 
#include <stdio.h> 

int main() 
{ 
	FILE* fptr = fopen("filename.txt", "r"); 
	if (fptr == NULL) { 
		// Print error message if file opening fails 
		perror("Error opening the file"); 
		return 1; 
	} 

	// Perform file operations 

	if (ferror(fptr)) { 
		// Print error message if file operation fails 
		perror("Error occurred during file operations"); 
		// Handle the error 
	} 
	// Close the file 
	fclose(fptr); 
	return 0; 
}
