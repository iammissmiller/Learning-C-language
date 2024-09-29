#include <stdio.h>

int main()
{
    printf("In file: %s, function : %s() and line: %d" , __FILE__ , __func__, __LINE__);
    return 0;
}
