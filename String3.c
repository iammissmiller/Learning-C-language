#include <stdio.h>

void printstr( char str[]) 
{
    printf("String is : %s " , str);
}

int main()
{
    
    char str[] = " SOMAWAR " ;
    
    printstr(str);
    
    return 0;
    
}
