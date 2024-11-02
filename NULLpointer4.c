#include <stdio.h>

void foo(int* string)
{

if (string == NULL) {

printf("NULL Pointer Passed ");

return ;

}

printf("non null pointer passed ");

}

int main()

{

foo(NULL);

return 0;

}