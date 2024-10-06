#include <stdio.h>

int arr_length(int arr[])
{
    int i;
    int count = 0;
    for(i = 0; arr[i]!= '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()

{
    
    int arr[4] = {1 , 3 , 5, 6 };
    
    int n;
    
    n = arr_length(arr);
    
    printf("length of array is : %d" , n);
    
    return 0;
}
