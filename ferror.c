// C program to demonstrate the ferror() function 
#include <stdio.h> 

int main() 
{ 
	// Open the file in read mode 
	FILE* file = fopen("nonexistent_file.txt", "r"); 
	if (file == NULL) { 
		// Print an error message 
		// if file opening fails 
		perror("Error opening file"); 
		// Return with non-zero exit status to 
		// indicate an error 
		return 1; 
	} 

	int c; 
	// Process the character 
	// Add your code here to perform operations on each 
	// character read from the file 
	while ((c = fgetc(file)) != EOF) { 
	} 

	if (ferror(file)) { 
		// Print an error message if an error occurred 
		// during file reading 
		printf( 
			"An error occurred while reading the file.\n"); 
	} 
	else { 
		// Print success message if file reading completed 
		// without errors 
		printf("File read successfully.\n"); 
	} 
	// Close the file 
	fclose(file); 
	// Return with zero exit status to indicate successful 
	// execution 
	return 0; 
}
