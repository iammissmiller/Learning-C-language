#include <stdio.h>

int main()
{
    int v[3] = {1 , 2 , 3};
    
    int* p;
    
    p = v;
    
    for (int i = 0; i < 3; i++) {
        printf("value of *p = %d\n" , *p);
        
        printf("value of p = %p\n\n" , p);
        
        p++;
    }
    
    return 0;
    
}
