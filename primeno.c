#include <stdio.h>

#include <math.h>

int main()

{

int n = 19;
int flag = 0;

for (int i = 2 ; i*i <= n; i++) {

if (n % i == 0) {

flag = 1;
break;

}

}

printf("%d is " , n);

if(flag == 1) {

printf("not ");

}

printf("a prime no.\n");

return 0;

}