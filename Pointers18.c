#include <stdio.h>

void fun1() { printf("Miller\n"); }
void fun2() { printf("Praptee\n"); }


void wrapper(void (*fun)()) { fun(); }

int main()
{
    wrapper(fun1);
    wrapper(fun2);
    return 0;
}
