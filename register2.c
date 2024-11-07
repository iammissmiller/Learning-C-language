// C program that demonstrates register keyword can be used
// with pointer variables

#include <stdio.h>

int main()
{
    // Declaring an integer variable 'i' and initializing it
    // with 10
    int i = 10;
    // Declaring a register pointer variable 'a' and
    // assigning the address of 'i' to it
    register int* a = &i;
    printf("%d", *a);
    getchar();
    return 0;
}
