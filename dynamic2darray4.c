#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r = 3, c = 4, len = 0;
    int *ptr, **arr;
    int count = 0, i, j;

    len = sizeof(int*) * r + sizeof(int) * c * r;
    arr = (int**)malloc(len);

    // ptr is now pointing to the first element of the 2D
    // array
    // it points to the memory just after the row pointers
    // allocated memory
    ptr = (int*)(arr + r);

    // for loop to point rows pointer to appropriate
    // location in 2D array
    for (i = 0; i < r; i++)
        arr[i] = (ptr + c * i);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            arr[i][j]
                = ++count; // OR *(*(arr+i)+j) = ++count

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            printf("%d ", arr[i][j]);

    return 0;
}
