#include <stdio.h>

int main(void)

{

int n;

printf("enter the no. : ");

scanf("%d" , &n);

if (n > 0) {

printf("n is a positive no.");

}

else if (n < 0) {

printf("n is a negative no.");

}

else {

printf("n is 0");

}

return 0;

}