// C program to illustrate
// the use of header file
// in C
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Driver Code
int main()
{
    char s1[20] = "12345";
    char s2[10] = "Geeks";
    char s3[10] = "ForGeeks";
    long int res;

    // Find the value of 9^3 using a
    // function in math.h library
    res = pow(9, 3);
    printf("Using math.h, "
           "The value is: %ld\n",
           res);

    // Convert a string to long long int
    // using a function in stdlib.h library
    long int a = atol(s1);
    printf("Using stdlib.h, the string");
    printf(" to long int: %ld\n", a);

    // Copy the string s3 into s2 using
    // using a function in string.h library
    strcpy(s2, s3);
    printf("Using string.h, the strings"
           " s2 and s3: %s %s\n",
           s2, s3);
    return 0;
}
