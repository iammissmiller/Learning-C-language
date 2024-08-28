#include <stdio.h>

int main(void)

{

int y;
int x = 11;

y = sizeof(x++);

printf("%i %i" , y ,x);

return 0;

}