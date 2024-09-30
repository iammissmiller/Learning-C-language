#include <stdio.h>

#include <math.h>

int main()
{
    float a , b;
    int c;
    a = 8.2;
    b = 5.7;
    c = 3;
    printf("Remainder of %f / %d is %lf\n" , a , c , fmod(a,c));
    printf("remainder of %f / %f is %f\n" , a , b, fmod(a,b));
    
    return 0;
}
