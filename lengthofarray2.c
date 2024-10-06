#include <stdio.h>

int main()

{
    
    int arr[] = { 1 , 2 , 3 ,4 , 4 , 5 ,6 ,6 };
    
    int length = *(&arr + 1) - arr;
    
    printf("number of elements in arr[] is :%d " , length);
    return 0;
    
}
