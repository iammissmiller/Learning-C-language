#include <stdio.h>

int main()
{
    int array [5] = {1 , 2 , 3 ,4 ,5};
    
    printf("size of array before = %d\n" , sizeof(array)/sizeof(int));
    
    array[6];
    
    printf("size of array after = %d\n" , sizeof(array)/sizeof(int) );
    
    return 0;
}
