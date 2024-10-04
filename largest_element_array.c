#include <stdio.h>

float getmax(int* arr , int size)
{
    int max = arr[0];
    for (int i = 1; i < size ; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[10] = {45 , 234 ,56 ,34 ,242 ,54 ,64 ,332 ,453 , 564};
    
    printf("largest number in array : %f" , getmax(arr , 10));
    
    return 0;
}
