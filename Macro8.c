#include <stdio.h>

#define square(x) x* x
int main()
{
    // Expanded as 36/6*6
    int x = 36 / square(6);
    printf("%d", x);
    return 0;
}
