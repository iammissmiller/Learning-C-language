#include <stdio.h>

#include <stdlib.h>


int main()
{

int* ptr;
int n , i;

//get no. of elements for array
n = 5;

printf("enter no. of elements : %d\n" , 

n);

//dynamically allocate memory using calloc

ptr  = (int*)calloc(n , sizeof(int));

//check if memory has been
//succesfully allocated

if(ptr == NULL) {

printf("memory not allocated\n");
exit(0);
}

else {

printf("memory succesfully allocated");

//get the elements of array

for(i = 0; i < n ; ++i){

ptr[i] = i + 1;

}

// print the elements of array

printf("the elements of array are : ");
for (i = 0; i < n ; i++){

printf("%d " , ptr[i]);

}

}

return 0;

}