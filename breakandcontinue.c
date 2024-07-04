//c program to show break and continue

#include <stdio.h>

//driver code??
int main()
{
  for(int i = 1; i <= 10; i++)
   {
     if (i == 8)
       { 
         continue;
        }
     if (i == 10)
        {
          break;
         }
         printf("%d" , i);
    }
 return 0;
}