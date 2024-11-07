// C Program to illustrate local auto variable in comparison
// of static variable.
#include <stdio.h>

// Function
int fun()
{
    int count = 0;
    count++;
    return count;
}

// Driver Code
int main()
{
    printf("%d ", fun());
    printf("%d ", fun());
    return 0;
}
