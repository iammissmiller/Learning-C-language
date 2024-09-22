#include <stdio.h>

void swap(int* a , int* b)

{
    
   int temp = *a;
   *a = *b;
   *b = temp;
   
}

int main()

{
    
    int x = 10 , y = 30;
    printf("values of x and y before swap " 
            "are : %d , %d\n" , x , y);
    swap(&x,&y);
    printf("values of x and y after swap " 
            "are : %d , %d\n" , x , y);
    return 0;
}
