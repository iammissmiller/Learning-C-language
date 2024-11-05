// C Program to check whether the memory is
// freed or not

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* ptr;
    ptr = (int*)malloc(sizeof(int));

    if (ptr == NULL)
        printf("Memory Is Insuffficient\n");
    else {
        free(ptr);
        printf("Memory Freed\n");
    }
}

