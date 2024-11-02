#include <stdio.h>
#include <stdlib.h>

int main()
{

int* ptr;

{

int a = 10;

ptr = &a;

}

printf("%d" , *ptr);

return 0;

}