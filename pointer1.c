#include <stdio.h>

void geeks()
{
 
 int var = 10;
 
 int* x;
 
 x = &var;
 
 printf("value at x = %p \n" , x);
 printf("value at var = %d\n" , var);
 printf("value at *x = %d \n" , *x);

}

int main()
{
    geeks();
    return 0;
}
