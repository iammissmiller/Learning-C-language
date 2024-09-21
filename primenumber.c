#include <stdio.h>

int main()

{
    
   int n , k , check;
   
   k = 2;
   check = 1; 
   
   printf("input value of n : ");
   
   scanf("%d" , &n);
   
   while (k < n) {
       
       if (n % k != 0) {
           
           check = 1;
           k = k + 1 ;
           
       }
       
       else {
           
           check = 0;
           
       }
   }
   
   
   if (check == 0) {
       
       printf("N is not prime");
       
   }
   
   else {
       
       printf("N is a prime no.");
       
   }
   
   return 0;
   
   
}
