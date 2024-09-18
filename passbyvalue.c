#include <stdio.h>

void swap(var1 , var2)
{
    int temp = var1;
    var1 = var2;
    var2 = temp;
}

int main()

{
    int var1 = 3,var2 = 2;
    printf("before swap value of var1 and var2 is : %d , %d\n", var1, var2);
    
    swap(var1,var2);
    printf("after swap value of var1 and var2 is : %d , %d\n", var1, var2);

    return 0;
    
}
