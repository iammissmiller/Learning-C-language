#include <stdio.h>

int main()
{
    
    int n = 4;
    
    int *p , *q ;
    
    p = &n;
    
    q = &n;
    
    printf("before addition p = %p" , p);
    
    p = p + 3;
    
    printf("\nafter addition p = %p" , p);
    
    return 0;
    
}
