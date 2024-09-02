#include <stdio.h>
#include <stdlib.h>

int main(void)

{

char choice;

int x, y;

while(1)

{

printf("enter the operator (+ , - , * , /)\nenter x to exit\n");

scanf("%c" , &choice);

if (choice == 'x') 

{

exit(0);

} 

printf("enter the two numbers ");

scanf("%d %d" , &x , &y);

switch (choice)
{
case '+':
printf("%d + %d = %d\n", x, y, x + y);
break;

case '-':
printf("%d - %d = %d\n", x, y, x - y);
break;

case '*':
printf("%d * %d = %d\n", x, y, x * y);
break;
        
case '/':
printf("%d / %d = %d\n", x, y, x / y);
break;

default:
printf("Invalid Operator Input\n");

}

}

return 0;

}






















































































                                                       