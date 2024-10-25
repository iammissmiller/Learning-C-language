#include <stdio.h>

int main()
{
    int arr[5] = {1 , 2 , 3 , 4 , 5};
    
    int *ptr = arr;
    
    printf("%p" , ptr);
    
    return 0;
}
