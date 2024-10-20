
#include <stdio.h>
int main()
{
    int var = 10;
    
    int* p;
    
    int** q;
    
    p = &var;
    
    q = &p;
    
    printf("value in var = %d" , var);
    
    printf("\nvalue in p = %d" , *p);
    
    printf("\nvalue in q = %d" , **q);
    
    return 0;
}
