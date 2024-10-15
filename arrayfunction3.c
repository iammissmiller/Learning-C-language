#include <stdio.h>

void printstring(char* str)
{
    
    printf("array of characters : ");
    
    
    int i = 0;
    while (str[i] != '\0') {
        printf("%c " , str[i]);
        i++;
    }
    
}

int main()
{
    char arr[] = "string";
    
    printstring(arr);
    
    return 0;
}
