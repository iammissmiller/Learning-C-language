#include <stdio.h>

int* fun()
{

int x = 5;

return &x;

}

int main()
{

int* p = fun();

fflush(stdin);


printf("%d" , *p);

return 0;

}