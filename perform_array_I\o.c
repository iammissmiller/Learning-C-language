#include <stdio.h>

int main()
{
    int arr[5];
    
    for(int i = 0; i < 5; i++) {
        scanf("%i" , &arr[i]);
    }
    
    printf("array elements : ");
    for(int i = 0 ; i < 5 ; i++) {
        printf("%i " , arr[i]);
    }
    return 0;
    
}
