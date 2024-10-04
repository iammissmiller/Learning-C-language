#include <stdio.h>

float getaverage(float* arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size ; i++) {
        sum += arr[i];
    }
    return sum/size;
}

int main()
{
    float arr[5] = {10 , 20, 30, 40 , 50};
    int n = sizeof(arr) / sizeof(float);
    
    printf("array elements : ");
    for (int i = 0; i < n ; i++) {
        printf("%.0f " , arr[i]);
    }
    
    printf("\nAverage : %.2f " , getaverage(arr , n));
    return 0;
}
