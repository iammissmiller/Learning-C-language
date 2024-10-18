#include <stdio.h>

int main()
{
    
   int arr[5];
   
   int* p = &arr;
   
   int* q = &arr[0];
   
   if (p==q)
   
   printf("they are equal");
   
   else
   
   printf("they are not equal ");
   
   return 0;
   
}
