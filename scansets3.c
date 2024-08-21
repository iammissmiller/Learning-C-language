#include <stdio.h>

int main(void)

{

char str[340];

printf("enter a string with spaces : ");

scanf("%[^\n]s" , str);

printf("you entered : %s" , str);

return 0;


}



















