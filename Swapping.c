#include <stdio.h>

int main()
{
    int a=10,b=11,z=0;
    
    printf("before swapping a = %d b = %d ", a ,b);
    
    z=a;
    
    a = b;
    
    b = z;
    
    printf("\n\nafter swapping a = %d b = %d" ,a ,b);
    
    return 0;
}
