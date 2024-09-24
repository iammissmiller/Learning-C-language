#include <stdio.h>

void modifyval(int* myptr)
{
    *myptr = *myptr + 5;
}

int main()
{
    int x = 5;
    int* myptr = &x;
    modifyval(myptr);
    printf("modified value of x is : %d \n" , x);
    return 0;
}
