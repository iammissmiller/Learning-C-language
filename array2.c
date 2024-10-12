#include <stdio.h>

int main()
{

int a[][2] = {{3,4},{1,2}}; //works

printf("%lu" , sizeof(a)); //prints 4*sizeof(int)

getchar();

return 0;

}