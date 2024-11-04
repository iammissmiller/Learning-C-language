#include <stdio.h>
#include <stdlib.h>

int main()
{

int* ptr;
int n,i;

printf("enter number of elements : ");
scanf("%d" , &n);
printf("entered no. of elemnts : %d\n" , n);

//dynamically allocate memory using malloc
ptr = (int*)malloc(n* sizeof(int));

//check if memory has been 
//succesfully allocated or not 


if (ptr==NULL) {

printf("Memory not allocated ");
exit(0);

}

else {

printf("memory succesfully allocated using malloc");

//get elements of array

for(i = 0; i < n ; ++i) {

ptr[i] = i + 1;

}

printf("the elements of the arrays are : ");

for (i = 0; i < n; ++i) {
 
printf("%d" , ptr[i]);

}

}

return 0;

}