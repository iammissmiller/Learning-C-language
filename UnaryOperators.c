#include <stdio.h>

int main(void)

{

int a = 4 , b = 8 , res;

printf("post increment and decrement ");

res = a++;


printf("a is %d and result id %d\n" , a 

, res);

res = a--;

printf("a is %d and result id %d\n" , a , res);

printf("\npre increment and decrement ");

res = ++a;

printf("a is %d and result id %d\n" , a , res);

res = --a;

printf("a is %d and result id %d\n" , a , res);

return 0;

}





























