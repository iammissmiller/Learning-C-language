#include <stdio.h>

int main()

{

char arr[10][10] = {"GEEKS" , "FOR" , "GEEKS"};

printf("string array elements are :\n ");

for (int i = 0; i < 3 ; i++)
{
printf("%s\n", arr[i]);
}

return 0;

}