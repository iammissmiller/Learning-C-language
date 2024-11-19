#include <stdio.h>
#define LIMIT 100
int main()
{
    printf("%d", LIMIT);
// removing defined macro LIMIT
#undef LIMIT
    // Next line causes error as LIMIT is not defined
    printf("%d", LIMIT);
    return 0;
}
// This code is contributed by Santanu
