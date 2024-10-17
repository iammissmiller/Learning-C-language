#include <stdio.h>

int main()
{
    
    int a = 44;
    int* b = &a;
    
    printf("before increment b = %u" , b);
    
    b++;
    
    printf("\n\nafter increment b = %u\n\n" , b);
    
    float c = 44.44;
    float* d = &c;
    
    printf("before increment d = %u" , d);
    
    d++;
    
    printf("\n\nafter increment d = %u\n\n" , d);
    
    char e = 's';
    char* f = &e;
    
    printf("before increment f = %u" ,f);
    
    f++;
    
    printf("\n\nafter increment f = %u\n\n" , f);
    
    
    return 0;
}
