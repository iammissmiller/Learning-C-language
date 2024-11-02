#include <stdio.h>

void use(int* a, int* b , int* restrict c)
{

*a += *c;

*b += *c;

}


int main(void)
{

int a = 50, b = 60 , c = 70;

use(&a,&b,&c);

printf("%d %d %d" , a , b , c);

return 0;

}