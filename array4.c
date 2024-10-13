#include <stdio.h>

#include <stdlib.h>

#define size 5

struct arraywrapper
{

int arr[size];

};

void modify(struct arraywrapper temp)
{

int *ptr = temp.arr;
int i;

printf("in 'modify()' , before modification\n");

for (i = 0; i < size; ++i)
printf("%d " , ptr[i]);

printf("\n");

for (i = 0; i < size ; ++i)
ptr[i] = 100;

printf("\nin 'modify()' , after modification\n");

for (i = 0; i < size; ++i)
printf("%d " , ptr[i]);


}

int main()
{

int i;

struct arraywrapper obj;
for (i = 0; i < size; i++)
obj.arr[i] = 10;

modify(obj);

printf("\n\nin 'main' , after calling modify()\n");


for (i = 0; i < size ; ++i)
printf("%d " , obj.arr[i]);

printf("\n");

return 0;


}







