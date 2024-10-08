#include <stdio.h>

#define MAX 50

int main()
{
    
    char str[MAX];
    
    fgets(str , MAX , stdin);
    
    printf("string is : \n");
    
    puts(str);
    
    return 0;
    
}
