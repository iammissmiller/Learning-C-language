#include <stdio.h>

int main()
{

int arr[2][2] = {{1 , 2},{3 , 4}};

for (int i = 0; i < 2; i++) {

for (int j = 0; j < 2 ; j++) {

printf("arr[%d][%d] : %d  " , i , j , arr[i][j]);

}

printf("\n");

}

return 0;

}