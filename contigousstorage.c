#include <stdio.h>

int main()
{
    
    int arr[5]= {1 , 2, 3 ,4 ,5 };
    
    int* ptr1 = &arr[1];
    int* ptr2 = &arr[2];
    
    printf("Adress of arr[1] = %p " , ptr1);
    
    printf("\nAdress of arr[2] = %p  " , ptr2);
    
    return 0;
    
}
