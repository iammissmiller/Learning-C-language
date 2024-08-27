#include <stdio.h>

void decrement()

{
int a = 5;
int b = 5;

int prefix = --a;
printf("prefix = %d\n" , prefix);

int postfix = b--;
printf("postfix = %d" , postfix);

}


int main()

{

decrement();

return 0;

}