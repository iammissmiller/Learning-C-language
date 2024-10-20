#include <stdio.h>

int main()
{
    int a = 69;
    
    int* p = &a;
    
    int** double_p = &p;
    
    printf("size of normal pointer =  %d", sizeof(p));
    
    printf("\nsize of double p = %d" , sizeof(double_p));
    
    return 0;
}
