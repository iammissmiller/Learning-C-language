#include <stdio.h>

#include <stdlib.h>

_Noreturn void view()
{
    return 10;
}

int main(void)
{
    printf("ready to begin...\n");
    view();
    
    printf("NOT over till now\n");
    return 0;
}
