// C program to illustrate
// gets()
#include <stdio.h>
#define MAX 15

int main()
{
    // defining buffer
    char buf[MAX];

    printf("Enter a string: ");

    // using gets to take string from stdin
    gets(buf);
    printf("string is: %s\n", buf);

    return 0;
}
