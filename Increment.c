#include <stdio.h>

void increment()

{
int a = 5;
int b = 5;

int prefix = ++a ;
printf("prefix increment :  %d\n" , prefix);

int postfix = b++ ;
printf("postfix increment :  %d\n" , postfix);

}

int main()

{
increment ();

return 0;

}