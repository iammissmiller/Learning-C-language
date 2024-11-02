#include <stdio.h>

#include <stdlib.h>

int main()

{
// declaring dynamic memory for ptr

int* ptr = (int*)malloc(5 * sizeof(int));

// checking if memory allocation is //succesful

if (!ptr) {

printf("memory allocation failed ");

exit(0);

}

return 0;

}