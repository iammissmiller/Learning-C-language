#include <stdio.h>

int main(void)

{

int age;

printf("Enter your age : ");

scanf("%d" , &age);

if (age >= 18) {

printf("you are %d therefore you are eligible to vote" , age);

}

else {

printf("you are %d therefore you are not eligible to vote" , age);

}

return 0;

}