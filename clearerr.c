#include <stdio.h> 

int main() 
{ 
	FILE* file = fopen("file.txt", "r"); 
	// Open the file in read mode 
	if (file == NULL) { 
		// Print an error message 
		// if file opening fails 
		perror("Error opening file"); 
		// Return with non-zero exit status to 
		// indicate an error 
		return 1; 
	} 

	// Perform file operations 
	// Add your code here to perform operations on the 
	// opened file 

	if (ferror(file)) { 
		// Print an error message 
		// if an error occurred 
		// during file operations 
		printf("An error occurred while performing file "
			"operations.\n"); 
	} 

	// Clear the error indicators for the 
	// file stream 
	clearerr(file); 

	// Continue with file operations 
	// Add your code here to continue with further 
	// operations on the file 

	// Close the file 
	fclose(file); 
	return 0; 
}
