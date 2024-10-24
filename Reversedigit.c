#include <stdio.h>

int main()
{
    int n = 12345, R = 0,r;
    
    for (n = 12345; n > 0; n = n/10)
    {
        r = n%10;
        R = R*10+r;
    }
    
    printf("\nReverse of Number = %d",R);
    
    return 0;
}
