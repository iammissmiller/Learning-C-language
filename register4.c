#include <stdio.h>

// error (global scope)
register int x = 10;
int main()
{
    // works (inside a block)
    register int i = 10;
    printf("%d\n", i);
    printf("%d", x);
    return 0;
}
