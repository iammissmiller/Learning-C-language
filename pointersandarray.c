#include <stdio.h>

int main()

{
    int arr[5] = {10 , 20 ,30 ,40 ,40 , 50};
    int* ptr = &arr[0];
    
    printf("address stored in array name : %p\naddress of 1st array elements : %p\n" , arr , arr[0]);
    
    printf("array elements using pointer : ");
    for (int i = 0; i < 5 ; i++) {
        printf("%d " , *ptr++);
    }
    
    return 0;
}
