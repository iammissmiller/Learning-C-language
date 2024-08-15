#include <stdio.h>

int main(void)
{

int num;
char ch;
float f;

printf("enter the integer : ");
scanf("%d" , &num);

printf("\nEntered integer is: %d", num);

while((getchar()) != '\n');

printf("\n\nenter the float : ");
scanf("%f" , &f);

printf("\nEntered float is: %f", f);

while (getchar() != '\n');

printf("\n\nenter the character : ");
scanf("%c" , &ch);

printf("\nEntered character is: %c", ch);

return 0;

}






