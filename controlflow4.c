//largest no. among three

#include <stdio.h>

int main()
{

int a,b,c;

printf("enter value for a : ");

scanf("%d" , &a);

printf("enter value for b : ");

scanf("%d" , &b);

printf("enter value for c : ");

scanf("%d" , &c);

if (a > b && a > c)

printf("a is the largest");

else if (b > a && b > c)

printf("b is the largest");

else 

printf("c is the largest");

return 0;
}