#include <stdio.h>

int main() 
{
    
    int arr[] = {1 , 2 ,3 ,4 , 5};
    
    int length = sizeof(arr)/sizeof(arr[0]);
    
    printf("the length of the is : %d\n" , length);
    
    return 0;
    
}
