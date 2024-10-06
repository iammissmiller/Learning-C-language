#include <stdio.h>

int main() {
    
    int arr[5] = {1 , 2 , 3 , 4 , 5 };
    
    int* ptr = &arr[0];
    
    printf("array[3] : %d\n" , arr[3]);
    
    printf("array[3] using pointers to first element = %d" , *(ptr + 3));
    
    return 0;
    
}
