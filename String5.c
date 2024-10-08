#include <stdio.h>

int main()
{
    
    char str[40] = "i am miller";
    
    char* ptr = str;
    
    while (*ptr != '\0') {
        printf("%c" , *ptr);
        
        ptr++;
    }
    
    return 0;
}
