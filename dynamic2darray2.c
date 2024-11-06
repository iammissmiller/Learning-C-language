//Using an array of pointers 
//We can create an array of pointers of 
//size r. Note that from C99, C language
//allows variable sized arrays. After 
//creating an array of pointers, we can 
//dynamically allocate memory for every 
//row.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r = 3, c = 4, i, j, count;

    int* arr[r];
    for (i = 0; i < r; i++)
        arr[i] = (int*)malloc(c * sizeof(int));

    // Note that arr[i][j] is same as *(*(arr+i)+j)
    count = 0;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            arr[i][j] = ++count; // Or *(*(arr+i)+j) = ++count

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            printf("%d ", arr[i][j]);

    /* Code for further processing and free the
      dynamically allocated memory */

    for (int i = 0; i < r; i++)
        free(arr[i]);

    return 0;
}
