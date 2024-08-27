#include <stdio.h>

int main(void)

{

int year = 1900;

(year%4==0) ? (year%100!=0) ? printf("the year %d is a leap year" , year) 
            : (year%400==0) ? printf("the year %d is a leap year" , year) 
            : printf("the year %d is not a leap year",year) 
            : printf("the year %d is not a leap year" , year);

return 0;

}