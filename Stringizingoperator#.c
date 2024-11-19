// C program to illustrate (#) operator
#include <stdio.h>

// Macro definition using the stringizing operator
#define mkstr(s) #s
int main(void)
{
    // Printing the stringized value of "geeksforgeeks"
    printf(mkstr(geeksforgeeks));
    return 0;
} 
