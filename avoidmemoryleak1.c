/* Function without memory leak */
#include <stdlib.h>

void f()
{
    int* ptr = (int*)malloc(sizeof(int));

    /* Do some work */

    /* Memory allocated by malloc is released */
    free(ptr);
    return;
}
