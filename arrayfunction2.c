#include <stdio.h>
#include <stdlib.h>

void printarray(int arr[] , int size)
{
    
    printf("array elements : ");
    
    for (int i = 0; i < size ; i++) {
        
        printf("%d " , arr[i]);
        
    }
    
    
}


int main()
{
    
    int arr[8] = { 12 , 4 , 5 , 3 , 7 , 8 , 11, 45};
    
    int size= sizeof(arr) / sizeof(arr[0]);
    
    printarray(arr , size);
    
    return 0;
    
    
}
