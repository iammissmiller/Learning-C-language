//switch case application

#include <stdio.h>

int main()
{
 printf("Welcome to Bhugol Bilaspur\n");

 printf("\n");

 printf("How may we help you\n");

 printf("\n");

 printf("If you want to know the timings of out club type 1 :\n");

 printf("\n");

 printf("If you want to know the price for stag entry type 2 :\n");

 printf("\n");

 printf("If you want to know the price for couple entry press 3 :\n");

 printf("\n");

 int a;
 printf("Enter your choice :");
 scanf("%d", &a);

 switch(a) {

      case 1:{
         int b;
         printf("Enter your age\n");
         scanf("%d" , &b);
         if (b < 18)
         { 
            printf("You are underage therefore your timing is from 12 PM to 8pm\n");
          }
         else
         { 
            printf("You can visit our club at anytime between 12 PM to 3 AM\n");
           }
         break;
          }
      case 2:{
          char c;
          printf("Enter your gender (M/F/None)\n");
          scanf(" %c", &c);
          if (c == 'M' || c == 'm') {
              printf("Stag entry price is 1000 rs\n");
              }
          else if (c == 'F' || c == 'f') {
              printf("Stag entry price is 700 rs\n");
              }
          else {
               printf("Stag entry price is 1000 rs\n");
               }
            
          break;
            }
      case 3:
          printf("For couple entry the prices for passes are 1000 rs\n");
          break;
           
      default: 
          printf("wrong choice please press 1 , 2 or 3\n");
          break;
            
           


 }

 
 return 0;

}



































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































 