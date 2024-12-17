// C program to illustrate fgets()
#include <stdio.h>
#define MAX 15

int main()
{
    // defining buffer
    char buf[MAX];

    // using fgets to take input from stdin
    fgets(buf, MAX, stdin);
    printf("string is: %s\n", buf);

    return 0;
}
