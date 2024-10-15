#include <stdio.h>
#include <stdlib.h>

void func(int arr[8])
{
    
    printf("size of arr[] in func() : %d bytes" , sizeof(arr));
    
    
}

int main()
{
    int arr[8] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8};
    
    printf("size of arr[] in main() : %dbytes\n" , sizeof(arr));
    
    func(arr);
    
    return 0;
}
