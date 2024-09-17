#include <stdio.h>

int main(void)

{
    int a,b,c;
    
    b = 1;
    
    printf("put value of the number for table : ");
    
    scanf("%d" , &a);
    
    while (b <= 10) {
        c = a * b;
        b = b + 1;
        printf("%d * %d = %d\n" , a,b,c);
    }
    
    return 0;
}
