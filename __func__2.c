#include <stdio.h>

void foo(void) {
    printf("%s" , __func__);
}
void bar(void) {
    printf("%s" , __func__);
}

int main()
{
    foo();
    bar();
    return 0;
}
