#include <stdio.h>

int main(void)

{
    
 int i = 0 , j;
 int count = 0;
 do {
     
     j = 0;
     do {
         
         printf("%d " , count++);
         j++;
         
     }
     while (j <4);
     printf("\n");
     i++;
     
 }
 while (i<3);
 
 return 0;
 
}
