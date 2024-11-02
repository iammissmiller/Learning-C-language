#include <stdio.h>
#include <stdlib.h>


int main()
{

int* ptr = (int*)malloc(sizeof(int));

//after below free call , ptr becomes a //dangling pointer

free(ptr);

printf("memory freed \n");

//removing dangling pointer

ptr = NULL;

return 0;

}