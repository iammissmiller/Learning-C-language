#include <stdio.h>

int main()
{
//most of the modern compiler will fail to run the above //program as the concept of the near, far and huge pointers //is not used anymore.

int near* ptr;

printf("size of near pointer is %d bytes" , sizeof(ptr));

return 0;

}