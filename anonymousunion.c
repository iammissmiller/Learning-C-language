// C Program to demonstrate working of anonymous union
#include <stdio.h>
struct Scope {
    // Anonymous union
    union {
        char alpha;
        int num;
    };
};

int main()
{
    struct Scope x;
    x.num = 65;

    // Note that members of union are accessed directly
    printf("x.alpha = %c, x.num = %d", x.alpha, x.num);

    return 0;
}
