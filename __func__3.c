#include <stdio.h>

int __func__= 10;
int main()
{
    printf("%s" , __func__);
    return 0;
}

