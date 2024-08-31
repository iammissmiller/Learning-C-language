#include <stdio.h>

int main(void)

{

int var;

printf("enter your case no.");

scanf("%d" , &var);


switch(var)
{

case 1 :

printf("case 1 is matched");
break;

case 2:

printf("case 2 is matched");
break;

case 3:

printf("case 3 is matched");
break;

case 4:

printf("case 4 is matched");
break;

default:

printf("default case is matched");
break;

}

return 0;

}