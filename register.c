// C program that demonstrates accessing the address of a
// register is invalid
#include <stdio.h>

int main()
{
    // Declaring a register variable 'i' and initializing it
    // with 10
    register int i = 10;
    // Creating a pointer variable 'a' and assigning the
    // address of 'i' to it
    int* a = &i;
    printf("%d", *a);
    getchar();
    return 0;
}
