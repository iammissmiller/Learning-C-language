// C Program to illustrate the use of typedef with
// structures
#include <stdio.h>

// defining structure
typedef struct {
    int a;
} str1;

// another way of using typedef with structures
typedef struct {
    int x;
} str2;

int main()
{
    // creating structure variables using new names
    str1 var1 = { 20 };
    str2 var2 = { 314 };

    printf("var1.a = %d\n", var1.a);
    printf("var2.x = %d\n", var2.x);

    return 0;
}
