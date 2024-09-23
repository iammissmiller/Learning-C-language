#include <stdio.h>
void func(int a , int b )
{
    
    a += b;
    printf("in func , a = %d , b = %d \n" , a , b);
    
}

int main(void)
{
    
    int x = 5 , y = 7;
    func(x,y);
    printf("In main , x = %d y = %d\n" , x , y);
    return 0;
    
}
