#include <stdio.h>

#include <stdlib.h>

int main()
{

int* jagged[2];

jagged[0] = malloc(sizeof(int) * 1);

jagged[1] = malloc(sizeof(int) * 3);

int size[2] = {1 , 3} , k = 0 , number = 100;

for (int i = 0; i < 2; i++) {

int* p = jagged[i];

for (int j = 0; j < size[k]; j++) {

*p = number++;

p++;

}

k++;

}

k = 0;

for (int i = 0; i < 2; i++) {

int* p = jagged[i];
for (int j = 0; j < size[k]; j++) {

printf("%d " , *p);

p++;

}

printf("\n");
k++;
jagged[i]++;

}

return 0;

}