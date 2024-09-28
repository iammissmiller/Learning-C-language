#include <stdio.h>

#include <stdlib.h>

_Noreturn void show()
{
    printf("BYE BYE");
}

int main(void)
{
    printf("Ready to begin...\n");
    show();
    
    printf("Not over till now\n");
    return 0;
}
