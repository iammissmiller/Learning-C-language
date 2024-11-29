// C program to implement
// typedef with pointers
#include <stdio.h>

typedef int* ptr;

// Driver code
int main()
{
    ptr var;
    *var = 20;

    printf("Value of var is %d", *var);
    return 0;
}
