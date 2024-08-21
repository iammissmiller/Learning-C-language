#include <stdio.h>

int main(void)

{

char str[50];

int a = 2 , b = 8 , c , d;

sprintf(str , "a = %d b = %d" , a , b);

sscanf(str , "a = %d b = %d" , &c , &d);

printf("c = %d b = %d " , c , d);

return 0;

}


















