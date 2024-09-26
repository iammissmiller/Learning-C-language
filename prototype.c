#include <stdio.h>

float calculaterectanglearea(float length , float width);

int main()
{
    
    float length = 7.0;
    float width = 3.0;
    
    float area = calculaterectanglearea(length , width);
    
    printf("the area of rectangle is : %0.2f\n" , area);
    
    return 0;
    
}

float calculaterectanglearea(float length , float width)
{
    
    return length * width;
    
}
